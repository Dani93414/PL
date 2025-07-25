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
#include "../includes/macros.hpp"

int yylex();

extern int lineNumber;
extern bool interactiveMode;
extern int control;
extern std::string progname;
extern jmp_buf begin;
extern lp::Table table;
extern lp::AST *root;

#line 103 "interpreter.tab.c"

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
  YYSYMBOL_DOSPUNTOS = 5,                  /* DOSPUNTOS  */
  YYSYMBOL_PRINT = 6,                      /* PRINT  */
  YYSYMBOL_READ = 7,                       /* READ  */
  YYSYMBOL_READ_STRING = 8,                /* READ_STRING  */
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
  YYSYMBOL_BOOL_TRUE = 29,                 /* BOOL_TRUE  */
  YYSYMBOL_BOOL_FALSE = 30,                /* BOOL_FALSE  */
  YYSYMBOL_CONST_PI = 31,                  /* CONST_PI  */
  YYSYMBOL_CONST_E = 32,                   /* CONST_E  */
  YYSYMBOL_CONST_GAMMA = 33,               /* CONST_GAMMA  */
  YYSYMBOL_CONST_PHI = 34,                 /* CONST_PHI  */
  YYSYMBOL_CONST_DEG = 35,                 /* CONST_DEG  */
  YYSYMBOL_INCREMENT = 36,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 37,                 /* DECREMENT  */
  YYSYMBOL_FACTORIAL = 38,                 /* FACTORIAL  */
  YYSYMBOL_IDENTIFIER = 39,                /* IDENTIFIER  */
  YYSYMBOL_SQRT = 40,                      /* SQRT  */
  YYSYMBOL_LOG = 41,                       /* LOG  */
  YYSYMBOL_LOG10 = 42,                     /* LOG10  */
  YYSYMBOL_ABS = 43,                       /* ABS  */
  YYSYMBOL_EXP = 44,                       /* EXP  */
  YYSYMBOL_SIN = 45,                       /* SIN  */
  YYSYMBOL_COS = 46,                       /* COS  */
  YYSYMBOL_INTEGER = 47,                   /* INTEGER  */
  YYSYMBOL_STRING_LITERAL = 48,            /* STRING_LITERAL  */
  YYSYMBOL_NUMBER = 49,                    /* NUMBER  */
  YYSYMBOL_BOOL = 50,                      /* BOOL  */
  YYSYMBOL_VARIABLE = 51,                  /* VARIABLE  */
  YYSYMBOL_CONSTANT = 52,                  /* CONSTANT  */
  YYSYMBOL_BUILTIN = 53,                   /* BUILTIN  */
  YYSYMBOL_UNDEFINED = 54,                 /* UNDEFINED  */
  YYSYMBOL_ERROR_TOKEN = 55,               /* ERROR_TOKEN  */
  YYSYMBOL_ASSIGNMENT = 56,                /* ASSIGNMENT  */
  YYSYMBOL_OR = 57,                        /* OR  */
  YYSYMBOL_AND = 58,                       /* AND  */
  YYSYMBOL_GREATER_OR_EQUAL = 59,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 60,             /* LESS_OR_EQUAL  */
  YYSYMBOL_GREATER_THAN = 61,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN = 62,                 /* LESS_THAN  */
  YYSYMBOL_EQUAL = 63,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 64,                 /* NOT_EQUAL  */
  YYSYMBOL_NOT = 65,                       /* NOT  */
  YYSYMBOL_PLUS = 66,                      /* PLUS  */
  YYSYMBOL_MINUS = 67,                     /* MINUS  */
  YYSYMBOL_MULTIPLICATION = 68,            /* MULTIPLICATION  */
  YYSYMBOL_DIVISION = 69,                  /* DIVISION  */
  YYSYMBOL_INTDIV = 70,                    /* INTDIV  */
  YYSYMBOL_MODULO = 71,                    /* MODULO  */
  YYSYMBOL_CONCAT = 72,                    /* CONCAT  */
  YYSYMBOL_LPAREN = 73,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 74,                    /* RPAREN  */
  YYSYMBOL_POWER = 75,                     /* POWER  */
  YYSYMBOL_UNARY = 76,                     /* UNARY  */
  YYSYMBOL_YYACCEPT = 77,                  /* $accept  */
  YYSYMBOL_program = 78,                   /* program  */
  YYSYMBOL_stmtlist = 79,                  /* stmtlist  */
  YYSYMBOL_stmt = 80,                      /* stmt  */
  YYSYMBOL_controlSymbol = 81,             /* controlSymbol  */
  YYSYMBOL_if = 82,                        /* if  */
  YYSYMBOL_while = 83,                     /* while  */
  YYSYMBOL_repeat = 84,                    /* repeat  */
  YYSYMBOL_for = 85,                       /* for  */
  YYSYMBOL_switchstmt = 86,                /* switchstmt  */
  YYSYMBOL_caseList = 87,                  /* caseList  */
  YYSYMBOL_caseBlock = 88,                 /* caseBlock  */
  YYSYMBOL_clearscreen = 89,               /* clearscreen  */
  YYSYMBOL_place = 90,                     /* place  */
  YYSYMBOL_cond = 91,                      /* cond  */
  YYSYMBOL_asgn = 92,                      /* asgn  */
  YYSYMBOL_print = 93,                     /* print  */
  YYSYMBOL_read = 94,                      /* read  */
  YYSYMBOL_exp = 95                        /* exp  */
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
#define YYLAST   1213

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   331


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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    95,    95,    99,   100,   112,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   136,   140,
     144,   151,   158,   165,   168,   174,   177,   183,   187,   194,
     200,   206,   212,   216,   217,   218,   219,   223,   227,   228,
     229,   230,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270
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
  "DOSPUNTOS", "PRINT", "READ", "READ_STRING", "IF", "THEN", "ELSE",
  "END_IF", "WHILE", "DO", "END_WHILE", "REPEAT", "UNTIL", "FOR", "FROM",
  "TO", "STEP", "END_FOR", "SWITCH", "CASE", "DEFAULT", "END_SWITCH",
  "CLEAR_SCREEN", "PLACE", "BOOL_TRUE", "BOOL_FALSE", "CONST_PI",
  "CONST_E", "CONST_GAMMA", "CONST_PHI", "CONST_DEG", "INCREMENT",
  "DECREMENT", "FACTORIAL", "IDENTIFIER", "SQRT", "LOG", "LOG10", "ABS",
  "EXP", "SIN", "COS", "INTEGER", "STRING_LITERAL", "NUMBER", "BOOL",
  "VARIABLE", "CONSTANT", "BUILTIN", "UNDEFINED", "ERROR_TOKEN",
  "ASSIGNMENT", "OR", "AND", "GREATER_OR_EQUAL", "LESS_OR_EQUAL",
  "GREATER_THAN", "LESS_THAN", "EQUAL", "NOT_EQUAL", "NOT", "PLUS",
  "MINUS", "MULTIPLICATION", "DIVISION", "INTDIV", "MODULO", "CONCAT",
  "LPAREN", "RPAREN", "POWER", "UNARY", "$accept", "program", "stmtlist",
  "stmt", "controlSymbol", "if", "while", "repeat", "for", "switchstmt",
  "caseList", "caseBlock", "clearscreen", "place", "cond", "asgn", "print",
  "read", "exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-58)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-30)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -58,    13,   300,   -58,   -58,   -58,  1106,   -47,   -41,   -58,
     -58,   -58,   -27,   -40,    31,   -25,   -12,    -9,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,    63,    64,    65,
    1106,  1106,    -4,    -2,    -1,     0,     2,     3,     7,     8,
     -58,   -58,   -58,   -58,  1106,  1106,  1106,  1106,  1012,   -33,
     -31,     9,     9,   -58,    66,  1106,   -58,  1106,  1140,  1140,
     -58,   -58,   -58,   -58,   -58,  1106,  1106,  1106,  1106,  1106,
    1106,  1106,  1106,    98,   -58,   -58,   526,   -58,   -58,   -58,
    1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,
    1106,  1106,  1106,  1106,  1106,  1106,    10,    15,    16,    17,
    1106,    73,    72,   400,  1106,   572,    41,   -12,    -9,   -58,
    1012,   -58,  1012,   612,   652,   692,   732,   772,   812,   852,
     892,   -58,   123,  1029,  1069,  1069,  1069,  1069,  1069,  1069,
     198,   198,   -29,   -29,   -29,   -29,   -26,   -26,   -58,   -58,
     -58,   -58,   932,   -58,   -58,     9,   227,    70,  1106,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   370,   430,
      84,  1106,  1106,   -20,   -58,   972,   -58,   -58,   -58,   -58,
     142,    83,    90,   -58,   -58,    94,   460,   -58,  1106,   -58,
     -58,   -58,   -58,   491,   182,   340,   521,   -58,   -58,   -58,
     552,   -58
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     5,     6,     0,     0,     0,    18,
      18,    18,     0,     0,     0,     0,     0,     0,    17,     4,
      10,    11,    12,    13,    14,    15,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    42,    44,    45,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     3,     0,     0,    30,     0,     0,     0,
       7,     8,     9,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    46,    47,     0,    51,    52,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    44,    45,    34,
      33,    36,    35,     0,     0,     0,     0,     0,     0,     0,
       0,    70,    68,    67,    62,    64,    61,    63,    65,    66,
      54,    55,    56,    57,    58,    59,    69,    60,    38,    39,
      40,    41,     0,     3,     3,     0,     0,     0,     0,    76,
      73,    74,    78,    75,    71,    72,    77,    32,     0,     0,
       0,     0,     0,     0,    28,     0,     3,    19,    21,    22,
       0,     0,     0,    25,    27,     0,     0,     3,     0,     3,
       3,    31,    20,     0,     0,     0,     0,    23,     3,    26,
       0,    24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -58,   -58,   -51,   -58,    12,   -58,   -58,   -58,   -58,   -58,
     -58,   -57,   -58,   -58,   -49,   -28,   -58,   -58,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    19,    51,    20,    21,    22,    23,    24,
     163,   164,    25,    26,   101,    27,    28,    29,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,    64,   103,   102,   162,   172,   173,    77,    78,    79,
      77,    78,    79,     3,    73,    74,    75,    76,    96,    97,
      98,    99,    52,    53,    54,   105,    49,   106,   110,   112,
     109,   111,    50,    55,    56,   113,   114,   115,   116,   117,
     118,   119,   120,    94,    58,   148,    95,    59,    57,    95,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    60,    61,    62,    65,
     142,    66,    67,    68,   146,    69,    70,    77,    78,    79,
      71,    72,   100,   143,   138,   104,   144,   169,   179,   139,
     140,   141,   158,   159,   162,   180,   160,   181,    80,    81,
      82,    83,    84,    85,    86,    87,   174,    88,    89,    90,
      91,    92,    93,    94,     0,   176,    95,     0,   165,    77,
      78,    79,     0,     0,     0,     0,   183,     0,   185,   186,
       0,   170,   171,     0,    77,    78,    79,   190,     0,     0,
      80,    81,    82,    83,    84,    85,    86,    87,   184,    88,
      89,    90,    91,    92,    93,    94,   177,     0,    95,    77,
      78,    79,     0,   178,    88,    89,    90,    91,    92,    93,
      94,     0,     0,    95,     0,     0,     0,     0,    77,    78,
      79,    81,    82,    83,    84,    85,    86,    87,     0,    88,
      89,    90,    91,    92,    93,    94,   188,     0,    95,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,     0,    95,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    78,    79,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,   161,    88,    89,
      90,    91,    92,    93,    94,     0,     0,    95,     0,     0,
       0,     0,     0,    77,    78,    79,    90,    91,    92,    93,
      94,     0,     0,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,    81,    82,    83,    84,    85,
      86,    87,     0,    88,    89,    90,    91,    92,    93,    94,
      -2,     4,    95,     5,     0,     0,     6,     7,     8,     9,
       0,     0,     0,    10,     0,     0,    11,     0,    12,     0,
       0,     0,     0,    13,     0,     0,     0,    14,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     5,     0,     0,     6,     7,     8,     9,
       0,    16,    17,    10,     0,    18,    11,     0,    12,     0,
       0,     0,     0,    13,   -29,   -29,   -29,    14,    15,     0,
       0,     4,     0,     5,     0,     0,     6,     7,     8,     9,
       0,   166,   167,    10,     0,     0,    11,     0,    12,     0,
       0,    16,    17,    13,     0,    18,     0,    14,    15,     0,
       0,     4,     0,     5,     0,     0,     6,     7,     8,     9,
       0,     0,     0,    10,     0,     0,    11,   145,    12,     0,
       0,    16,    17,    13,     0,    18,     0,    14,    15,     0,
       0,     4,     0,     5,     0,     0,     6,     7,     8,     9,
       0,     0,     0,    10,     0,   168,    11,     0,    12,     0,
       0,    16,    17,    13,     0,    18,     0,    14,    15,     0,
       0,     4,     0,     5,     0,     0,     6,     7,     8,     9,
       0,     0,   182,    10,     0,     0,    11,     0,    12,     0,
       0,    16,    17,    13,     0,    18,     0,    14,    15,     0,
       0,     0,     4,     0,     5,     0,     0,     6,     7,     8,
       9,     0,     0,     0,    10,     0,     0,    11,     0,    12,
       0,    16,    17,   187,    13,    18,     0,     0,    14,    15,
       0,     0,     4,     0,     5,     0,     0,     6,     7,     8,
       9,     0,     0,     0,    10,     0,     0,    11,     0,    12,
       0,     0,    16,    17,    13,     0,    18,   189,    14,    15,
       0,     0,     0,     4,     0,     5,     0,     0,     6,     7,
       8,     9,    77,    78,    79,    10,     0,     0,    11,     0,
      12,     0,    16,    17,   191,    13,    18,     0,     0,    14,
      15,     0,     0,    80,    81,    82,    83,    84,    85,    86,
      87,     0,    88,    89,    90,    91,    92,    93,    94,     0,
     121,    95,     0,    16,    17,     0,     0,    18,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,   147,    95,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,   149,    95,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,   150,    95,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,   151,    95,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,   152,    95,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,   153,    95,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,   154,    95,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,   155,    95,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,   156,    95,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,   157,    95,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,   175,    95,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,    78,    79,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,     0,    95,    82,    83,
      84,    85,    86,    87,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,    95,    77,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,    88,    89,    90,    91,    92,
      93,    94,    30,    31,    95,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    45,    46,     0,     0,    30,    31,     0,    47,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
       0,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,    46,     0,     0,
       0,     0,     0,    47
};

