/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_INTERPRETER_TAB_H_INCLUDED
# define YY_YY_INTERPRETER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 36 "interpreter.y"

  #include <list>
  #include "../ast/ast.hpp"

#line 54 "interpreter.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SEMICOLON = 258,               /* SEMICOLON  */
    COMMA = 259,                   /* COMMA  */
    DOSPUNTOS = 260,               /* DOSPUNTOS  */
    PRINT = 261,                   /* PRINT  */
    READ = 262,                    /* READ  */
    READ_STRING = 263,             /* READ_STRING  */
    IF = 264,                      /* IF  */
    THEN = 265,                    /* THEN  */
    ELSE = 266,                    /* ELSE  */
    END_IF = 267,                  /* END_IF  */
    WHILE = 268,                   /* WHILE  */
    DO = 269,                      /* DO  */
    END_WHILE = 270,               /* END_WHILE  */
    REPEAT = 271,                  /* REPEAT  */
    UNTIL = 272,                   /* UNTIL  */
    FOR = 273,                     /* FOR  */
    FROM = 274,                    /* FROM  */
    TO = 275,                      /* TO  */
    STEP = 276,                    /* STEP  */
    END_FOR = 277,                 /* END_FOR  */
    SWITCH = 278,                  /* SWITCH  */
    CASE = 279,                    /* CASE  */
    DEFAULT = 280,                 /* DEFAULT  */
    END_SWITCH = 281,              /* END_SWITCH  */
    CLEAR_SCREEN = 282,            /* CLEAR_SCREEN  */
    PLACE = 283,                   /* PLACE  */
    BOOL_TRUE = 284,               /* BOOL_TRUE  */
    BOOL_FALSE = 285,              /* BOOL_FALSE  */
    CONST_PI = 286,                /* CONST_PI  */
    CONST_E = 287,                 /* CONST_E  */
    CONST_GAMMA = 288,             /* CONST_GAMMA  */
    CONST_PHI = 289,               /* CONST_PHI  */
    CONST_DEG = 290,               /* CONST_DEG  */
    INCREMENT = 291,               /* INCREMENT  */
    DECREMENT = 292,               /* DECREMENT  */
    FACTORIAL = 293,               /* FACTORIAL  */
    IDENTIFIER = 294,              /* IDENTIFIER  */
    SQRT = 295,                    /* SQRT  */
    LOG = 296,                     /* LOG  */
    LOG10 = 297,                   /* LOG10  */
    ABS = 298,                     /* ABS  */
    EXP = 299,                     /* EXP  */
    SIN = 300,                     /* SIN  */
    COS = 301,                     /* COS  */
    INTEGER = 302,                 /* INTEGER  */
    STRING_LITERAL = 303,          /* STRING_LITERAL  */
    NUMBER = 304,                  /* NUMBER  */
    BOOL = 305,                    /* BOOL  */
    VARIABLE = 306,                /* VARIABLE  */
    CONSTANT = 307,                /* CONSTANT  */
    BUILTIN = 308,                 /* BUILTIN  */
    UNDEFINED = 309,               /* UNDEFINED  */
    ERROR_TOKEN = 310,             /* ERROR_TOKEN  */
    ASSIGNMENT = 311,              /* ASSIGNMENT  */
    OR = 312,                      /* OR  */
    AND = 313,                     /* AND  */
    GREATER_OR_EQUAL = 314,        /* GREATER_OR_EQUAL  */
    LESS_OR_EQUAL = 315,           /* LESS_OR_EQUAL  */
    GREATER_THAN = 316,            /* GREATER_THAN  */
    LESS_THAN = 317,               /* LESS_THAN  */
    EQUAL = 318,                   /* EQUAL  */
    NOT_EQUAL = 319,               /* NOT_EQUAL  */
    NOT = 320,                     /* NOT  */
    PLUS = 321,                    /* PLUS  */
    MINUS = 322,                   /* MINUS  */
    MULTIPLICATION = 323,          /* MULTIPLICATION  */
    DIVISION = 324,                /* DIVISION  */
    INTDIV = 325,                  /* INTDIV  */
    MODULO = 326,                  /* MODULO  */
    CONCAT = 327,                  /* CONCAT  */
    LPAREN = 328,                  /* LPAREN  */
    RPAREN = 329,                  /* RPAREN  */
    POWER = 330,                   /* POWER  */
    UNARY = 331                    /* UNARY  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "interpreter.y"

  double number;
  char * string;
  bool logic;
  lp::ExpNode *expNode;
  std::list<lp::ExpNode *> *parameters;
  std::list<lp::Statement *> *stmts;
  lp::CaseStmt *caseblock;
  std::list<lp::CaseStmt*> *caselist;
  lp::Statement *st;
  lp::AST *prog;

#line 160 "interpreter.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */
