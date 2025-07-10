%{
#include <iostream>
#include <string>
#include <cmath>
#include <list>
#include <setjmp.h>
#include <signal.h>

#include "../error/error.hpp"
#include "../ast/ast.hpp"
#include "../table/table.hpp"
#include "../table/numericVariable.hpp"
#include "../table/logicalVariable.hpp"
#include "../table/numericConstant.hpp"
#include "../table/logicalConstant.hpp"
#include "../table/builtinParameter0.hpp"
#include "../table/builtinParameter1.hpp"
#include "../table/builtinParameter2.hpp"
#include "../table/init.hpp"

int yylex();

extern int lineNumber;
extern bool interactiveMode;
extern int control;
extern std::string progname;
extern jmp_buf begin;
extern lp::Table table;
extern lp::AST *root;
%}

%define parse.error verbose
%start program

%code requires {
  #include <list>
  #include "../ast/ast.hpp"
}

%union {
  double number;
  char * string;
  bool logic;
  lp::ExpNode *expNode;
  std::list<lp::ExpNode *> *parameters;
  std::list<lp::Statement *> *stmts;
  lp::Statement *st;
  lp::AST *prog;
}

%type <expNode> exp cond
%type <parameters> listOfExp restOfListOfExp
%type <stmts> stmtlist caseList
%type <st> stmt asgn print read if while repeat for switchstmt caseBlock clearscreen place

%token SEMICOLON COMMA
%token PRINT READ READ_STRING
%token IF THEN ELSE END_IF
%token WHILE DO END_WHILE
%token REPEAT UNTIL
%token FOR FROM TO STEP END_FOR
%token SWITCH CASE DEFAULT END_SWITCH
%token CLEAR_SCREEN PLACE
%token BOOL_TRUE BOOL_FALSE
%token CONST_PI CONST_E CONST_GAMMA CONST_PHI CONST_DEG
%token INCREMENT DECREMENT FACTORIAL
%token IDENTIFIER ERROR_TOKEN

%token <string> STRING_LITERAL
%token <number> NUMBER
%token <logic> BOOL
%token <string> VARIABLE CONSTANT BUILTIN UNDEFINED

%right ASSIGNMENT
%left OR
%left AND
%nonassoc GREATER_OR_EQUAL LESS_OR_EQUAL GREATER_THAN LESS_THAN EQUAL NOT_EQUAL
%left NOT
%left PLUS MINUS
%left MULTIPLICATION DIVISION INTDIV MODULO
%left CONCAT
%left LPAREN RPAREN
%right POWER
%right INCREMENT DECREMENT FACTORIAL
%nonassoc UNARY

%%

program : stmtlist { root = new lp::AST($1); }
;

stmtlist:
    /* empty */ { $$ = new std::list<lp::Statement *>(); }
  | stmtlist stmt {
      $$ = $1;
      $$->push_back($2);
      if (interactiveMode && control == 0) {
		for (std::list<lp::Statement *>::iterator it = $$->begin(); it != $$->end(); ++it) {
			lp::Statement *stmt = *it;
			stmt->printAST();
			stmt->evaluate();
		}
        $$->clear();
      }
    }
  | stmtlist error { $$ = $1; yyclearin; }
;

stmt:
    SEMICOLON { $$ = new lp::EmptyStmt(); }
  | asgn SEMICOLON
  | print SEMICOLON
  | read SEMICOLON
  | if
  | while
  | repeat
  | for
  | switchstmt
  | clearscreen
  | place
;

controlSymbol:
    /* empty */ { control++; }
;

if:
    IF controlSymbol cond THEN stmtlist END_IF {
        $$ = new lp::IfStmt($3, $5);
        control--;
    }
  | IF controlSymbol cond THEN stmtlist ELSE stmtlist END_IF {
        $$ = new lp::IfStmt($3, $5, $7);
        control--;
    }
;

while:
    WHILE controlSymbol cond DO stmtlist END_WHILE {
        $$ = new lp::WhileStmt($3, $5);
        control--;
    }
;

repeat:
    REPEAT controlSymbol stmtlist UNTIL cond SEMICOLON {
        $$ = new lp::RepeatStmt($5, $3); // $5 = cond, $3 = stmtlist
        control--;
    }
;

for:
    FOR VARIABLE FROM exp TO exp DO stmtlist END_FOR {
        $$ = new lp::ForStmt($2, $4, $6, $8); // step por defecto = 1
    }
  | FOR VARIABLE FROM exp TO exp STEP exp DO stmtlist END_FOR {
        $$ = new lp::ForStmt($2, $4, $6, $8, $10); // step personalizado
    }
;

switchstmt:
    SWITCH LPAREN exp RPAREN caseList END_SWITCH {
        $$ = new lp::SwitchStmt($3, $5);  
    }
;

caseList:
    caseList caseBlock {
        $$ = $1;
        $$->push_back($2);
    }
  | caseBlock {
        $$ = new std::list<lp::Statement *>();
        $$->push_back($1);
    }
;

caseBlock:
    CASE exp ':' stmtlist {
        $$ = new lp::CaseStmt($2, $4);
    }
;

clearscreen:
    CLEAR_SCREEN SEMICOLON {
        $$ = new lp::ClearScreenStmt();
    }
;

place:
    PLACE LPAREN exp COMMA exp RPAREN SEMICOLON {
        $$ = new lp::PlaceStmt($3, $5);
    }
;

cond:
    LPAREN exp RPAREN { $$ = $2; }
;

asgn:
    VARIABLE ASSIGNMENT exp { $$ = new lp::AssignmentStmt($1, $3); }
  | VARIABLE ASSIGNMENT asgn { $$ = new lp::AssignmentStmt($1, (lp::AssignmentStmt*)$3); }
  | CONSTANT ASSIGNMENT exp { execerror("No se puede modificar una constante", $1); }
  | CONSTANT ASSIGNMENT asgn { execerror("No se puede modificar una constante", $1); }
;

print:
    PRINT exp { $$ = new lp::PrintStmt($2); }
;

read:
    READ LPAREN VARIABLE RPAREN { $$ = new lp::ReadStmt($3); }
  | READ LPAREN CONSTANT RPAREN { execerror("No se puede leer en una constante", $3); }
  | READ_STRING LPAREN VARIABLE RPAREN { $$ = new lp::ReadStringStmt($3); }
  | READ_STRING LPAREN CONSTANT RPAREN { execerror("No se puede leer en una constante", $3); }
;

exp:
    NUMBER { $$ = new lp::NumberNode($1); }
  | STRING_LITERAL { $$ = new lp::StringNode($1); }
  | VARIABLE { $$ = new lp::VariableNode($1); }
  | CONSTANT { $$ = new lp::ConstantNode($1); }
  | PLUS exp %prec UNARY { $$ = new lp::UnaryPlusNode($2); }
  | MINUS exp %prec UNARY { $$ = new lp::UnaryMinusNode($2); }
  | NOT exp { $$ = new lp::NotNode($2); }
  | INCREMENT exp %prec UNARY { $$ = new lp::UnaryPlusNode($2); }
  | DECREMENT exp %prec UNARY { $$ = new lp::UnaryMinusNode($2); }
  | exp FACTORIAL             { $$ = new lp::FactorialNode($1); }
  | exp PLUS exp { $$ = new lp::PlusNode($1, $3); }
  | exp MINUS exp { $$ = new lp::MinusNode($1, $3); }
  | exp MULTIPLICATION exp { $$ = new lp::MultiplicationNode($1, $3); }
  | exp DIVISION exp { $$ = new lp::DivisionNode($1, $3); }
  | exp INTDIV exp { $$ = new lp::IntegerDivisionNode($1, $3); }
  | exp MODULO exp { $$ = new lp::ModuloNode($1, $3); }
  | exp POWER exp { $$ = new lp::PowerNode($1, $3); }
  | exp GREATER_THAN exp { $$ = new lp::GreaterThanNode($1, $3); }
  | exp GREATER_OR_EQUAL exp { $$ = new lp::GreaterOrEqualNode($1, $3); }
  | exp LESS_THAN exp { $$ = new lp::LessThanNode($1, $3); }
  | exp LESS_OR_EQUAL exp { $$ = new lp::LessOrEqualNode($1, $3); }
  | exp EQUAL exp { $$ = new lp::EqualNode($1, $3); }
  | exp NOT_EQUAL exp { $$ = new lp::NotEqualNode($1, $3); }
  | exp AND exp { $$ = new lp::AndNode($1, $3); }
  | exp OR exp { $$ = new lp::OrNode($1, $3); }
  | exp CONCAT exp { $$ = new lp::ConcatNode($1, $3); }
  | LPAREN exp RPAREN { $$ = $2; }
;

listOfExp:
    { $$ = new std::list<lp::ExpNode *>(); }
  | exp restOfListOfExp { $$ = $2; $$->push_front($1); }
;

restOfListOfExp:
    { $$ = new std::list<lp::ExpNode *>(); }
  | COMMA exp restOfListOfExp { $$ = $3; $$->push_front($2); }
;

%%
