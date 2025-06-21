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
#line 1 "parser.y"

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

#line 87 "parser.tab.cpp"

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

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_READ = 6,                       /* READ  */
  YYSYMBOL_READ_STRING = 7,                /* READ_STRING  */
  YYSYMBOL_PRINT = 8,                      /* PRINT  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_THEN = 10,                      /* THEN  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_END_IF = 12,                    /* END_IF  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_DO = 14,                        /* DO  */
  YYSYMBOL_END_WHILE = 15,                 /* END_WHILE  */
  YYSYMBOL_REPEAT = 16,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 17,                     /* UNTIL  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_FROM = 19,                      /* FROM  */
  YYSYMBOL_TO = 20,                        /* TO  */
  YYSYMBOL_STEP = 21,                      /* STEP  */
  YYSYMBOL_END_FOR = 22,                   /* END_FOR  */
  YYSYMBOL_SWITCH = 23,                    /* SWITCH  */
  YYSYMBOL_CASE = 24,                      /* CASE  */
  YYSYMBOL_DEFAULT = 25,                   /* DEFAULT  */
  YYSYMBOL_END_SWITCH = 26,                /* END_SWITCH  */
  YYSYMBOL_CLEAR_SCREEN = 27,              /* CLEAR_SCREEN  */
  YYSYMBOL_PLACE = 28,                     /* PLACE  */
  YYSYMBOL_TRUE = 29,                      /* TRUE  */
  YYSYMBOL_FALSE = 30,                     /* FALSE  */
  YYSYMBOL_OR = 31,                        /* OR  */
  YYSYMBOL_AND = 32,                       /* AND  */
  YYSYMBOL_NOT = 33,                       /* NOT  */
  YYSYMBOL_PI = 34,                        /* PI  */
  YYSYMBOL_E_CONST = 35,                   /* E_CONST  */
  YYSYMBOL_GAMMA = 36,                     /* GAMMA  */
  YYSYMBOL_PHI = 37,                       /* PHI  */
  YYSYMBOL_DEG = 38,                       /* DEG  */
  YYSYMBOL_SIN = 39,                       /* SIN  */
  YYSYMBOL_COS = 40,                       /* COS  */
  YYSYMBOL_LOG = 41,                       /* LOG  */
  YYSYMBOL_LOG10 = 42,                     /* LOG10  */
  YYSYMBOL_EXP = 43,                       /* EXP  */
  YYSYMBOL_INTEGER = 44,                   /* INTEGER  */
  YYSYMBOL_ABS = 45,                       /* ABS  */
  YYSYMBOL_ASSIGN = 46,                    /* ASSIGN  */
  YYSYMBOL_LEQ = 47,                       /* LEQ  */
  YYSYMBOL_GEQ = 48,                       /* GEQ  */
  YYSYMBOL_NEQ = 49,                       /* NEQ  */
  YYSYMBOL_LT = 50,                        /* LT  */
  YYSYMBOL_GT = 51,                        /* GT  */
  YYSYMBOL_EQ = 52,                        /* EQ  */
  YYSYMBOL_PLUS = 53,                      /* PLUS  */
  YYSYMBOL_MINUS = 54,                     /* MINUS  */
  YYSYMBOL_MULT = 55,                      /* MULT  */
  YYSYMBOL_DIV = 56,                       /* DIV  */
  YYSYMBOL_DIV_INT = 57,                   /* DIV_INT  */
  YYSYMBOL_MOD = 58,                       /* MOD  */
  YYSYMBOL_POW = 59,                       /* POW  */
  YYSYMBOL_CONCAT = 60,                    /* CONCAT  */
  YYSYMBOL_SEMICOLON = 61,                 /* SEMICOLON  */
  YYSYMBOL_LPAREN = 62,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 63,                    /* RPAREN  */
  YYSYMBOL_COMMA = 64,                     /* COMMA  */
  YYSYMBOL_COLON = 65,                     /* COLON  */
  YYSYMBOL_UMINUS = 66,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 67,                  /* $accept  */
  YYSYMBOL_programa = 68,                  /* programa  */
  YYSYMBOL_sentencias = 69,                /* sentencias  */
  YYSYMBOL_sentencias_aux = 70,            /* sentencias_aux  */
  YYSYMBOL_sentencia = 71,                 /* sentencia  */
  YYSYMBOL_asignacion = 72,                /* asignacion  */
  YYSYMBOL_lectura = 73,                   /* lectura  */
  YYSYMBOL_escritura = 74,                 /* escritura  */
  YYSYMBOL_sentencia_if = 75,              /* sentencia_if  */
  YYSYMBOL_sentencia_while = 76,           /* sentencia_while  */
  YYSYMBOL_sentencia_repeat = 77,          /* sentencia_repeat  */
  YYSYMBOL_sentencia_for = 78,             /* sentencia_for  */
  YYSYMBOL_sentencia_switch = 79,          /* sentencia_switch  */
  YYSYMBOL_lista_cases = 80,               /* lista_cases  */
  YYSYMBOL_casos_opt = 81,                 /* casos_opt  */
  YYSYMBOL_default_opt = 82,               /* default_opt  */
  YYSYMBOL_sentencia_clear = 83,           /* sentencia_clear  */
  YYSYMBOL_sentencia_place = 84,           /* sentencia_place  */
  YYSYMBOL_expresion = 85,                 /* expresion  */
  YYSYMBOL_expresion_alfanumerica = 86     /* expresion_alfanumerica  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   485

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  138

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   321


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    70,    70,    74,    76,    80,    81,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,   100,   104,   113,
     117,   125,   136,   139,   148,   153,   169,   174,   179,   180,
     185,   189,   192,   194,   197,   199,   204,   211,   218,   219,
     220,   221,   222,   223,   224,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   236,   237,   238,   240,   241,   254,
     258,   262,   266
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "STRING",
  "ID", "READ", "READ_STRING", "PRINT", "IF", "THEN", "ELSE", "END_IF",
  "WHILE", "DO", "END_WHILE", "REPEAT", "UNTIL", "FOR", "FROM", "TO",
  "STEP", "END_FOR", "SWITCH", "CASE", "DEFAULT", "END_SWITCH",
  "CLEAR_SCREEN", "PLACE", "TRUE", "FALSE", "OR", "AND", "NOT", "PI",
  "E_CONST", "GAMMA", "PHI", "DEG", "SIN", "COS", "LOG", "LOG10", "EXP",
  "INTEGER", "ABS", "ASSIGN", "LEQ", "GEQ", "NEQ", "LT", "GT", "EQ",
  "PLUS", "MINUS", "MULT", "DIV", "DIV_INT", "MOD", "POW", "CONCAT",
  "SEMICOLON", "LPAREN", "RPAREN", "COMMA", "COLON", "UMINUS", "$accept",
  "programa", "sentencias", "sentencias_aux", "sentencia", "asignacion",
  "lectura", "escritura", "sentencia_if", "sentencia_while",
  "sentencia_repeat", "sentencia_for", "sentencia_switch", "lista_cases",
  "casos_opt", "default_opt", "sentencia_clear", "sentencia_place",
  "expresion", "expresion_alfanumerica", YY_NULLPTR
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

#define YYTABLE_NINF (-62)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     457,   -41,   -52,   -29,   -28,    55,    55,   457,    26,   -25,
     -53,   -23,    40,   -53,   457,   -16,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,    -1,    41,    42,     3,
     -53,   -53,    55,    55,    55,    55,    94,   126,    31,    35,
      55,    55,   -53,    -6,   -53,   -53,   -53,   388,     4,    -4,
       0,    20,   272,   -51,   -53,    56,   -53,   301,   457,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,   457,    55,    55,   330,   243,   -53,
      -1,   -53,   -53,   -53,   -53,   -53,   -53,     2,   -31,    43,
     109,   109,   200,   109,   109,   200,    56,    56,     7,     7,
       7,     7,     7,    71,   402,   185,   -53,    55,   402,     4,
     457,   -53,   -53,    55,    61,     5,   359,    93,   140,   -53,
      55,    45,   -53,   -53,   -53,   457,    55,   214,   457,    84,
     172,   457,   -53,   -53,   457,   -53,    85,   -53
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     3,     0,     0,
      36,     0,     0,     2,     4,     0,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,     0,     0,     0,
      57,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     5,    59,    58,    17,    18,     0,
       0,    58,    61,     0,    53,    56,    55,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     6,
       0,    19,    20,    21,    22,    23,    54,     0,    52,    51,
      46,    48,    50,    45,    47,    49,    38,    39,    40,    41,
      42,    44,    43,     0,    27,     0,    32,     0,    61,    62,
       3,    24,    26,     0,     0,    34,     0,     0,     0,    30,
       0,     0,    31,    37,    25,     3,     0,     0,     3,     0,
       0,     3,    35,    28,     3,    33,     0,    29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,    -7,   -53,   105,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     9,   -18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   114,   115,   122,    24,    25,    36,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    60,    30,    45,    46,    26,    30,    45,    51,    80,
      27,    53,    85,   110,   111,    37,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,   120,
     121,    39,    32,    28,    29,    47,    32,    40,    52,    41,
      42,    54,    55,    56,    57,    44,    49,    50,    75,    77,
      78,    87,    33,    34,    76,    79,    33,    34,    30,    81,
      31,    35,   109,    82,    80,    35,    73,   103,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    83,   104,   105,   112,   119,    32,   108,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,   117,    58,   124,   133,   137,    33,    34,
     128,    69,    70,    71,    72,    73,   116,    35,   129,    43,
       0,   132,   118,     0,   135,    59,    60,   136,     0,   127,
       0,     0,     0,     0,     0,   130,     0,     0,     0,     0,
      74,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,   125,     0,     0,    59,    60,     0,
       0,   126,    67,    68,    69,    70,    71,    72,    73,     0,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,   134,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,     0,     0,    59,    60,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    59,    60,    61,    62,     0,
      64,    65,     0,    67,    68,    69,    70,    71,    72,    73,
       0,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    59,    60,     0,     0,     0,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    59,    60,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    59,    60,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    59,    60,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      59,    60,     0,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    59,
      60,     0,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,   -61,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     1,     2,     3,     4,     5,     0,     0,     0,
       6,     0,     0,     7,     0,     8,     0,     0,     0,     0,
       9,     0,     0,     0,    10,    11
};

static const yytype_int16 yycheck[] =
{
       7,    32,     3,     4,     5,    46,     3,     4,     5,    60,
      62,    29,    63,    11,    12,     6,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    24,
      25,     5,    33,    62,    62,    26,    33,    62,    29,    62,
       0,    32,    33,    34,    35,    61,     5,     5,    17,    40,
      41,    58,    53,    54,    19,    61,    53,    54,     3,    63,
       5,    62,    80,    63,    60,    62,    59,    74,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    63,    75,    76,    15,    26,    33,    80,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,   110,    10,    12,    22,    22,    53,    54,
      65,    55,    56,    57,    58,    59,   107,    62,   125,    14,
      -1,   128,   113,    -1,   131,    31,    32,   134,    -1,   120,
      -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,
      14,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    14,    -1,    -1,    31,    32,    -1,
      -1,    21,    53,    54,    55,    56,    57,    58,    59,    -1,
      -1,    31,    32,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    14,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    31,    32,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    31,    32,    47,    48,    -1,
      50,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    31,    32,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    31,    32,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    31,    32,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    31,    32,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      31,    32,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    31,
      32,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    13,    16,    18,    23,
      27,    28,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    83,    84,    46,    62,    62,    62,
       3,     5,    33,    53,    54,    62,    85,    85,    69,     5,
      62,    62,     0,    71,    61,     4,     5,    85,    86,     5,
       5,     5,    85,    86,    85,    85,    85,    85,    10,    31,
      32,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    14,    17,    19,    85,    85,    61,
      60,    63,    63,    63,    63,    63,    63,    69,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    69,    85,    85,    63,    64,    85,    86,
      11,    12,    15,    20,    80,    81,    85,    69,    85,    26,
      24,    25,    82,    63,    12,    14,    21,    85,    65,    69,
      85,    65,    69,    22,    14,    69,    69,    22
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    72,    72,    73,
      73,    74,    74,    74,    75,    75,    76,    77,    78,    78,
      79,    80,    81,    81,    82,    82,    83,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    86,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       4,     4,     4,     4,     5,     7,     5,     4,     9,    11,
       6,     2,     0,     5,     0,     3,     1,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     2,     2,     1,     1,     1,
       1,     1,     3
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
  case 17: /* asignacion: ID ASSIGN expresion  */
