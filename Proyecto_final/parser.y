%{
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
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

/* Tokens con valores */
%token <numval> NUMBER
%token <strval> STRING
%token <id> NUMERIC_ID STRING_ID
%token <numval> TRUE FALSE
%token <numval> PI E_CONST GAMMA PHI DEG

/* Tipos de retorno */
%type <numval> expresion
%type <strval> expresion_alfanumerica

/* Palabras reservadas */
%token READ READ_STRING PRINT
%token IF THEN ELSE END_IF
%token WHILE DO END_WHILE
%token REPEAT UNTIL
%token FOR FROM TO STEP END_FOR
%token SWITCH CASE DEFAULT END_SWITCH
%token CLEAR_SCREEN PLACE


%token OR AND NOT

%token INCR DECR FACT


%token SIN COS LOG LOG10 EXP INTEGER ABS SQRT

%token ASSIGN
%token LEQ GEQ NEQ LT GT EQ
%token PLUS MINUS MULT DIV DIV_INT MOD POW
%token CONCAT
%token SEMICOLON LPAREN RPAREN COMMA COLON

/* Precedencias y asociaciones */
%left OR
%left AND
%left EQ NEQ
%left LT LEQ GT GEQ
%left CONCAT
%left PLUS MINUS
%left MULT DIV DIV_INT MOD
%right INCR DECR       
%right FACT             
%right POW
%right NOT
%nonassoc UMINUS

%start programa

%%

// Entrada principal
programa:
    sentencias
;

// Lista de sentencias
sentencias:
    /* vacío */
  | sentencias_aux
;

sentencias_aux:
    sentencia SEMICOLON
  | sentencias_aux sentencia SEMICOLON
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
  | sentencia_switch
  | sentencia_clear
  | sentencia_place
;

// Asignación
asignacion:
    NUMERIC_ID ASSIGN expresion {
        set_variable($1, $3);
        free($1);
    }
  | STRING_ID ASSIGN expresion_alfanumerica {
        set_variable_str($1, std::string($3));
        free($1);
        free($3);
    }
;

// Lectura
lectura:
    READ LPAREN NUMERIC_ID RPAREN {
        leer_numero($3);
        free($3);
    }
  | READ_STRING LPAREN STRING_ID RPAREN {
        leer_cadena($3);
        free($3);
    }
;
// Escritura
escritura:
    PRINT LPAREN expresion_alfanumerica RPAREN {
        imprimir_str($3);
        free($3);
    }
  | PRINT LPAREN expresion RPAREN {
        imprimir($3);
    }
;



// If / Else
sentencia_if:
    IF expresion THEN sentencias END_IF {
        if ($2) {
            // Ejecutar las sentencias THEN
        }
    }
  | IF expresion THEN sentencias ELSE sentencias END_IF {
        if ($2) {
            // Ejecuta el THEN
        } else {
            // Ejecuta el ELSE
        }
    }
;

else_opt:
    /* vacío */
  | ELSE sentencias
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
    FOR NUMERIC_ID FROM expresion TO expresion DO sentencias END_FOR
  | FOR NUMERIC_ID FROM expresion TO expresion STEP expresion DO sentencias END_FOR
;

// Switch
sentencia_switch:
    SWITCH LPAREN expresion RPAREN lista_cases END_SWITCH
;

lista_cases:
    casos_opt default_opt
;

casos_opt:
    /* vacío */
  | casos_opt CASE expresion COLON sentencias
;

default_opt:
    /* vacío */
  | DEFAULT COLON sentencias
;

// Clear screen
sentencia_clear:
    CLEAR_SCREEN {
        clear_screen();
    }
;

// Place cursor
sentencia_place:
    PLACE LPAREN expresion COMMA expresion RPAREN {
        place_cursor((int)$3, (int)$5);
    }
;

// Expresiones numéricas
expresion:
    expresion PLUS expresion       { $$ = $1 + $3; }
  | expresion MINUS expresion      { $$ = $1 - $3; }
  | expresion MULT expresion       { $$ = $1 * $3; }
  | expresion DIV expresion        { $$ = $1 / $3; }
  | expresion DIV_INT expresion    { $$ = (int)$1 / (int)$3; }
  | expresion POW expresion        { $$ = pow($1, $3); }
  | expresion MOD expresion        { $$ = fmod($1, $3); }

  | expresion LT expresion         { $$ = $1 < $3; }
  | expresion LEQ expresion        { $$ = $1 <= $3; }
  | expresion GT expresion         { $$ = $1 > $3; }
  | expresion GEQ expresion        { $$ = $1 >= $3; }
  | expresion EQ expresion         { $$ = $1 == $3; }
  | expresion NEQ expresion        { $$ = $1 != $3; }
  | expresion AND expresion        { $$ = $1 && $3; }
  | expresion OR expresion         { $$ = $1 || $3; }
  | NOT expresion                  { $$ = !$2; }

  | expresion INCR                 {$$ = $1 + 1;}
  | expresion DECR                 {$$ = $1 - 1;}
  | expresion FACT {
    if ($1 < 0 || floor($1) != $1) {
        std::cerr << "Error: factorial solo se aplica a enteros no negativos.\n";
        $$ = 0;
    } else {
        $$ = 1;
        for (int i = 1; i <= (int)$1; ++i)
            $$ *= i;
    }
}

  | SIN LPAREN expresion RPAREN     { $$ = sin($3); }
  | COS LPAREN expresion RPAREN     { $$ = cos($3); }
  | LOG LPAREN expresion RPAREN     { $$ = log($3); }
  | LOG10 LPAREN expresion RPAREN   { $$ = log10($3); }
  | EXP LPAREN expresion RPAREN     { $$ = exp($3); }
  | ABS LPAREN expresion RPAREN     { $$ = fabs($3); }
  | INTEGER LPAREN expresion RPAREN { $$ = (int)$3; }
  | SQRT LPAREN expresion RPAREN { $$ = sqrt($3); }

  | PI       { $$ = $1; }
  | E_CONST  { $$ = $1; }
  | GAMMA    { $$ = $1; }
  | PHI      { $$ = $1; }
  | DEG      { $$ = $1; }

  | TRUE     { $$ = $1; } 
  | FALSE    { $$ = $1; }

  

  | LPAREN expresion RPAREN        { $$ = $2; }
  | MINUS expresion %prec UMINUS   { $$ = -$2; }
  | PLUS expresion                 { $$ = +$2; }

  | NUMBER                         { $$ = $1; }
  | NUMERIC_ID {
        if (tabla_numeros.count($1)) {
            $$ = get_variable($1);
        } else {
            std::cerr << "Error: Variable '" << $1 << "' no es numérica o no está definida.\n";
            $$ = 0;
        }
        free($1);
    }
;

// Expresiones alfanuméricas
expresion_alfanumerica:
    STRING {
        $$ = strdup($1);
        free($1);
    }
  | STRING_ID {
        $$ = strdup(get_variable_str($1).c_str());
        free($1);
    }
  | expresion {
        if (std::isfinite($1)) { // Verifica que la expresión es un número finito
            std::string res = std::to_string($1);
            $$ = strdup(res.c_str());
        } else {
            std::cerr << "Error: la expresión no es un número válido.\n";
            $$ = strdup("");
        }
    }
  | expresion_alfanumerica CONCAT expresion_alfanumerica {
        std::string res = std::string($1) + std::string($3);
        $$ = strdup(res.c_str());
        free($1); free($3);
    }
;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error sintáctico en línea %d: %s\n", yylineno, s);
}
