/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "interpreter.y"

#include <iostream>
#include <string>
#include <cmath>
#include <list>
#include <setjmp.h>
#include <signal.h>

#include "../error/error.hpp"
#include "../ast/ast.hpp"
#include "../table/table.hpp"
#include "../table/numericVariable.hpp"
#include "../table/logicalVariable.hpp"
#include "../table/numericConstant.hpp"
#include "../table/logicalConstant.hpp"
#include "../table/builtinParameter0.hpp"
#include "../table/builtinParameter1.hpp"
#include "../table/builtinParameter2.hpp"
#include "../table/init.hpp"

int yylex();

extern int lineNumber;
extern bool interactiveMode;
extern int control;
extern std::string progname;
extern jmp_buf begin;
extern lp::Table table;
extern lp::AST *root;

#line 102 "interpreter.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "interpreter.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SEMICOLON = 3,                  /* SEMICOLON  */
  YYSYMBOL_COMMA = 4,                      /* COMMA  */
  YYSYMBOL_PRINT = 5,                      /* PRINT  */
  YYSYMBOL_READ = 6,                       /* READ  */
  YYSYMBOL_READ_STRING = 7,                /* READ_STRING  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_THEN = 9,                       /* THEN  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_END_IF = 11,                    /* END_IF  */
  YYSYMBOL_WHILE = 12,                     /* WHILE  */
  YYSYMBOL_DO = 13,                        /* DO  */
  YYSYMBOL_END_WHILE = 14,                 /* END_WHILE  */
  YYSYMBOL_REPEAT = 15,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 16,                     /* UNTIL  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_FROM = 18,                      /* FROM  */
  YYSYMBOL_TO = 19,                        /* TO  */
  YYSYMBOL_STEP = 20,                      /* STEP  */
  YYSYMBOL_END_FOR = 21,                   /* END_FOR  */
  YYSYMBOL_SWITCH = 22,                    /* SWITCH  */
  YYSYMBOL_CASE = 23,                      /* CASE  */
  YYSYMBOL_DEFAULT = 24,                   /* DEFAULT  */
  YYSYMBOL_END_SWITCH = 25,                /* END_SWITCH  */
  YYSYMBOL_CLEAR_SCREEN = 26,              /* CLEAR_SCREEN  */
  YYSYMBOL_PLACE = 27,                     /* PLACE  */
  YYSYMBOL_BOOL_TRUE = 28,                 /* BOOL_TRUE  */
  YYSYMBOL_BOOL_FALSE = 29,                /* BOOL_FALSE  */
  YYSYMBOL_CONST_PI = 30,                  /* CONST_PI  */
  YYSYMBOL_CONST_E = 31,                   /* CONST_E  */
  YYSYMBOL_CONST_GAMMA = 32,               /* CONST_GAMMA  */
  YYSYMBOL_CONST_PHI = 33,                 /* CONST_PHI  */
  YYSYMBOL_CONST_DEG = 34,                 /* CONST_DEG  */
  YYSYMBOL_INCREMENT = 35,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 36,                 /* DECREMENT  */
  YYSYMBOL_FACTORIAL = 37,                 /* FACTORIAL  */
  YYSYMBOL_IDENTIFIER = 38,                /* IDENTIFIER  */
  YYSYMBOL_ERROR_TOKEN = 39,               /* ERROR_TOKEN  */
  YYSYMBOL_STRING_LITERAL = 40,            /* STRING_LITERAL  */
  YYSYMBOL_NUMBER = 41,                    /* NUMBER  */
  YYSYMBOL_BOOL = 42,                      /* BOOL  */
  YYSYMBOL_VARIABLE = 43,                  /* VARIABLE  */
  YYSYMBOL_CONSTANT = 44,                  /* CONSTANT  */
  YYSYMBOL_BUILTIN = 45,                   /* BUILTIN  */
  YYSYMBOL_UNDEFINED = 46,                 /* UNDEFINED  */
  YYSYMBOL_ASSIGNMENT = 47,                /* ASSIGNMENT  */
  YYSYMBOL_OR = 48,                        /* OR  */
  YYSYMBOL_AND = 49,                       /* AND  */
  YYSYMBOL_GREATER_OR_EQUAL = 50,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 51,             /* LESS_OR_EQUAL  */
  YYSYMBOL_GREATER_THAN = 52,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN = 53,                 /* LESS_THAN  */
  YYSYMBOL_EQUAL = 54,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 55,                 /* NOT_EQUAL  */
  YYSYMBOL_NOT = 56,                       /* NOT  */
  YYSYMBOL_PLUS = 57,                      /* PLUS  */
  YYSYMBOL_MINUS = 58,                     /* MINUS  */
  YYSYMBOL_MULTIPLICATION = 59,            /* MULTIPLICATION  */
  YYSYMBOL_DIVISION = 60,                  /* DIVISION  */
  YYSYMBOL_INTDIV = 61,                    /* INTDIV  */
  YYSYMBOL_MODULO = 62,                    /* MODULO  */
  YYSYMBOL_CONCAT = 63,                    /* CONCAT  */
  YYSYMBOL_LPAREN = 64,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 65,                    /* RPAREN  */
  YYSYMBOL_POWER = 66,                     /* POWER  */
  YYSYMBOL_UNARY = 67,                     /* UNARY  */
  YYSYMBOL_68_ = 68,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_program = 70,                   /* program  */
  YYSYMBOL_stmtlist = 71,                  /* stmtlist  */
  YYSYMBOL_stmt = 72,                      /* stmt  */
  YYSYMBOL_controlSymbol = 73,             /* controlSymbol  */
  YYSYMBOL_if = 74,                        /* if  */
  YYSYMBOL_while = 75,                     /* while  */
  YYSYMBOL_repeat = 76,                    /* repeat  */
  YYSYMBOL_for = 77,                       /* for  */
  YYSYMBOL_switchstmt = 78,                /* switchstmt  */
  YYSYMBOL_caseList = 79,                  /* caseList  */
  YYSYMBOL_caseBlock = 80,                 /* caseBlock  */
  YYSYMBOL_clearscreen = 81,               /* clearscreen  */
  YYSYMBOL_place = 82,                     /* place  */
  YYSYMBOL_cond = 83,                      /* cond  */
  YYSYMBOL_asgn = 84,                      /* asgn  */
  YYSYMBOL_print = 85,                     /* print  */
  YYSYMBOL_read = 86,                      /* read  */
  YYSYMBOL_exp = 87                        /* exp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   667

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  153

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   322


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    68,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    89,    89,    93,    94,   106,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   124,   128,   132,
     139,   146,   153,   156,   162,   168,   172,   179,   185,   191,
     197,   201,   202,   203,   204,   208,   212,   213,   214,   215,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SEMICOLON", "COMMA",
  "PRINT", "READ", "READ_STRING", "IF", "THEN", "ELSE", "END_IF", "WHILE",
  "DO", "END_WHILE", "REPEAT", "UNTIL", "FOR", "FROM", "TO", "STEP",
  "END_FOR", "SWITCH", "CASE", "DEFAULT", "END_SWITCH", "CLEAR_SCREEN",
  "PLACE", "BOOL_TRUE", "BOOL_FALSE", "CONST_PI", "CONST_E", "CONST_GAMMA",
  "CONST_PHI", "CONST_DEG", "INCREMENT", "DECREMENT", "FACTORIAL",
  "IDENTIFIER", "ERROR_TOKEN", "STRING_LITERAL", "NUMBER", "BOOL",
  "VARIABLE", "CONSTANT", "BUILTIN", "UNDEFINED", "ASSIGNMENT", "OR",
  "AND", "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "GREATER_THAN", "LESS_THAN",
  "EQUAL", "NOT_EQUAL", "NOT", "PLUS", "MINUS", "MULTIPLICATION",
  "DIVISION", "INTDIV", "MODULO", "CONCAT", "LPAREN", "RPAREN", "POWER",
  "UNARY", "':'", "$accept", "program", "stmtlist", "stmt",
  "controlSymbol", "if", "while", "repeat", "for", "switchstmt",
  "caseList", "caseBlock", "clearscreen", "place", "cond", "asgn", "print",
  "read", "exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-28)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -53,    10,   208,   -53,   -53,   -53,    23,   -52,   -50,   -53,
     -53,   -53,   -25,   -41,    26,   -34,   -16,     2,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,    47,    51,    52,    23,
      23,   -53,   -53,   -53,   -53,    23,    23,    23,    23,   507,
     -39,   -28,    -7,    -7,   -53,    42,    23,   -53,    23,   593,
     593,   -53,   -53,   -53,   -53,   -53,   601,   -53,   -53,   431,
     -53,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    -4,    -3,     0,
       3,    23,    60,    58,   284,    23,   450,    66,   -16,     2,
     -53,   507,   -53,   507,   -53,   526,   545,   564,   564,   564,
     564,   564,   564,   125,   125,   -15,   -15,   -15,   -15,   -13,
     -13,   -53,   -53,   -53,   -53,   469,   -53,   -53,    -7,   144,
      49,    23,   -53,   221,   317,    70,    23,    23,   -12,   -53,
     488,   -53,   -53,   -53,   -53,   117,   404,   -53,   -53,    73,
     347,   -53,    23,   -53,   -53,   -53,   377,    98,   254,   -53,
     -53,   407,   -53
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     5,     6,     0,     0,     0,    17,
      17,    17,     0,     0,     0,     0,     0,     0,     4,    10,
      11,    12,    13,    14,    15,    16,     0,     0,     0,     0,
       0,    41,    40,    42,    43,     0,     0,     0,     0,    35,
       0,     0,     0,     0,     3,     0,     0,    28,     0,     0,
       0,     7,     8,     9,    47,    48,    46,    44,    45,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      32,    31,    34,    33,    66,    64,    63,    58,    60,    57,
      59,    61,    62,    50,    51,    52,    53,    54,    55,    65,
      56,    36,    37,    38,    39,     0,     3,     3,     0,     0,
       0,     0,    30,     0,     0,     0,     0,     0,     0,    26,
       0,     3,    18,    20,    21,     0,     0,    24,    25,     0,
       0,     3,     0,     3,    29,    19,     0,     0,     0,    22,
       3,     0,    23
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,   -42,   -53,    15,   -53,   -53,   -53,   -53,   -53,
     -53,   -51,   -53,   -53,   -40,   -22,   -53,   -53,   -29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    18,    42,    19,    20,    21,    22,    23,
     128,   129,    24,    25,    82,    26,    27,    28,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    55,    84,    83,    77,    78,    56,    57,    58,    59,
       3,   127,    40,   137,    41,    79,    80,    86,    45,    87,
      91,    93,    60,    46,    60,    43,    44,    90,    92,    47,
      48,    49,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,    75,    50,
      51,    76,   115,    76,    52,    53,   119,    81,    29,    30,
      85,   111,   112,    31,    32,   113,    33,    34,   114,   116,
     121,   117,   127,   134,   123,   124,   144,   138,   125,    35,
      36,    37,     0,     0,     0,     0,     0,    38,     0,   140,
       0,     0,   130,     0,     0,     0,     0,   135,   136,   146,
       0,   148,     0,    60,     0,     0,     0,     0,   151,     0,
       0,   150,     0,   147,    61,    62,    63,    64,    65,    66,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
     141,     0,    76,     0,     0,    60,     0,   142,     0,     0,
       0,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      65,    66,    67,    68,    60,    69,    70,    71,    72,    73,
      74,    75,    60,   126,    76,    61,    62,    63,    64,    65,
      66,    67,    68,     0,    69,    70,    71,    72,    73,    74,
      75,    60,     0,    76,    71,    72,    73,    74,    75,     0,
       0,    76,    61,    62,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,    75,    -2,     4,
      76,     5,     0,     6,     7,     8,     9,     0,     0,     0,
      10,     0,     4,    11,     5,    12,     6,     7,     8,     9,
      13,   131,   132,    10,    14,    15,    11,     0,    12,     0,
       0,     0,     0,    13,     0,     0,     0,    14,    15,     0,
       0,    16,    17,     0,     0,     4,     0,     5,     0,     6,
       7,     8,     9,     0,    16,    17,    10,     0,     0,    11,
       0,    12,     0,     0,     0,     0,    13,   -27,     0,   -27,
      14,    15,     0,     0,     0,     4,     0,     5,     0,     6,
       7,     8,     9,     0,     0,     0,    10,    16,    17,    11,
     118,    12,     0,     0,     0,     0,    13,     0,     0,     0,
      14,    15,     0,     0,     0,     0,     0,     0,     4,     0,
       5,     0,     6,     7,     8,     9,     0,    16,    17,    10,
       0,   133,    11,     0,    12,     0,     0,     0,     0,    13,
       0,     0,     0,    14,    15,     0,     0,     0,     4,     0,
       5,     0,     6,     7,     8,     9,     0,     0,   145,    10,
      16,    17,    11,     0,    12,     0,     0,     0,     0,    13,
       0,     0,     0,    14,    15,     0,     0,     0,     4,     0,
       5,     0,     6,     7,     8,     9,     0,     0,     0,    10,
      16,    17,    11,     0,    12,     0,     0,     0,   149,    13,
       0,     0,     0,    14,    15,     0,     0,     0,     4,     0,
       5,     0,     6,     7,     8,     9,     0,     0,     0,    10,
      16,    17,    11,     0,    12,     0,     0,     0,   152,    13,
       0,     0,     0,    14,    15,     0,     0,     0,     0,     0,
       0,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    17,    61,    62,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,    75,    60,     0,
      76,     0,   143,     0,     0,     0,     0,     0,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    60,    69,    70,
      71,    72,    73,    74,    75,     0,    94,    76,    61,    62,
      63,    64,    65,    66,    67,    68,    60,    69,    70,    71,
      72,    73,    74,    75,     0,   120,    76,    61,    62,    63,
      64,    65,    66,    67,    68,    60,    69,    70,    71,    72,
      73,    74,    75,     0,   122,    76,    61,    62,    63,    64,
      65,    66,    67,    68,    60,    69,    70,    71,    72,    73,
      74,    75,     0,   139,    76,    61,    62,    63,    64,    65,
      66,    67,    68,    60,    69,    70,    71,    72,    73,    74,
      75,     0,     0,    76,     0,    62,    63,    64,    65,    66,
      67,    68,    60,    69,    70,    71,    72,    73,    74,    75,
       0,     0,    76,     0,     0,    63,    64,    65,    66,    67,
      68,    60,    69,    70,    71,    72,    73,    74,    75,     0,
       0,    76,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,    69,    70,    71,    72,    73,    74,    75,    29,    30,
      76,     0,     0,    31,    32,     0,    88,    89,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,    37,     0,     0,     0,     0,     0,    38,    69,    70,
      71,    72,    73,    74,    75,     0,     0,    76
};

static const yytype_int16 yycheck[] =
{
      29,    30,    44,    43,    43,    44,    35,    36,    37,    38,
       0,    23,    64,    25,    64,    43,    44,    46,    43,    48,
      49,    50,    37,    64,    37,    10,    11,    49,    50,     3,
      64,    47,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    63,    47,
       3,    66,    81,    66,     3,     3,    85,    64,    35,    36,
      18,    65,    65,    40,    41,    65,    43,    44,    65,     9,
       4,    13,    23,     3,   116,   117,     3,   128,   118,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    64,    -1,   131,
      -1,    -1,   121,    -1,    -1,    -1,    -1,   126,   127,   141,
      -1,   143,    -1,    37,    -1,    -1,    -1,    -1,   150,    -1,
      -1,    13,    -1,   142,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      13,    -1,    66,    -1,    -1,    37,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    37,    57,    58,    59,    60,    61,
      62,    63,    37,    19,    66,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    37,    -1,    66,    59,    60,    61,    62,    63,    -1,
      -1,    66,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,     0,     1,
      66,     3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    -1,     1,    15,     3,    17,     5,     6,     7,     8,
      22,    10,    11,    12,    26,    27,    15,    -1,    17,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,
      -1,    43,    44,    -1,    -1,     1,    -1,     3,    -1,     5,
       6,     7,     8,    -1,    43,    44,    12,    -1,    -1,    15,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    12,    43,    44,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,     5,     6,     7,     8,    -1,    43,    44,    12,
      -1,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,     1,    -1,
       3,    -1,     5,     6,     7,     8,    -1,    -1,    11,    12,
      43,    44,    15,    -1,    17,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,     1,    -1,
       3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      43,    44,    15,    -1,    17,    -1,    -1,    -1,    21,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,     1,    -1,
       3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    12,
      43,    44,    15,    -1,    17,    -1,    -1,    -1,    21,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    37,    -1,
      66,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    37,    57,    58,
      59,    60,    61,    62,    63,    -1,    65,    66,    48,    49,
      50,    51,    52,    53,    54,    55,    37,    57,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    48,    49,    50,
      51,    52,    53,    54,    55,    37,    57,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    48,    49,    50,    51,
      52,    53,    54,    55,    37,    57,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    48,    49,    50,    51,    52,
      53,    54,    55,    37,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    66,    -1,    49,    50,    51,    52,    53,
      54,    55,    37,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    -1,    50,    51,    52,    53,    54,
      55,    37,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    -1,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    35,    36,
      66,    -1,    -1,    40,    41,    -1,    43,    44,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    64,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    70,    71,     0,     1,     3,     5,     6,     7,     8,
      12,    15,    17,    22,    26,    27,    43,    44,    72,    74,
      75,    76,    77,    78,    81,    82,    84,    85,    86,    35,
      36,    40,    41,    43,    44,    56,    57,    58,    64,    87,
      64,    64,    73,    73,    73,    43,    64,     3,    64,    47,
      47,     3,     3,     3,    87,    87,    87,    87,    87,    87,
      37,    48,    49,    50,    51,    52,    53,    54,    55,    57,
      58,    59,    60,    61,    62,    63,    66,    43,    44,    43,
      44,    64,    83,    83,    71,    18,    87,    87,    43,    44,
      84,    87,    84,    87,    65,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    65,    65,    65,    65,    87,     9,    13,    16,    87,
      65,     4,    65,    71,    71,    83,    19,    23,    79,    80,
      87,    10,    11,    14,     3,    87,    87,    25,    80,    65,
      71,    13,    20,    68,     3,    11,    71,    87,    71,    21,
      13,    71,    21
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    73,    74,    74,
      75,    76,    77,    77,    78,    79,    79,    80,    81,    82,
      83,    84,    84,    84,    84,    85,    86,    86,    86,    86,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     0,     6,     8,
       6,     6,     9,    11,     6,     2,     1,     4,     2,     7,
       3,     3,     3,     3,     3,     2,     4,     4,     4,     4,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: stmtlist  */
