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

#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    NUMBER = 258,                  /* NUMBER  */
    STRING = 259,                  /* STRING  */
    ID = 260,                      /* ID  */
    TRUE = 261,                    /* TRUE  */
    FALSE = 262,                   /* FALSE  */
    PI = 263,                      /* PI  */
    E_CONST = 264,                 /* E_CONST  */
    GAMMA = 265,                   /* GAMMA  */
    PHI = 266,                     /* PHI  */
    DEG = 267,                     /* DEG  */
    READ = 268,                    /* READ  */
    READ_STRING = 269,             /* READ_STRING  */
    PRINT = 270,                   /* PRINT  */
    IF = 271,                      /* IF  */
    THEN = 272,                    /* THEN  */
    ELSE = 273,                    /* ELSE  */
    END_IF = 274,                  /* END_IF  */
    WHILE = 275,                   /* WHILE  */
    DO = 276,                      /* DO  */
    END_WHILE = 277,               /* END_WHILE  */
    REPEAT = 278,                  /* REPEAT  */
    UNTIL = 279,                   /* UNTIL  */
    FOR = 280,                     /* FOR  */
    FROM = 281,                    /* FROM  */
    TO = 282,                      /* TO  */
    STEP = 283,                    /* STEP  */
    END_FOR = 284,                 /* END_FOR  */
    SWITCH = 285,                  /* SWITCH  */
    CASE = 286,                    /* CASE  */
    DEFAULT = 287,                 /* DEFAULT  */
    END_SWITCH = 288,              /* END_SWITCH  */
    CLEAR_SCREEN = 289,            /* CLEAR_SCREEN  */
    PLACE = 290,                   /* PLACE  */
    OR = 291,                      /* OR  */
    AND = 292,                     /* AND  */
    NOT = 293,                     /* NOT  */
    INCR = 294,                    /* INCR  */
    DECR = 295,                    /* DECR  */
    FACT = 296,                    /* FACT  */
    SIN = 297,                     /* SIN  */
    COS = 298,                     /* COS  */
    LOG = 299,                     /* LOG  */
    LOG10 = 300,                   /* LOG10  */
    EXP = 301,                     /* EXP  */
    INTEGER = 302,                 /* INTEGER  */
    ABS = 303,                     /* ABS  */
    SQRT = 304,                    /* SQRT  */
    ASSIGN = 305,                  /* ASSIGN  */
    LEQ = 306,                     /* LEQ  */
    GEQ = 307,                     /* GEQ  */
    NEQ = 308,                     /* NEQ  */
    LT = 309,                      /* LT  */
    GT = 310,                      /* GT  */
    EQ = 311,                      /* EQ  */
    PLUS = 312,                    /* PLUS  */
    MINUS = 313,                   /* MINUS  */
    MULT = 314,                    /* MULT  */
    DIV = 315,                     /* DIV  */
    DIV_INT = 316,                 /* DIV_INT  */
    MOD = 317,                     /* MOD  */
    POW = 318,                     /* POW  */
    CONCAT = 319,                  /* CONCAT  */
    SEMICOLON = 320,               /* SEMICOLON  */
    LPAREN = 321,                  /* LPAREN  */
    RPAREN = 322,                  /* RPAREN  */
    COMMA = 323,                   /* COMMA  */
    COLON = 324,                   /* COLON  */
    UMINUS = 325                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "parser.y"

    double numval;
    char* strval;
    char* id;

#line 140 "parser.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */
