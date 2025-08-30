%{
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "interpreter.tab.h"

#include "../table/table.hpp"
#include "../table/numericVariable.hpp"

extern int lineNumber;
extern lp::Table table;
%}

%option noyywrap
%option caseless

%x ERROR
%x COMMENT



DIGIT         [0-9]
LETTER        [a-zA-Z]
ID            {LETTER}({LETTER}|{DIGIT}|_)*
INVALID_ID    (_{ID}|{ID}_|.*__.*)

INTEGER       {DIGIT}+
REAL1         {DIGIT}+\.{DIGIT}*
REAL2         {DIGIT}*\.{DIGIT}+
SCI           ({REAL1}|{REAL2}|{INTEGER})[eE][+-]?{DIGIT}+
NEGATIVE_NUMBER     -({REAL1}|{REAL2}|{SCI}|{INTEGER})
NUMBER        {REAL1}|{REAL2}|{SCI}|{INTEGER}

STRING        \'([^\'\\]|\\[nt\\\'])*\'

%%

[ \t\r]+        ;                

\n              { lineNumber++; }  

";"             { return SEMICOLON; }
","             { return COMMA;    }
":"             { return DOSPUNTOS;    }


"#".*           ;                        
"(*"            { BEGIN(COMMENT); }     
<COMMENT>"*)"   { BEGIN(INITIAL); }     
<COMMENT>.|\n   ;

"sin"       { yylval.string = strdup(yytext); return BUILTIN; }
"cos"       { yylval.string = strdup(yytext); return BUILTIN; }
"log"       { yylval.string = strdup(yytext); return BUILTIN; }
"log10"     { yylval.string = strdup(yytext); return BUILTIN; }
"exp"       { yylval.string = strdup(yytext); return BUILTIN; }
"sqrt"      { yylval.string = strdup(yytext); return BUILTIN; }
"integer"   { yylval.string = strdup(yytext); return BUILTIN; }
"abs"       { yylval.string = strdup(yytext); return BUILTIN; }




{STRING} {
    
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

{NEGATIVE_NUMBER} {
    yylval.number = atof(yytext);
    return NUMBER;
}

{NUMBER} {
    yylval.number = atof(yytext);
    return NUMBER;
}


{ID} {
    // Control de identificadores inválidos
    if (strstr(yytext, "__") || yytext[0] == '_' || yytext[yyleng - 1] == '_') {
        
        yylval.string = strdup(yytext); // guardar el texto del token inválido
        return ERROR_TOKEN;
    }

    // Gestión de identificadores válidos
    std::string identifier(yytext);
    yylval.string = strdup(yytext);

    // Si el identificador no está en la tabla de símbolos, lo insertamos como variable indefinida
    if (table.lookupSymbol(identifier) == false) {
        lp::NumericVariable *n = new lp::NumericVariable(identifier, VARIABLE, UNDEFINED, 0.0);
        table.installSymbol(n);
        return VARIABLE;
    }
    else {
        lp::Symbol *s = table.getSymbol(identifier);
        return s->getToken();
    }
}




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


<<EOF>>         { return 0; }

. {
    
    yylval.string = strdup(yytext); // guardar el texto del token inválido
    return ERROR_TOKEN;
}

%%

