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
    PRINT = 260,                   /* PRINT  */
    READ = 261,                    /* READ  */
    READ_STRING = 262,             /* READ_STRING  */
    IF = 263,                      /* IF  */
    THEN = 264,                    /* THEN  */
    ELSE = 265,                    /* ELSE  */
    END_IF = 266,                  /* END_IF  */
    WHILE = 267,                   /* WHILE  */
    DO = 268,                      /* DO  */
    END_WHILE = 269,               /* END_WHILE  */
    REPEAT = 270,                  /* REPEAT  */
    UNTIL = 271,                   /* UNTIL  */
    FOR = 272,                     /* FOR  */
    FROM = 273,                    /* FROM  */
    TO = 274,                      /* TO  */
    STEP = 275,                    /* STEP  */
    END_FOR = 276,                 /* END_FOR  */
    SWITCH = 277,                  /* SWITCH  */
    CASE = 278,                    /* CASE  */
    DEFAULT = 279,                 /* DEFAULT  */
    END_SWITCH = 280,              /* END_SWITCH  */
    CLEAR_SCREEN = 281,            /* CLEAR_SCREEN  */
    PLACE = 282,                   /* PLACE  */
    BOOL_TRUE = 283,               /* BOOL_TRUE  */
    BOOL_FALSE = 284,              /* BOOL_FALSE  */
    CONST_PI = 285,                /* CONST_PI  */
    CONST_E = 286,                 /* CONST_E  */
    CONST_GAMMA = 287,             /* CONST_GAMMA  */
    CONST_PHI = 288,               /* CONST_PHI  */
    CONST_DEG = 289,               /* CONST_DEG  */
    INCREMENT = 290,               /* INCREMENT  */
    DECREMENT = 291,               /* DECREMENT  */
    FACTORIAL = 292,               /* FACTORIAL  */
    STRING_LITERAL = 293,          /* STRING_LITERAL  */
    NUMBER = 294,                  /* NUMBER  */
    BOOL = 295,                    /* BOOL  */
    VARIABLE = 296,                /* VARIABLE  */
    CONSTANT = 297,                /* CONSTANT  */
    BUILTIN = 298,                 /* BUILTIN  */
    UNDEFINED = 299,               /* UNDEFINED  */
    ASSIGNMENT = 300,              /* ASSIGNMENT  */
    OR = 301,                      /* OR  */
    AND = 302,                     /* AND  */
    GREATER_OR_EQUAL = 303,        /* GREATER_OR_EQUAL  */
    LESS_OR_EQUAL = 304,           /* LESS_OR_EQUAL  */
    GREATER_THAN = 305,            /* GREATER_THAN  */
    LESS_THAN = 306,               /* LESS_THAN  */
    EQUAL = 307,                   /* EQUAL  */
    NOT_EQUAL = 308,               /* NOT_EQUAL  */
    NOT = 309,                     /* NOT  */
    PLUS = 310,                    /* PLUS  */
    MINUS = 311,                   /* MINUS  */
    MULTIPLICATION = 312,          /* MULTIPLICATION  */
    DIVISION = 313,                /* DIVISION  */
    INTDIV = 314,                  /* INTDIV  */
    MODULO = 315,                  /* MODULO  */
    CONCAT = 316,                  /* CONCAT  */
    LPAREN = 317,                  /* LPAREN  */
    RPAREN = 318,                  /* RPAREN  */
    POWER = 319,                   /* POWER  */
    UNARY = 320                    /* UNARY  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "interpreter.y"

  double number;
  char * string;
  bool logic;
  lp::ExpNode *expNode;
  std::list<lp::ExpNode *> *parameters;
  std::list<lp::Statement *> *stmts;
  lp::Statement *st;
  lp::AST *prog;

#line 140 "interpreter.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */
