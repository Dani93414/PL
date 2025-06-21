%{
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>
#include "funciones.hpp"
using namespace std;

void yyerror(const char *s);
int yylex();
extern int yylineno;
extern FILE* yyin;
%}

%union {
    double numval;
    char* strval;
    char* id;
}

%token <numval> NUMBER
%token <strval> STRING
%token <id> ID

%type <numval> expresion

// Palabras reservadas
%token READ READ_STRING PRINT
%token IF THEN ELSE END_IF
%token WHILE DO END_WHILE
%token REPEAT UNTIL
%token FOR FROM TO STEP END_FOR
%token SWITCH CASE DEFAULT END_SWITCH
%token CLEAR_SCREEN PLACE

%token TRUE FALSE
%token OR AND NOT

%token PI E_CONST GAMMA PHI DEG
%token SIN COS LOG LOG10 EXP INTEGER ABS

%token ASSIGN
%token LEQ GEQ NEQ LT GT EQ
%token PLUS MINUS MULT DIV DIV_INT MOD POW
%token CONCAT
%token SEMICOLON LPAREN RPAREN COMMA

%start programa

%%

// Punto de entrada
programa:
    sentencias
;

// Lista de sentencias separadas por ;
sentencias:
    sentencia
  | sentencias SEMICOLON sentencia
;

// Sentencias válidas
sentencia:
    asignacion
  | lectura
  | escritura
  | sentencia_if
  | sentencia_while
  | sentencia_repeat
  | sentencia_for
;

// Asignaciones con ejecución
asignacion:
    ID ASSIGN expresion {
        set_variable($1, $3);
        free($1);
    }
;

// Lectura
lectura:
    READ LPAREN ID RPAREN {
        leer_numero($3);
        free($3);
    }
;

// Escritura
escritura:
    PRINT LPAREN expresion RPAREN {
        imprimir($3);
    }
;

// If/Else
sentencia_if:
    IF expresion THEN sentencias END_IF {
        if ($2) { /* ejecutamos el bloque */ }
    }
  | IF expresion THEN sentencias ELSE sentencias END_IF {
        if ($2) { /* ejecuta bloque THEN */ }
        else { /* ejecuta bloque ELSE */ }
    }
;

// While
sentencia_while:
    WHILE expresion DO sentencias END_WHILE
;

// Repeat
sentencia_repeat:
    REPEAT sentencias UNTIL expresion
;

// For
sentencia_for:
    FOR ID FROM expresion TO expresion DO sentencias END_FOR
  | FOR ID FROM expresion TO expresion STEP expresion DO sentencias END_FOR
;

// Expresiones numéricas básicas con retorno
expresion:
    expresion PLUS expresion       { $$ = $1 + $3; }
  | expresion MINUS expresion      { $$ = $1 - $3; }
  | expresion MULT expresion       { $$ = $1 * $3; }
  | expresion DIV expresion        { $$ = $1 / $3; }
  | expresion DIV_INT expresion    { $$ = (int)$1 / (int)$3; }
  | expresion POW expresion        { $$ = pow($1, $3); }
  | expresion MOD expresion        { $$ = fmod($1, $3); }

  // relacionales y lógicas como numérico (0/1)
  | expresion LT expresion         { $$ = $1 < $3; }
  | expresion LEQ expresion        { $$ = $1 <= $3; }
  | expresion GT expresion         { $$ = $1 > $3; }
  | expresion GEQ expresion        { $$ = $1 >= $3; }
  | expresion EQ expresion         { $$ = $1 == $3; }
  | expresion NEQ expresion        { $$ = $1 != $3; }
  | expresion AND expresion        { $$ = $1 && $3; }
  | expresion OR expresion         { $$ = $1 || $3; }
  | NOT expresion                  { $$ = !$2; }

  | LPAREN expresion RPAREN        { $$ = $2; }
  | MINUS expresion                { $$ = -$2; }
  | PLUS expresion                 { $$ = +$2; }

  | NUMBER                         { $$ = $1; }
  | ID                             { $$ = get_variable($1); free($1); }
;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error sintáctico en línea %d: %s\n", yylineno, s);
}
