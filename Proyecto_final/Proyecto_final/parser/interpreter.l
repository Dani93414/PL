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

"||"            { return CONCAT; }

"("             { return LPAREN; }
")"             { return RPAREN; }

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

