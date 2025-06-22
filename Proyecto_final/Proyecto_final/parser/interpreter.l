%{
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "interpreter.tab.h"

extern int lineNumber;
%}

/* ------------------------------------- */
/* Configuración del analizador léxico */
/* ------------------------------------- */

/* Hacemos el análisis insensible a mayúsculas/minúsculas */
%option noyywrap
%option caseless

%x ERROR
%x COMMENT

/* ------------------------------------- */
/* Definiciones de expresiones regulares */
/* ------------------------------------- */

DIGIT         [0-9]
LETTER        [a-zA-Z]
ID            {LETTER}({LETTER}|{DIGIT}|_)*
INVALID_ID    (_{ID}|{ID}_|.*__.*)

INTEGER       {DIGIT}+
REAL1         {DIGIT}+\.{DIGIT}*
REAL2         {DIGIT}*\.{DIGIT}+
SCI           ({REAL1}|{REAL2}|{INTEGER})[eE][+-]?{DIGIT}+
NUMBER        {REAL1}|{REAL2}|{SCI}|{INTEGER}

STRING        \'([^\'\\]|\\[nt\\\'])*\'

%%

[ \t\r]+        ;                // Ignorar espacios y tabulaciones

\n              { lineNumber++; }  // Contar líneas

";"             { return SEMICOLON; }
","             { return COMMA;    }

/* ------------------------- */
/* Comentarios */
/* ------------------------- */

"#".*           ;                        // Comentario de línea
"(*"            { BEGIN(COMMENT); }     // Comentario de bloque (inicio)
<COMMENT>"*)"   { BEGIN(INITIAL); }     // Comentario de bloque (fin)
<COMMENT>.|\n   ;                        // Consumir comentario multilinea

/* ------------------------------- */
/* Cadenas entre comillas simples */
/* ------------------------------- */

{STRING} {
    // Eliminar comillas simples y almacenar la cadena interpretando secuencias especiales
    std::string raw(yytext + 1, yyleng - 2);
    std::string result;
    for (size_t i = 0; i < raw.size(); ++i) {
        if (raw[i] == '\\' && i + 1 < raw.size()) {
            switch (raw[++i]) {
                case 'n': result += '\n'; break;
                case 't': result += '\t'; break;
                case '\'': result += '\''; break;
                default: result += raw[i]; break;
            }
        } else {
            result += raw[i];
        }
    }
    yylval.string = strdup(result.c_str());
    return STRING_LITERAL;
}

/* ------------------------- */
/* Números */
/* ------------------------- */

{NUMBER} {
    yylval.number = atof(yytext);
    return NUMBER;
}

/* ------------------------- */
/* Identificadores válidos */
/* ------------------------- */

{ID} {
    if (strstr(yytext, "__") || yytext[0] == '_' || yytext[yyleng - 1] == '_') {
        std::cerr << "Error léxico: identificador no válido '" << yytext << "' en línea " << lineNumber << std::endl;
        return ERROR_TOKEN;
    }
    yylval.string = strdup(yytext);
    return IDENTIFIER;
}

/* ------------------------- */
/* Operadores y símbolos */
/* ------------------------- */

":="            { return ASSIGNMENT; }
"//"            { return INTDIV; }
"mod"           { return MODULO; }

"++"            { return INCREMENT; }
"--"            { return DECREMENT; }
"!"             { return FACTORIAL; }

"+"             { return PLUS; }
"-"             { return MINUS; }
"*"             { return MULTIPLICATION; }
"/"             { return DIVISION; }
"^"             { return POWER; }

"="             { return EQUAL; }
"<>"            { return NOT_EQUAL; }
">="            { return GREATER_OR_EQUAL; }
"<="            { return LESS_OR_EQUAL; }
">"             { return GREATER_THAN; }
"<"             { return LESS_THAN; }

"or"            { return OR; }
"and"           { return AND; }
"not"           { return NOT; }
"||"            { return CONCAT; }

"("             { return LPAREN; }
")"             { return RPAREN; }

/* ------------------------- */
/* Palabras reservadas */
/* ------------------------- */

"read"          { return READ; }
"read_string"   { return READ_STRING; }
"print"         { return PRINT; }

"if"            { return IF; }
"then"          { return THEN; }
"else"          { return ELSE; }
"end_if"        { return END_IF; }

"while"         { return WHILE; }
"do"            { return DO; }
"end_while"     { return END_WHILE; }

"repeat"        { return REPEAT; }
"until"         { return UNTIL; }

"for"           { return FOR; }
"from"          { return FROM; }
"step"          { return STEP; }
"to"            { return TO; }
"end_for"       { return END_FOR; }

"switch"        { return SWITCH; }
"case"          { return CASE; }
"default"       { return DEFAULT; }
"end_switch"    { return END_SWITCH; }

"clear_screen"  { return CLEAR_SCREEN; }
"place"         { return PLACE; }

"pi"            { return CONST_PI; }
"e"             { return CONST_E; }
"gamma"         { return CONST_GAMMA; }
"phi"           { return CONST_PHI; }
"deg"           { return CONST_DEG; }

"true"          { return BOOL_TRUE; }
"false"         { return BOOL_FALSE; }

"sin"|"cos"|"log"|"log10"|"exp"|"sqrt"|"integer"|"abs" {
                    return FUNCTION; 
}

/* ------------------------- */
/* Fin de fichero */
/* ------------------------- */

<<EOF>>         { return 0; }

/* ------------------------- */
/* Caracteres inválidos */
/* ------------------------- */

. {
    std::cerr << "Error léxico: símbolo no válido '" << yytext << "' en línea " << lineNumber << std::endl;
    return ERROR_TOKEN;
}

%%