#line 89 "interpreter.y"
                   { root = new lp::AST((yyvsp[0].stmts)); }
#line 1649 "interpreter.tab.c"
    break;

  case 3: /* stmtlist: %empty  */
#line 93 "interpreter.y"
                { (yyval.stmts) = new std::list<lp::Statement *>(); }
#line 1655 "interpreter.tab.c"
    break;

  case 4: /* stmtlist: stmtlist stmt  */
#line 94 "interpreter.y"
                  {
      (yyval.stmts) = (yyvsp[-1].stmts);
      (yyval.stmts)->push_back((yyvsp[0].st));
      if (interactiveMode && control == 0) {
		for (std::list<lp::Statement *>::iterator it = (yyval.stmts)->begin(); it != (yyval.stmts)->end(); ++it) {
			lp::Statement *stmt = *it;
			stmt->printAST();
			stmt->evaluate();
		}
        (yyval.stmts)->clear();
      }
    }
#line 1672 "interpreter.tab.c"
    break;

  case 5: /* stmtlist: stmtlist error  */
#line 106 "interpreter.y"
                   { (yyval.stmts) = (yyvsp[-1].stmts); yyclearin; }
#line 1678 "interpreter.tab.c"
    break;

  case 6: /* stmt: SEMICOLON  */
#line 110 "interpreter.y"
              { (yyval.st) = new lp::EmptyStmt(); }
