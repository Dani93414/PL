%{
#include "parser.hpp"
#include <string.h>
#include <stdlib.h>

void yyerror(const char *s);
%}

%option noyywrap case-insensitive

DIGITO      [0-9]
LETRA       [a-zA-Z]
ID          {LETRA}({LETRA}|{DIGITO}|_)*

ESPACIOS    [ \t\r]+
COMENTARIO1 "#"[^ \n]*.*
COMENTARIO2 "(*"([^*]|\*+[^*)])*"*)"

CADENA      \'([^\\\']|\\.)*\' 
REAL        {DIGITO}+\.{DIGITO}+([eE][+-]?{DIGITO}+)? 
ENTERO      {DIGITO}+ 
NUMERO      ({REAL}|{ENTERO})

%%

{ESPACIOS}                 ;
{COMENTARIO1}              ;
{COMENTARIO2}              ;

"read"                     { return READ; }
"read_string"              { return READ_STRING; }
"print"                    { return PRINT; }
"if"                       { return IF; }
"then"                     { return THEN; }
"else"                     { return ELSE; }
"end_if"                   { return END_IF; }
"while"                    { return WHILE; }
"do"                       { return DO; }
"end_while"                { return END_WHILE; }
"repeat"                   { return REPEAT; }
"until"                    { return UNTIL; }
"for"                      { return FOR; }
"from"                     { return FROM; }
"to"                       { return TO; }
"step"                     { return STEP; }
"end_for"                  { return END_FOR; }
"switch"                   { return SWITCH; }
"case"                     { return CASE; }
"default"                  { return DEFAULT; }
"end_switch"               { return END_SWITCH; }
"clear_screen"             { return CLEAR_SCREEN; }
"place"                    { return PLACE; }

"true"                     { return TRUE; }
"false"                    { return FALSE; }

"or"                       { return OR; }
"and"                      { return AND; }
"not"                      { return NOT; }

"mod"                      { return MOD; }

"pi"                       { return PI; }
"e"                        { return E_CONST; }
"gamma"                    { return GAMMA; }
"phi"                      { return PHI; }
"deg"                      { return DEG; }

"sin"                      { return SIN; }
"cos"                      { return COS; }
"log"                      { return LOG; }
"log10"                    { return LOG10; }
"exp"                      { return EXP; }
"integer"                  { return INTEGER; }
"abs"                      { return ABS; }

":="                       { return ASSIGN; }
"<="                       { return LEQ; }
">="                       { return GEQ; }
"<>"                       { return NEQ; }
"<"                        { return LT; }
">"                        { return GT; }
"="                        { return EQ; }
"+"                        { return PLUS; }
"-"                        { return MINUS; }
"*"                        { return MULT; }
"/"                        { return DIV; }
"//"                       { return DIV_INT; }
"^"                        { return POW; }
"||"                       { return CONCAT; }
";"                        { return SEMICOLON; }
"("                        { return LPAREN; }
")"                        { return RPAREN; }
","                        { return COMMA; }

{CADENA} {
    yylval.strval = strdup(yytext + 1);  // quitar comillas simples
    yylval.strval[strlen(yylval.strval) - 1] = '\0';
    return STRING;
}

{NUMERO} {
    yylval.numval = atof(yytext);
    return NUMBER;
}

{ID} {
    yylval.id = strdup(yytext);
    return ID;
}

. {
    printf("Error léxico: símbolo no reconocido '%s' en línea %d\n", yytext, yylineno);
}

%%