#line 100 "parser.y"
                        {
        set_variable((yyvsp[-2].id), (yyvsp[0].numval));
        free((yyvsp[-2].id));
    }
#line 1323 "parser.tab.cpp"
    break;

  case 18: /* asignacion: ID ASSIGN expresion_alfanumerica  */
#line 104 "parser.y"
                                     {
        set_variable_str((yyvsp[-2].id), std::string((yyvsp[0].strval)));
        free((yyvsp[-2].id));
        free((yyvsp[0].strval));
    }
#line 1333 "parser.tab.cpp"
    break;

  case 19: /* lectura: READ LPAREN ID RPAREN  */
#line 113 "parser.y"
                          {
        leer_numero((yyvsp[-1].id));
        free((yyvsp[-1].id));
    }
#line 1342 "parser.tab.cpp"
    break;

  case 20: /* lectura: READ_STRING LPAREN ID RPAREN  */
#line 117 "parser.y"
                                 {
        leer_cadena((yyvsp[-1].id));
        free((yyvsp[-1].id));
    }
#line 1351 "parser.tab.cpp"
    break;

  case 21: /* escritura: PRINT LPAREN ID RPAREN  */
#line 125 "parser.y"
                           {
        std::string nombre((yyvsp[-1].id));
        if (tabla_numeros.count(nombre)) {
            imprimir(get_variable(nombre));
        } else if (tabla_cadenas.count(nombre)) {
            imprimir_str(get_variable_str(nombre));
        } else {
            std::cerr << "Error: Variable '" << nombre << "' no definida.\n";
        }
        free((yyvsp[-1].id));
    }