#line 1684 "interpreter.tab.c"
    break;

  case 17: /* controlSymbol: %empty  */
#line 124 "interpreter.y"
                { control++; }
#line 1690 "interpreter.tab.c"
    break;

  case 18: /* if: IF controlSymbol cond THEN stmtlist END_IF  */
#line 128 "interpreter.y"
                                               {
        (yyval.st) = new lp::IfStmt((yyvsp[-3].expNode), (yyvsp[-1].stmts));
        control--;
    }
#line 1699 "interpreter.tab.c"
    break;

  case 19: /* if: IF controlSymbol cond THEN stmtlist ELSE stmtlist END_IF  */
#line 132 "interpreter.y"
                                                             {
        (yyval.st) = new lp::IfStmt((yyvsp[-5].expNode), (yyvsp[-3].stmts), (yyvsp[-1].stmts));
        control--;
    }
#line 1708 "interpreter.tab.c"
    break;

  case 20: /* while: WHILE controlSymbol cond DO stmtlist END_WHILE  */
#line 139 "interpreter.y"
                                                   {
        (yyval.st) = new lp::WhileStmt((yyvsp[-3].expNode), (yyvsp[-1].stmts));
        control--;
    }
#line 1717 "interpreter.tab.c"
    break;

  case 21: /* repeat: REPEAT controlSymbol stmtlist UNTIL cond SEMICOLON  */
#line 146 "interpreter.y"
                                                       {
        (yyval.st) = new lp::RepeatStmt((yyvsp[-1].expNode), (yyvsp[-3].stmts)); // $5 = cond, $3 = stmtlist
        control--;
    }
#line 1726 "interpreter.tab.c"
    break;

  case 22: /* for: FOR VARIABLE FROM exp TO exp DO stmtlist END_FOR  */
#line 153 "interpreter.y"
                                                     {
        (yyval.st) = new lp::ForStmt((yyvsp[-7].string), (yyvsp[-5].expNode), (yyvsp[-3].expNode), (yyvsp[-1].stmts)); // step por defecto = 1
    }
#line 1734 "interpreter.tab.c"
    break;

  case 23: /* for: FOR VARIABLE FROM exp TO exp STEP exp DO stmtlist END_FOR  */
#line 156 "interpreter.y"
                                                              {
        (yyval.st) = new lp::ForStmt((yyvsp[-9].string), (yyvsp[-7].expNode), (yyvsp[-5].expNode), (yyvsp[-3].expNode), (yyvsp[-1].stmts)); // step personalizado
    }
#line 1742 "interpreter.tab.c"
    break;

  case 24: /* switchstmt: SWITCH LPAREN exp RPAREN caseList END_SWITCH  */
#line 162 "interpreter.y"
                                                 {
        (yyval.st) = new lp::SwitchStmt((yyvsp[-3].expNode), (yyvsp[-1].stmts));  
    }
#line 1750 "interpreter.tab.c"
    break;

  case 25: /* caseList: caseList caseBlock  */
#line 168 "interpreter.y"
                       {
        (yyval.stmts) = (yyvsp[-1].stmts);
        (yyval.stmts)->push_back((yyvsp[0].st));
    }
#line 1759 "interpreter.tab.c"
    break;

  case 26: /* caseList: caseBlock  */
#line 172 "interpreter.y"
              {
        (yyval.stmts) = new std::list<lp::Statement *>();
        (yyval.stmts)->push_back((yyvsp[0].st));
    }
#line 1768 "interpreter.tab.c"
    break;

  case 27: /* caseBlock: CASE exp ':' stmtlist  */
#line 179 "interpreter.y"
                          {
        (yyval.st) = new lp::CaseStmt((yyvsp[-2].expNode), (yyvsp[0].stmts));
    }
#line 1776 "interpreter.tab.c"
    break;

  case 28: /* clearscreen: CLEAR_SCREEN SEMICOLON  */
#line 185 "interpreter.y"
                           {
        (yyval.st) = new lp::ClearScreenStmt();
    }
#line 1784 "interpreter.tab.c"
    break;

  case 29: /* place: PLACE LPAREN exp COMMA exp RPAREN SEMICOLON  */
#line 191 "interpreter.y"
                                                {
        (yyval.st) = new lp::PlaceStmt((yyvsp[-4].expNode), (yyvsp[-2].expNode));
    }
#line 1792 "interpreter.tab.c"
    break;

  case 30: /* cond: LPAREN exp RPAREN  */
#line 197 "interpreter.y"
                      { (yyval.expNode) = (yyvsp[-1].expNode); }
#line 1798 "interpreter.tab.c"
    break;

  case 31: /* asgn: VARIABLE ASSIGNMENT exp  */
#line 201 "interpreter.y"
                            { (yyval.st) = new lp::AssignmentStmt((yyvsp[-2].string), (yyvsp[0].expNode)); }
#line 1804 "interpreter.tab.c"
    break;

  case 32: /* asgn: VARIABLE ASSIGNMENT asgn  */
#line 202 "interpreter.y"
                             { (yyval.st) = new lp::AssignmentStmt((yyvsp[-2].string), (lp::AssignmentStmt*)(yyvsp[0].st)); }
#line 1810 "interpreter.tab.c"
    break;

  case 33: /* asgn: CONSTANT ASSIGNMENT exp  */
#line 203 "interpreter.y"
                            { execerror("No se puede modificar una constante", (yyvsp[-2].string)); }
#line 1816 "interpreter.tab.c"
    break;

  case 34: /* asgn: CONSTANT ASSIGNMENT asgn  */
#line 204 "interpreter.y"
                             { execerror("No se puede modificar una constante", (yyvsp[-2].string)); }
#line 1822 "interpreter.tab.c"
    break;

  case 35: /* print: PRINT exp  */
#line 208 "interpreter.y"
              { (yyval.st) = new lp::PrintStmt((yyvsp[0].expNode)); }
#line 1828 "interpreter.tab.c"
    break;

  case 36: /* read: READ LPAREN VARIABLE RPAREN  */
#line 212 "interpreter.y"
                                { (yyval.st) = new lp::ReadStmt((yyvsp[-1].string)); }
#line 1834 "interpreter.tab.c"
    break;

  case 37: /* read: READ LPAREN CONSTANT RPAREN  */
#line 213 "interpreter.y"
                                { execerror("No se puede leer en una constante", (yyvsp[-1].string)); }
#line 1840 "interpreter.tab.c"
    break;

  case 38: /* read: READ_STRING LPAREN VARIABLE RPAREN  */
#line 214 "interpreter.y"
                                       { (yyval.st) = new lp::ReadStringStmt((yyvsp[-1].string)); }
#line 1846 "interpreter.tab.c"
    break;

  case 39: /* read: READ_STRING LPAREN CONSTANT RPAREN  */
#line 215 "interpreter.y"
                                       { execerror("No se puede leer en una constante", (yyvsp[-1].string)); }
#line 1852 "interpreter.tab.c"
    break;

  case 40: /* exp: NUMBER  */
#line 219 "interpreter.y"
           { (yyval.expNode) = new lp::NumberNode((yyvsp[0].number)); }
#line 1858 "interpreter.tab.c"
    break;

  case 41: /* exp: STRING_LITERAL  */
#line 220 "interpreter.y"
                   { (yyval.expNode) = new lp::StringNode((yyvsp[0].string)); }
#line 1864 "interpreter.tab.c"
    break;

  case 42: /* exp: VARIABLE  */
#line 221 "interpreter.y"
             { (yyval.expNode) = new lp::VariableNode((yyvsp[0].string)); }
#line 1870 "interpreter.tab.c"
    break;

  case 43: /* exp: CONSTANT  */
#line 222 "interpreter.y"
             { (yyval.expNode) = new lp::ConstantNode((yyvsp[0].string)); }
#line 1876 "interpreter.tab.c"
    break;

  case 44: /* exp: PLUS exp  */
#line 223 "interpreter.y"
                         { (yyval.expNode) = new lp::UnaryPlusNode((yyvsp[0].expNode)); }
#line 1882 "interpreter.tab.c"
    break;

  case 45: /* exp: MINUS exp  */
#line 224 "interpreter.y"
                          { (yyval.expNode) = new lp::UnaryMinusNode((yyvsp[0].expNode)); }
#line 1888 "interpreter.tab.c"
    break;

  case 46: /* exp: NOT exp  */
#line 225 "interpreter.y"
            { (yyval.expNode) = new lp::NotNode((yyvsp[0].expNode)); }
#line 1894 "interpreter.tab.c"
    break;

  case 47: /* exp: INCREMENT exp  */
#line 226 "interpreter.y"
                              { (yyval.expNode) = new lp::UnaryPlusNode((yyvsp[0].expNode)); }
#line 1900 "interpreter.tab.c"
    break;

  case 48: /* exp: DECREMENT exp  */
#line 227 "interpreter.y"
                              { (yyval.expNode) = new lp::UnaryMinusNode((yyvsp[0].expNode)); }
#line 1906 "interpreter.tab.c"
    break;

  case 49: /* exp: exp FACTORIAL  */
#line 228 "interpreter.y"
                              { (yyval.expNode) = new lp::FactorialNode((yyvsp[-1].expNode)); }
#line 1912 "interpreter.tab.c"
    break;

  case 50: /* exp: exp PLUS exp  */
#line 229 "interpreter.y"
                 { (yyval.expNode) = new lp::PlusNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1918 "interpreter.tab.c"
    break;

  case 51: /* exp: exp MINUS exp  */
#line 230 "interpreter.y"
                  { (yyval.expNode) = new lp::MinusNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1924 "interpreter.tab.c"
    break;

  case 52: /* exp: exp MULTIPLICATION exp  */
#line 231 "interpreter.y"
                           { (yyval.expNode) = new lp::MultiplicationNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1930 "interpreter.tab.c"
    break;

  case 53: /* exp: exp DIVISION exp  */
#line 232 "interpreter.y"
                     { (yyval.expNode) = new lp::DivisionNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1936 "interpreter.tab.c"
    break;

  case 54: /* exp: exp INTDIV exp  */
#line 233 "interpreter.y"
                   { (yyval.expNode) = new lp::IntegerDivisionNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1942 "interpreter.tab.c"
    break;

  case 55: /* exp: exp MODULO exp  */
#line 234 "interpreter.y"
                   { (yyval.expNode) = new lp::ModuloNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1948 "interpreter.tab.c"
    break;

  case 56: /* exp: exp POWER exp  */
#line 235 "interpreter.y"
                  { (yyval.expNode) = new lp::PowerNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1954 "interpreter.tab.c"
    break;

  case 57: /* exp: exp GREATER_THAN exp  */
#line 236 "interpreter.y"
                         { (yyval.expNode) = new lp::GreaterThanNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1960 "interpreter.tab.c"
    break;

  case 58: /* exp: exp GREATER_OR_EQUAL exp  */
#line 237 "interpreter.y"
                             { (yyval.expNode) = new lp::GreaterOrEqualNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1966 "interpreter.tab.c"
    break;

  case 59: /* exp: exp LESS_THAN exp  */
#line 238 "interpreter.y"
                      { (yyval.expNode) = new lp::LessThanNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1972 "interpreter.tab.c"
    break;

  case 60: /* exp: exp LESS_OR_EQUAL exp  */
#line 239 "interpreter.y"
                          { (yyval.expNode) = new lp::LessOrEqualNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1978 "interpreter.tab.c"
    break;

  case 61: /* exp: exp EQUAL exp  */
#line 240 "interpreter.y"
                  { (yyval.expNode) = new lp::EqualNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1984 "interpreter.tab.c"
    break;

  case 62: /* exp: exp NOT_EQUAL exp  */
#line 241 "interpreter.y"
                      { (yyval.expNode) = new lp::NotEqualNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1990 "interpreter.tab.c"
    break;

  case 63: /* exp: exp AND exp  */
#line 242 "interpreter.y"
                { (yyval.expNode) = new lp::AndNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 1996 "interpreter.tab.c"
    break;

  case 64: /* exp: exp OR exp  */
#line 243 "interpreter.y"
               { (yyval.expNode) = new lp::OrNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2002 "interpreter.tab.c"
    break;

  case 65: /* exp: exp CONCAT exp  */
#line 244 "interpreter.y"
                   { (yyval.expNode) = new lp::ConcatNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2008 "interpreter.tab.c"
    break;

  case 66: /* exp: LPAREN exp RPAREN  */
#line 245 "interpreter.y"
                      { (yyval.expNode) = (yyvsp[-1].expNode); }
#line 2014 "interpreter.tab.c"
    break;


#line 2018 "interpreter.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 258 "interpreter.y"

