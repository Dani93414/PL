%{
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "interpreter.tab.h"

extern int lineNumber;
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
NUMBER        {REAL1}|{REAL2}|{SCI}|{INTEGER}

STRING        \'([^\'\\]|\\[nt\\\'])*\'

%%

[ \t\r]+        ;                

\n              { lineNumber++; }  

";"             { return SEMICOLON; }
","             { return COMMA;    }


"#".*           ;                        
"(*"            { BEGIN(COMMENT); }     
<COMMENT>"*)"   { BEGIN(INITIAL); }     
<COMMENT>.|\n   ;                       



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


{NUMBER} {
    yylval.number = atof(yytext);
    return NUMBER;
}


{ID} {
    if (strstr(yytext, "__") || yytext[0] == '_' || yytext[yyleng - 1] == '_') {
        std::cerr << "Error léxico: identificador no válido '" << yytext << "' en línea " << lineNumber << std::endl;
        return ERROR_TOKEN;
    }
    yylval.string = strdup(yytext);
    return IDENTIFIER;
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
    std::cerr << "Error léxico: símbolo no válido '" << yytext << "' en línea " << lineNumber << std::endl;
    return ERROR_TOKEN;
}

%%