#line 1367 "parser.tab.cpp"
    break;

  case 22: /* escritura: PRINT LPAREN expresion RPAREN  */
#line 136 "parser.y"
                                  {
        imprimir((yyvsp[-1].numval));
    }
#line 1375 "parser.tab.cpp"
    break;

  case 23: /* escritura: PRINT LPAREN expresion_alfanumerica RPAREN  */
#line 139 "parser.y"
                                               {
        imprimir_str((yyvsp[-1].strval));
        free((yyvsp[-1].strval));
    }
#line 1384 "parser.tab.cpp"
    break;

  case 24: /* sentencia_if: IF expresion THEN sentencias END_IF  */
#line 148 "parser.y"
                                        {
        if ((yyvsp[-3].numval)) {
            // Ejecutar las sentencias THEN
        }
    }
#line 1394 "parser.tab.cpp"
    break;

  case 25: /* sentencia_if: IF expresion THEN sentencias ELSE sentencias END_IF  */
#line 153 "parser.y"
                                                        {
        if ((yyvsp[-5].numval)) {
            // Ejecuta el THEN
        } else {
            // Ejecuta el ELSE
        }
    }
#line 1406 "parser.tab.cpp"
    break;

  case 36: /* sentencia_clear: CLEAR_SCREEN  */
