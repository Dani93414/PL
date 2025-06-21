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
    READ = 261,                    /* READ  */
    READ_STRING = 262,             /* READ_STRING  */
    PRINT = 263,                   /* PRINT  */
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
    TRUE = 284,                    /* TRUE  */
    FALSE = 285,                   /* FALSE  */
    OR = 286,                      /* OR  */
    AND = 287,                     /* AND  */
    NOT = 288,                     /* NOT  */
    PI = 289,                      /* PI  */
    E_CONST = 290,                 /* E_CONST  */
    GAMMA = 291,                   /* GAMMA  */
    PHI = 292,                     /* PHI  */
    DEG = 293,                     /* DEG  */
    SIN = 294,                     /* SIN  */
    COS = 295,                     /* COS  */
    LOG = 296,                     /* LOG  */
    LOG10 = 297,                   /* LOG10  */
    EXP = 298,                     /* EXP  */
    INTEGER = 299,                 /* INTEGER  */
    ABS = 300,                     /* ABS  */
    ASSIGN = 301,                  /* ASSIGN  */
    LEQ = 302,                     /* LEQ  */
    GEQ = 303,                     /* GEQ  */
    NEQ = 304,                     /* NEQ  */
    LT = 305,                      /* LT  */
    GT = 306,                      /* GT  */
    EQ = 307,                      /* EQ  */
    PLUS = 308,                    /* PLUS  */
    MINUS = 309,                   /* MINUS  */
    MULT = 310,                    /* MULT  */
    DIV = 311,                     /* DIV  */
    DIV_INT = 312,                 /* DIV_INT  */
    MOD = 313,                     /* MOD  */
    POW = 314,                     /* POW  */
    CONCAT = 315,                  /* CONCAT  */
    SEMICOLON = 316,               /* SEMICOLON  */
    LPAREN = 317,                  /* LPAREN  */
    RPAREN = 318,                  /* RPAREN  */
    COMMA = 319,                   /* COMMA  */
    COLON = 320,                   /* COLON  */
    UMINUS = 321                   /* UMINUS  */
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

#line 136 "parser.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */
