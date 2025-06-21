%{
#include "parser.tab.hpp"
#include <string.h>
#include <stdlib.h>
#include <math.h>

void yyerror(const char *s);
extern int yylineno;
%}

%option noyywrap case-insensitive

DIGITO      [0-9]
LETRA       [a-zA-Z]
ID_VALIDO   {LETRA}({LETRA}|{DIGITO}|_)*

ESPACIOS    [ \t\r]+
COMENTARIO1 \#.*
COMENTARIO2 \(\*([^*]|\*+[^*)])*\*+\)

CADENA      \'([^'\\]|\\.)*\'
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

"true"                     { yylval.numval = 1; return TRUE; }
"false"                    { yylval.numval = 0; return FALSE; }

"or"                       { return OR; }
"and"                      { return AND; }
"not"                      { return NOT; }

"mod"                      { return MOD; }

"pi"                       { yylval.numval = M_PI; return PI; }
"e"                        { yylval.numval = M_E; return E_CONST; }
"gamma"                    { yylval.numval = 0.5772; return GAMMA; }
"phi"                      { yylval.numval = 1.6180; return PHI; }
"deg"                      { yylval.numval = 57.2958; return DEG; }

"sin"                      { return SIN; }
"cos"                      { return COS; }
"log"                      { return LOG; }
"log10"                    { return LOG10; }
"exp"                      { return EXP; }
"integer"                  { return INTEGER; }
"abs"                      { return ABS; }
"sqrt"                     { return SQRT; }


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
"//"                       { return DIV_INT; }
"/"                        { return DIV; }
"^"                        { return POW; }
"||"                       { return CONCAT; }

"++"                       { return INCR; }
"--"                       { return DECR; }
"!"                        { return FACT; }

";"                        { return SEMICOLON; }
":"                        { return COLON; }
","                        { return COMMA; }
"("                        { return LPAREN; }
")"                        { return RPAREN; }


{CADENA} {
    size_t len = strlen(yytext);
    if (len < 2) {
        printf("Error léxico: cadena mal formada en línea %d\n", yylineno);
        return 0;
    }
    yylval.strval = (char*)malloc(len - 1);
    strncpy(yylval.strval, yytext + 1, len - 2);
    yylval.strval[len - 2] = '\0';
    return STRING;
}

{NUMERO} {
    yylval.numval = atof(yytext);
    return NUMBER;
}


{ID_VALIDO} {
    const char* text = yytext;
    size_t len = strlen(text);

    // Comprobaciones estructurales
    if (text[0] == '_' || text[len - 1] == '_' || strstr(text, "__")) {
        printf("Error léxico: identificador no válido '%s' en línea %d\n", yytext, yylineno);
        return 0;
    }

    // Lista de palabras reservadas
    const char* palabras_reservadas[] = {
        "read", "read_string", "print",
        "if", "then", "else", "end_if",
        "while", "do", "end_while",
        "repeat", "until",
        "for", "from", "to", "step", "end_for",
        "switch", "case", "default", "end_switch",
        "clear_screen", "place",
        "sin", "cos", "sqrt", "log", "log10", "exp", "integer", "abs",
        "pi", "e", "gamma", "phi", "deg",
        "mod", "sqrt",
        "true", "false",
        "or", "and", "not",
        NULL
    };

    for (int i = 0; palabras_reservadas[i] != NULL; i++) {
        if (strcasecmp(text, palabras_reservadas[i]) == 0) {
            printf("Error léxico: uso de palabra reservada '%s' como identificador en línea %d\n", yytext, yylineno);
            return 0;
        }
    }

    yylval.id = strdup(text);
    return ID;
}


. {
    printf("Error léxico: símbolo no reconocido '%s' en línea %d\n", yytext, yylineno);
}