#line 204 "parser.y"
                 {
        clear_screen();
    }
#line 1414 "parser.tab.cpp"
    break;

  case 37: /* sentencia_place: PLACE LPAREN expresion COMMA expresion RPAREN  */
#line 211 "parser.y"
                                                  {
        place_cursor((int)(yyvsp[-3].numval), (int)(yyvsp[-1].numval));
    }
#line 1422 "parser.tab.cpp"
    break;

  case 38: /* expresion: expresion PLUS expresion  */
#line 218 "parser.y"
                                   { (yyval.numval) = (yyvsp[-2].numval) + (yyvsp[0].numval); }
#line 1428 "parser.tab.cpp"
    break;

  case 39: /* expresion: expresion MINUS expresion  */
#line 219 "parser.y"
                                   { (yyval.numval) = (yyvsp[-2].numval) - (yyvsp[0].numval); }
#line 1434 "parser.tab.cpp"
    break;

  case 40: /* expresion: expresion MULT expresion  */
#line 220 "parser.y"
                                   { (yyval.numval) = (yyvsp[-2].numval) * (yyvsp[0].numval); }
#line 1440 "parser.tab.cpp"
    break;

  case 41: /* expresion: expresion DIV expresion  */
#line 221 "parser.y"
                                   { (yyval.numval) = (yyvsp[-2].numval) / (yyvsp[0].numval); }
#line 1446 "parser.tab.cpp"
    break;

  case 42: /* expresion: expresion DIV_INT expresion  */
#line 222 "parser.y"
                                   { (yyval.numval) = (int)(yyvsp[-2].numval) / (int)(yyvsp[0].numval); }
#line 1452 "parser.tab.cpp"
    break;

  case 43: /* expresion: expresion POW expresion  */
#line 223 "parser.y"
                                   { (yyval.numval) = pow((yyvsp[-2].numval), (yyvsp[0].numval)); }
#line 1458 "parser.tab.cpp"
    break;

  case 44: /* expresion: expresion MOD expresion  */
#line 224 "parser.y"
                                   { (yyval.numval) = fmod((yyvsp[-2].numval), (yyvsp[0].numval)); }
#line 1464 "parser.tab.cpp"
    break;

  case 45: /* expresion: expresion LT expresion  */
#line 226 "parser.y"
                                   { (yyval.numval) = (yyvsp[-2].numval) < (yyvsp[0].numval); }
#line 1470 "parser.tab.cpp"
    break;

  case 46: /* expresion: expresion LEQ expresion  */