static const yytype_int16 yycheck[] =
{
      30,    31,    53,    52,    24,    25,    26,    36,    37,    38,
      36,    37,    38,     0,    44,    45,    46,    47,    51,    52,
      51,    52,    10,    11,    51,    55,    73,    57,    58,    59,
      58,    59,    73,    73,     3,    65,    66,    67,    68,    69,
      70,    71,    72,    72,    56,     4,    75,    56,    73,    75,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     3,     3,     3,    73,
     100,    73,    73,    73,   104,    73,    73,    36,    37,    38,
      73,    73,    73,    10,    74,    19,    14,     3,     5,    74,
      74,    74,   143,   144,    24,     5,   145,     3,    57,    58,
      59,    60,    61,    62,    63,    64,   163,    66,    67,    68,
      69,    70,    71,    72,    -1,   166,    75,    -1,   148,    36,
      37,    38,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,
      -1,   161,   162,    -1,    36,    37,    38,   188,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,   178,    66,
      67,    68,    69,    70,    71,    72,    14,    -1,    75,    36,
      37,    38,    -1,    21,    66,    67,    68,    69,    70,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    36,    37,
      38,    58,    59,    60,    61,    62,    63,    64,    -1,    66,
      67,    68,    69,    70,    71,    72,    14,    -1,    75,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    75,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    20,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    68,    69,    70,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    70,    71,    72,
       0,     1,    75,     3,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    18,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,    -1,    -1,     6,     7,     8,     9,
      -1,    51,    52,    13,    -1,    55,    16,    -1,    18,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    -1,
      -1,     1,    -1,     3,    -1,    -1,     6,     7,     8,     9,
      -1,    11,    12,    13,    -1,    -1,    16,    -1,    18,    -1,
      -1,    51,    52,    23,    -1,    55,    -1,    27,    28,    -1,
      -1,     1,    -1,     3,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    17,    18,    -1,
      -1,    51,    52,    23,    -1,    55,    -1,    27,    28,    -1,
      -1,     1,    -1,     3,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    13,    -1,    15,    16,    -1,    18,    -1,
      -1,    51,    52,    23,    -1,    55,    -1,    27,    28,    -1,
      -1,     1,    -1,     3,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    -1,    -1,    16,    -1,    18,    -1,
      -1,    51,    52,    23,    -1,    55,    -1,    27,    28,    -1,
      -1,    -1,     1,    -1,     3,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    18,
      -1,    51,    52,    22,    23,    55,    -1,    -1,    27,    28,
      -1,    -1,     1,    -1,     3,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    18,
      -1,    -1,    51,    52,    23,    -1,    55,    26,    27,    28,
      -1,    -1,    -1,     1,    -1,     3,    -1,    -1,     6,     7,
       8,     9,    36,    37,    38,    13,    -1,    -1,    16,    -1,
      18,    -1,    51,    52,    22,    23,    55,    -1,    -1,    27,
      28,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    69,    70,    71,    72,    -1,
      74,    75,    -1,    51,    52,    -1,    -1,    55,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    75,    59,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    70,
      71,    72,    -1,    -1,    75,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    69,    70,
      71,    72,    36,    37,    75,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    -1,    -1,    36,    37,    -1,    73,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    73
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    78,    79,     0,     1,     3,     6,     7,     8,     9,
      13,    16,    18,    23,    27,    28,    51,    52,    55,    80,
      82,    83,    84,    85,    86,    89,    90,    92,    93,    94,
      36,    37,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    51,    52,    65,    66,    67,    73,    95,    73,
      73,    81,    81,    81,    51,    73,     3,    73,    56,    56,
       3,     3,     3,    95,    95,    73,    73,    73,    73,    73,
      73,    73,    73,    95,    95,    95,    95,    36,    37,    38,
      57,    58,    59,    60,    61,    62,    63,    64,    66,    67,
      68,    69,    70,    71,    72,    75,    51,    52,    51,    52,
      73,    91,    91,    79,    19,    95,    95,    51,    52,    92,
      95,    92,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    74,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    74,    74,
      74,    74,    95,    10,    14,    17,    95,    74,     4,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    79,    79,
      91,    20,    24,    87,    88,    95,    11,    12,    15,     3,
      95,    95,    25,    26,    88,    74,    79,    14,    21,     5,
       5,     3,    12,    79,    95,    79,    79,    22,    14,    26,
      79,    22
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    77,    78,    79,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    81,    82,
      82,    83,    84,    85,    85,    86,    86,    87,    87,    88,
      89,    90,    91,    92,    92,    92,    92,    93,    94,    94,
      94,    94,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     6,
       8,     6,     6,     9,    11,     6,     9,     2,     1,     4,
       2,     7,     3,     3,     3,     3,     3,     2,     4,     4,
       4,     4,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     4,     4,     4,     4,     4,     4
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
#line 95 "interpreter.y"
                   { root = new lp::AST((yyvsp[0].stmts)); }
#line 1785 "interpreter.tab.c"
    break;

  case 3: /* stmtlist: %empty  */
#line 99 "interpreter.y"
                { (yyval.stmts) = new std::list<lp::Statement *>(); }
#line 1791 "interpreter.tab.c"
    break;

  case 4: /* stmtlist: stmtlist stmt  */
#line 100 "interpreter.y"
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
#line 1808 "interpreter.tab.c"
    break;

  case 5: /* stmtlist: stmtlist error  */
#line 112 "interpreter.y"
                   { (yyval.stmts) = (yyvsp[-1].stmts); yyclearin; }
#line 1814 "interpreter.tab.c"
    break;

  case 6: /* stmt: SEMICOLON  */
#line 116 "interpreter.y"
              { (yyval.st) = new lp::EmptyStmt(); }
#line 1820 "interpreter.tab.c"
    break;

  case 17: /* stmt: ERROR_TOKEN  */
#line 127 "interpreter.y"
                { 
        std::cerr << BIRED << "Error line " << lineNumber << " --> Lexical error" << std::endl;
        std::cerr << RESET << "\tSímbolo no válido '" << (yyvsp[0].string) << "'" << std::endl;
        free((yyvsp[0].string));
        (yyval.st) = new lp::EmptyStmt();
    }
#line 1831 "interpreter.tab.c"
    break;

  case 18: /* controlSymbol: %empty  */
#line 136 "interpreter.y"
                { control++; }
#line 1837 "interpreter.tab.c"
    break;

  case 19: /* if: IF controlSymbol cond THEN stmtlist END_IF  */
#line 140 "interpreter.y"
                                               {
        (yyval.st) = new lp::IfStmt((yyvsp[-3].expNode), (yyvsp[-1].stmts));
        control--;
    }
#line 1846 "interpreter.tab.c"
    break;

  case 20: /* if: IF controlSymbol cond THEN stmtlist ELSE stmtlist END_IF  */
#line 144 "interpreter.y"
                                                             {
        (yyval.st) = new lp::IfStmt((yyvsp[-5].expNode), (yyvsp[-3].stmts), (yyvsp[-1].stmts));
        control--;
    }
#line 1855 "interpreter.tab.c"
    break;

  case 21: /* while: WHILE controlSymbol cond DO stmtlist END_WHILE  */
#line 151 "interpreter.y"
                                                   {
        (yyval.st) = new lp::WhileStmt((yyvsp[-3].expNode), (yyvsp[-1].stmts));
        control--;
    }
#line 1864 "interpreter.tab.c"
    break;

  case 22: /* repeat: REPEAT controlSymbol stmtlist UNTIL cond SEMICOLON  */
#line 158 "interpreter.y"
                                                       {
        (yyval.st) = new lp::RepeatStmt((yyvsp[-1].expNode), (yyvsp[-3].stmts)); // $5 = cond, $3 = stmtlist
        control--;
    }
#line 1873 "interpreter.tab.c"
    break;

  case 23: /* for: FOR VARIABLE FROM exp TO exp DO stmtlist END_FOR  */
#line 165 "interpreter.y"
                                                     {
        (yyval.st) = new lp::ForStmt((yyvsp[-7].string), (yyvsp[-5].expNode), (yyvsp[-3].expNode), (yyvsp[-1].stmts)); 
    }
#line 1881 "interpreter.tab.c"
    break;

  case 24: /* for: FOR VARIABLE FROM exp TO exp STEP exp DO stmtlist END_FOR  */
#line 168 "interpreter.y"
                                                              {
        (yyval.st) = new lp::ForStmt((yyvsp[-9].string), (yyvsp[-7].expNode), (yyvsp[-5].expNode), (yyvsp[-3].expNode), (yyvsp[-1].stmts)); // step personalizado
    }
#line 1889 "interpreter.tab.c"
    break;

  case 25: /* switchstmt: SWITCH LPAREN exp RPAREN caseList END_SWITCH  */
#line 174 "interpreter.y"
                                                 {
        (yyval.st) = new lp::SwitchStmt((yyvsp[-3].expNode), (yyvsp[-1].caselist));  
    }
#line 1897 "interpreter.tab.c"
    break;

  case 26: /* switchstmt: SWITCH LPAREN exp RPAREN caseList DEFAULT DOSPUNTOS stmtlist END_SWITCH  */
#line 177 "interpreter.y"
                                                                            {
        (yyval.st) = new lp::SwitchStmt((yyvsp[-6].expNode), (yyvsp[-4].caselist), (yyvsp[-1].stmts));  
    }
#line 1905 "interpreter.tab.c"
    break;

  case 27: /* caseList: caseList caseBlock  */
#line 183 "interpreter.y"
                       {
        (yyval.caselist) = (yyvsp[-1].caselist);
        (yyval.caselist)->push_back((yyvsp[0].caseblock));
    }
#line 1914 "interpreter.tab.c"
    break;

  case 28: /* caseList: caseBlock  */
#line 187 "interpreter.y"
              {
        (yyval.caselist) = new std::list<lp::CaseStmt*>();
        (yyval.caselist)->push_back((yyvsp[0].caseblock));
    }
#line 1923 "interpreter.tab.c"
    break;

  case 29: /* caseBlock: CASE exp DOSPUNTOS stmtlist  */
#line 194 "interpreter.y"
                                {
        (yyval.caseblock) = new lp::CaseStmt((yyvsp[-2].expNode), (yyvsp[0].stmts));
    }
#line 1931 "interpreter.tab.c"
    break;

  case 30: /* clearscreen: CLEAR_SCREEN SEMICOLON  */
#line 200 "interpreter.y"
                           {
        (yyval.st) = new lp::ClearScreenStmt();
    }
#line 1939 "interpreter.tab.c"
    break;

  case 31: /* place: PLACE LPAREN exp COMMA exp RPAREN SEMICOLON  */
#line 206 "interpreter.y"
                                                {
        (yyval.st) = new lp::PlaceStmt((yyvsp[-4].expNode), (yyvsp[-2].expNode));
    }
#line 1947 "interpreter.tab.c"
    break;

  case 32: /* cond: LPAREN exp RPAREN  */
#line 212 "interpreter.y"
                      { (yyval.expNode) = (yyvsp[-1].expNode); }
#line 1953 "interpreter.tab.c"
    break;

  case 33: /* asgn: VARIABLE ASSIGNMENT exp  */
#line 216 "interpreter.y"
                            { (yyval.st) = new lp::AssignmentStmt((yyvsp[-2].string), (yyvsp[0].expNode)); }
#line 1959 "interpreter.tab.c"
    break;

  case 34: /* asgn: VARIABLE ASSIGNMENT asgn  */
#line 217 "interpreter.y"
                             { (yyval.st) = new lp::AssignmentStmt((yyvsp[-2].string), (lp::AssignmentStmt*)(yyvsp[0].st)); }
#line 1965 "interpreter.tab.c"
    break;

  case 35: /* asgn: CONSTANT ASSIGNMENT exp  */
#line 218 "interpreter.y"
                            { execerror("No se puede modificar una constante", (yyvsp[-2].string)); }
#line 1971 "interpreter.tab.c"
    break;

  case 36: /* asgn: CONSTANT ASSIGNMENT asgn  */
#line 219 "interpreter.y"
                             { execerror("No se puede modificar una constante", (yyvsp[-2].string)); }
#line 1977 "interpreter.tab.c"
    break;

  case 37: /* print: PRINT exp  */
#line 223 "interpreter.y"
              { (yyval.st) = new lp::PrintStmt((yyvsp[0].expNode)); }
#line 1983 "interpreter.tab.c"
    break;

  case 38: /* read: READ LPAREN VARIABLE RPAREN  */
#line 227 "interpreter.y"
                                { (yyval.st) = new lp::ReadStmt((yyvsp[-1].string)); }
#line 1989 "interpreter.tab.c"
    break;

  case 39: /* read: READ LPAREN CONSTANT RPAREN  */
#line 228 "interpreter.y"
                                { execerror("No se puede leer en una constante", (yyvsp[-1].string)); }
#line 1995 "interpreter.tab.c"
    break;

  case 40: /* read: READ_STRING LPAREN VARIABLE RPAREN  */
#line 229 "interpreter.y"
                                       { (yyval.st) = new lp::ReadStringStmt((yyvsp[-1].string)); }
#line 2001 "interpreter.tab.c"
    break;

  case 41: /* read: READ_STRING LPAREN CONSTANT RPAREN  */
#line 230 "interpreter.y"
                                       { execerror("No se puede leer en una constante", (yyvsp[-1].string)); }
#line 2007 "interpreter.tab.c"
    break;

  case 42: /* exp: NUMBER  */
#line 234 "interpreter.y"
           { (yyval.expNode) = new lp::NumberNode((yyvsp[0].number)); }
#line 2013 "interpreter.tab.c"
    break;

  case 43: /* exp: STRING_LITERAL  */
#line 235 "interpreter.y"
                   { (yyval.expNode) = new lp::StringNode((yyvsp[0].string)); }
#line 2019 "interpreter.tab.c"
    break;

  case 44: /* exp: VARIABLE  */
#line 236 "interpreter.y"
             { (yyval.expNode) = new lp::VariableNode((yyvsp[0].string)); }
#line 2025 "interpreter.tab.c"
    break;

  case 45: /* exp: CONSTANT  */
#line 237 "interpreter.y"
             { (yyval.expNode) = new lp::ConstantNode((yyvsp[0].string)); }
#line 2031 "interpreter.tab.c"
    break;

  case 46: /* exp: PLUS exp  */
#line 238 "interpreter.y"
                         { (yyval.expNode) = new lp::UnaryPlusNode((yyvsp[0].expNode)); }
#line 2037 "interpreter.tab.c"
    break;

  case 47: /* exp: MINUS exp  */
#line 239 "interpreter.y"
                          { (yyval.expNode) = new lp::UnaryMinusNode((yyvsp[0].expNode)); }
#line 2043 "interpreter.tab.c"
    break;

  case 48: /* exp: NOT exp  */
#line 240 "interpreter.y"
            { (yyval.expNode) = new lp::NotNode((yyvsp[0].expNode)); }
#line 2049 "interpreter.tab.c"
    break;

  case 49: /* exp: INCREMENT exp  */
#line 241 "interpreter.y"
                              { (yyval.expNode) = new lp::UnaryIncrementNode((yyvsp[0].expNode)); }
#line 2055 "interpreter.tab.c"
    break;

  case 50: /* exp: DECREMENT exp  */
#line 242 "interpreter.y"
                              { (yyval.expNode) = new lp::UnaryDecrementNode((yyvsp[0].expNode)); }
#line 2061 "interpreter.tab.c"
    break;

  case 51: /* exp: exp INCREMENT  */
#line 243 "interpreter.y"
                              { (yyval.expNode) = new lp::UnaryIncrementNode((yyvsp[-1].expNode)); }
#line 2067 "interpreter.tab.c"
    break;

  case 52: /* exp: exp DECREMENT  */
#line 244 "interpreter.y"
                              { (yyval.expNode) = new lp::UnaryDecrementNode((yyvsp[-1].expNode)); }
#line 2073 "interpreter.tab.c"
    break;

  case 53: /* exp: exp FACTORIAL  */
#line 245 "interpreter.y"
                              { (yyval.expNode) = new lp::FactorialNode((yyvsp[-1].expNode)); }
#line 2079 "interpreter.tab.c"
    break;

  case 54: /* exp: exp PLUS exp  */
#line 246 "interpreter.y"
                 { (yyval.expNode) = new lp::PlusNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2085 "interpreter.tab.c"
    break;

  case 55: /* exp: exp MINUS exp  */
#line 247 "interpreter.y"
                  { (yyval.expNode) = new lp::MinusNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2091 "interpreter.tab.c"
    break;

  case 56: /* exp: exp MULTIPLICATION exp  */
#line 248 "interpreter.y"
                           { (yyval.expNode) = new lp::MultiplicationNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2097 "interpreter.tab.c"
    break;

  case 57: /* exp: exp DIVISION exp  */
#line 249 "interpreter.y"
                     { (yyval.expNode) = new lp::DivisionNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2103 "interpreter.tab.c"
    break;

  case 58: /* exp: exp INTDIV exp  */
#line 250 "interpreter.y"
                   { (yyval.expNode) = new lp::IntegerDivisionNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2109 "interpreter.tab.c"
    break;

  case 59: /* exp: exp MODULO exp  */
#line 251 "interpreter.y"
                   { (yyval.expNode) = new lp::ModuloNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2115 "interpreter.tab.c"
    break;

  case 60: /* exp: exp POWER exp  */
#line 252 "interpreter.y"
                  { (yyval.expNode) = new lp::PowerNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2121 "interpreter.tab.c"
    break;

  case 61: /* exp: exp GREATER_THAN exp  */
#line 253 "interpreter.y"
                         { (yyval.expNode) = new lp::GreaterThanNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2127 "interpreter.tab.c"
    break;

  case 62: /* exp: exp GREATER_OR_EQUAL exp  */
#line 254 "interpreter.y"
                             { (yyval.expNode) = new lp::GreaterOrEqualNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2133 "interpreter.tab.c"
    break;

  case 63: /* exp: exp LESS_THAN exp  */
#line 255 "interpreter.y"
                      { (yyval.expNode) = new lp::LessThanNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2139 "interpreter.tab.c"
    break;

  case 64: /* exp: exp LESS_OR_EQUAL exp  */
#line 256 "interpreter.y"
                          { (yyval.expNode) = new lp::LessOrEqualNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2145 "interpreter.tab.c"
    break;

  case 65: /* exp: exp EQUAL exp  */
#line 257 "interpreter.y"
                  { (yyval.expNode) = new lp::EqualNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2151 "interpreter.tab.c"
    break;

  case 66: /* exp: exp NOT_EQUAL exp  */
#line 258 "interpreter.y"
                      { (yyval.expNode) = new lp::NotEqualNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2157 "interpreter.tab.c"
    break;

  case 67: /* exp: exp AND exp  */
#line 259 "interpreter.y"
                { (yyval.expNode) = new lp::AndNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2163 "interpreter.tab.c"
    break;

  case 68: /* exp: exp OR exp  */
#line 260 "interpreter.y"
               { (yyval.expNode) = new lp::OrNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2169 "interpreter.tab.c"
    break;

  case 69: /* exp: exp CONCAT exp  */
#line 261 "interpreter.y"
                   { (yyval.expNode) = new lp::ConcatNode((yyvsp[-2].expNode), (yyvsp[0].expNode)); }
#line 2175 "interpreter.tab.c"
    break;

  case 70: /* exp: LPAREN exp RPAREN  */
#line 262 "interpreter.y"
                      { (yyval.expNode) = (yyvsp[-1].expNode); }
#line 2181 "interpreter.tab.c"
    break;

  case 71: /* exp: SIN LPAREN exp RPAREN  */
#line 263 "interpreter.y"
                             { (yyval.expNode) = new lp::BuiltinFunctionNode_1("sin", (yyvsp[-1].expNode)); }
#line 2187 "interpreter.tab.c"
    break;

  case 72: /* exp: COS LPAREN exp RPAREN  */
#line 264 "interpreter.y"
                             { (yyval.expNode) = new lp::BuiltinFunctionNode_1("cos", (yyvsp[-1].expNode)); }
#line 2193 "interpreter.tab.c"
    break;

  case 73: /* exp: LOG LPAREN exp RPAREN  */
#line 265 "interpreter.y"
                             { (yyval.expNode) = new lp::BuiltinFunctionNode_1("log", (yyvsp[-1].expNode)); }
#line 2199 "interpreter.tab.c"
    break;

  case 74: /* exp: LOG10 LPAREN exp RPAREN  */
#line 266 "interpreter.y"
                             { (yyval.expNode) = new lp::BuiltinFunctionNode_1("log10", (yyvsp[-1].expNode)); }
#line 2205 "interpreter.tab.c"
    break;

  case 75: /* exp: EXP LPAREN exp RPAREN  */
#line 267 "interpreter.y"
                             { (yyval.expNode) = new lp::BuiltinFunctionNode_1("exp", (yyvsp[-1].expNode)); }
#line 2211 "interpreter.tab.c"
    break;

  case 76: /* exp: SQRT LPAREN exp RPAREN  */
#line 268 "interpreter.y"
                             { (yyval.expNode) = new lp::BuiltinFunctionNode_1("sqrt", (yyvsp[-1].expNode)); }
#line 2217 "interpreter.tab.c"
    break;

  case 77: /* exp: INTEGER LPAREN exp RPAREN  */
#line 269 "interpreter.y"
                              { (yyval.expNode) = new lp::BuiltinFunctionNode_1("integer", (yyvsp[-1].expNode)); }
#line 2223 "interpreter.tab.c"
    break;

  case 78: /* exp: ABS LPAREN exp RPAREN  */
#line 270 "interpreter.y"
                             { (yyval.expNode) = new lp::BuiltinFunctionNode_1("abs", (yyvsp[-1].expNode)); }
#line 2229 "interpreter.tab.c"
    break;


#line 2233 "interpreter.tab.c"

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

#line 284 "interpreter.y"