#line 227 "parser.y"
                                   { (yyval.numval) = (yyvsp[-2].numval) <= (yyvsp[0].numval); }
#line 1476 "parser.tab.cpp"
    break;

  case 47: /* expresion: expresion GT expresion  */
#line 228 "parser.y"
                                   { (yyval.numval) = (yyvsp[-2].numval) > (yyvsp[0].numval); }
#line 1482 "parser.tab.cpp"
    break;

  case 48: /* expresion: expresion GEQ expresion  */
#line 229 "parser.y"
                                   { (yyval.numval) = (yyvsp[-2].numval) >= (yyvsp[0].numval); }
#line 1488 "parser.tab.cpp"
    break;

  case 49: /* expresion: expresion EQ expresion  */
#line 230 "parser.y"
                                   { (yyval.numval) = (yyvsp[-2].numval) == (yyvsp[0].numval); }
#line 1494 "parser.tab.cpp"
    break;

  case 50: /* expresion: expresion NEQ expresion  */
#line 231 "parser.y"
                                   { (yyval.numval) = (yyvsp[-2].numval) != (yyvsp[0].numval); }
#line 1500 "parser.tab.cpp"
    break;

  case 51: /* expresion: expresion AND expresion  */
#line 232 "parser.y"
                                   { (yyval.numval) = (yyvsp[-2].numval) && (yyvsp[0].numval); }
#line 1506 "parser.tab.cpp"
    break;

  case 52: /* expresion: expresion OR expresion  */
#line 233 "parser.y"
                                   { (yyval.numval) = (yyvsp[-2].numval) || (yyvsp[0].numval); }
#line 1512 "parser.tab.cpp"
    break;

  case 53: /* expresion: NOT expresion  */
#line 234 "parser.y"
                                   { (yyval.numval) = !(yyvsp[0].numval); }
#line 1518 "parser.tab.cpp"
    break;

  case 54: /* expresion: LPAREN expresion RPAREN  */
#line 236 "parser.y"
                                   { (yyval.numval) = (yyvsp[-1].numval); }
#line 1524 "parser.tab.cpp"
    break;

  case 55: /* expresion: MINUS expresion  */
#line 237 "parser.y"
                                   { (yyval.numval) = -(yyvsp[0].numval); }
#line 1530 "parser.tab.cpp"
    break;

  case 56: /* expresion: PLUS expresion  */
#line 238 "parser.y"
                                   { (yyval.numval) = +(yyvsp[0].numval); }
#line 1536 "parser.tab.cpp"
    break;

  case 57: /* expresion: NUMBER  */
#line 240 "parser.y"
                                   { (yyval.numval) = (yyvsp[0].numval); }
#line 1542 "parser.tab.cpp"
    break;

  case 58: /* expresion: ID  */
#line 241 "parser.y"
       {
    if (tabla_numeros.count((yyvsp[0].id))) {
        (yyval.numval) = get_variable((yyvsp[0].id));
    } else {
        std::cerr << "Error: Variable '" << (yyvsp[0].id) << "' no es numérica.\n";
        (yyval.numval) = 0;
    }
    free((yyvsp[0].id));
}
#line 1556 "parser.tab.cpp"
    break;

  case 59: /* expresion_alfanumerica: STRING  */
#line 254 "parser.y"
           {
        (yyval.strval) = strdup((yyvsp[0].strval));
        free((yyvsp[0].strval));
    }
#line 1565 "parser.tab.cpp"
    break;

  case 60: /* expresion_alfanumerica: ID  */
#line 258 "parser.y"
       {
        (yyval.strval) = strdup(get_variable_str((yyvsp[0].id)).c_str());
        free((yyvsp[0].id));
    }
#line 1574 "parser.tab.cpp"
    break;

  case 61: /* expresion_alfanumerica: expresion  */
#line 262 "parser.y"
              {
        std::string res = std::to_string((yyvsp[0].numval));
        (yyval.strval) = strdup(res.c_str());
    }
#line 1583 "parser.tab.cpp"
    break;

  case 62: /* expresion_alfanumerica: expresion_alfanumerica CONCAT expresion_alfanumerica  */
#line 266 "parser.y"
                                                         {
        std::string res = std::string((yyvsp[-2].strval)) + std::string((yyvsp[0].strval));
        (yyval.strval) = strdup(res.c_str());
        free((yyvsp[-2].strval)); free((yyvsp[0].strval));
    }
#line 1593 "parser.tab.cpp"
    break;


#line 1597 "parser.tab.cpp"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 273 "parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error sintáctico en línea %d: %s\n", yylineno, s);
}
