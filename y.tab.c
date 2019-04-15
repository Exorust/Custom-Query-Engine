/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include <assert.h>
	#define SUCCESS 1
	#define FAILURE 0
	#define YYDEBUG 0
	int f;
	extern FILE *yyin;
	int yylex();
	void yyerror(const char *s);

	int get_function(int*,int, int*);
	int update_function(int, char*,int, int*);
	int delete_function(int, int* );
	int insert_function(int, char*);

#line 85 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMICOLON = 258,
    COMMA = 259,
    EQUAL = 260,
    GREATER = 261,
    GREATEREQ = 262,
    LESSER = 263,
    LESSEREQ = 264,
    OPENPARANTHESIS = 265,
    CLOSEPARANTHESIS = 266,
    GET = 267,
    FROM = 268,
    AND = 269,
    OR = 270,
    INSERT = 271,
    RECORD = 272,
    INTO = 273,
    UPDATE = 274,
    IN = 275,
    SET = 276,
    TO = 277,
    DELETE = 278,
    EMP = 279,
    DEPT = 280,
    eid = 281,
    ename = 282,
    eage = 283,
    eaddress = 284,
    salary = 285,
    deptno = 286,
    dnum = 287,
    dname = 288,
    dlocation = 289,
    WHERE = 290,
    IDENTIFIER = 291,
    FIELDLIST = 292,
    STRING = 293,
    INTEGER = 294,
    FLOAT = 295
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define COMMA 259
#define EQUAL 260
#define GREATER 261
#define GREATEREQ 262
#define LESSER 263
#define LESSEREQ 264
#define OPENPARANTHESIS 265
#define CLOSEPARANTHESIS 266
#define GET 267
#define FROM 268
#define AND 269
#define OR 270
#define INSERT 271
#define RECORD 272
#define INTO 273
#define UPDATE 274
#define IN 275
#define SET 276
#define TO 277
#define DELETE 278
#define EMP 279
#define DEPT 280
#define eid 281
#define ename 282
#define eage 283
#define eaddress 284
#define salary 285
#define deptno 286
#define dnum 287
#define dname 288
#define dlocation 289
#define WHERE 290
#define IDENTIFIER 291
#define FIELDLIST 292
#define STRING 293
#define INTEGER 294
#define FLOAT 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "parser.y" /* yacc.c:355  */

	/* The return values involved */
	int num_value;
	float f_value;
	char op_val;
	int* num_array;
	char* str_ptr;

#line 214 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 231 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   61

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  40
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  75

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    42,    43,    44,    47,    52,    57,    62,
      67,    81,    95,    98,    99,   100,   102,   111,   120,   129,
     130,   131,   134,   311,   323,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   341,   342,   343,   344,   345,   347,
     352
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMICOLON", "COMMA", "EQUAL", "GREATER",
  "GREATEREQ", "LESSER", "LESSEREQ", "OPENPARANTHESIS", "CLOSEPARANTHESIS",
  "GET", "FROM", "AND", "OR", "INSERT", "RECORD", "INTO", "UPDATE", "IN",
  "SET", "TO", "DELETE", "EMP", "DEPT", "eid", "ename", "eage", "eaddress",
  "salary", "deptno", "dnum", "dname", "dlocation", "WHERE", "IDENTIFIER",
  "FIELDLIST", "STRING", "INTEGER", "FLOAT", "$accept", "query",
  "insert_type", "delete_type", "update_type", "get_type",
  "condition_list", "VALUE", "record_list", "condition", "fields", "FIELD",
  "OPERATOR", "filetype", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295
};
# endif

#define YYPACT_NINF -46

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-46)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -8,     3,     8,     9,    24,    42,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     1,
     -46,    33,    28,    36,   -46,     3,   -18,   -17,   -18,   -18,
     -46,   -46,   -46,    15,    47,    48,    49,    43,    34,    21,
       3,   -17,   -17,   -17,    39,     3,     3,    -5,   -46,    11,
     -46,   -46,   -46,   -18,    37,    -5,     3,     3,   -46,   -46,
     -46,   -46,   -46,     0,   -46,     0,   -46,   -46,   -46,   -46,
     -46,   -46,    23,     3,    -5
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     3,     5,     4,     2,
      25,    26,    27,    28,    29,    30,    31,    32,    33,     0,
      24,     0,     0,     0,     1,     0,     0,     0,     0,     0,
      23,    39,    40,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    12,     0,
      16,    17,    18,     0,     0,     7,     0,     0,    34,    36,
      37,    35,    38,     0,     6,     0,    10,    11,    13,    14,
      15,    22,     0,     0,     8
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -46,   -46,   -46,   -46,   -46,   -46,   -45,    -4,     4,   -44,
     -46,    -1,   -46,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    47,    71,    37,    48,
      19,    49,    63,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      20,    55,    38,    39,     1,    25,    31,    32,     2,    56,
      57,     3,    66,    67,    26,     4,    58,    59,    60,    61,
      62,    34,    35,    36,    30,    21,    22,    64,    74,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    68,    69,
      70,    23,    24,    27,    54,    50,    51,    52,    28,    29,
      40,    41,    42,    43,    44,    45,    46,    53,    73,    65,
       0,    72
};

static const yytype_int8 yycheck[] =
{
       1,    46,    28,    29,    12,     4,    24,    25,    16,    14,
      15,    19,    56,    57,    13,    23,     5,     6,     7,     8,
       9,    38,    39,    40,    25,    17,    17,    53,    73,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    38,    39,
      40,    17,     0,    10,    45,    41,    42,    43,    20,    13,
      35,     4,     4,     4,    11,    21,    35,    18,    35,    22,
      -1,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    16,    19,    23,    42,    43,    44,    45,    46,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    51,
      52,    17,    17,    17,     0,     4,    13,    10,    20,    13,
      52,    24,    25,    54,    38,    39,    40,    49,    54,    54,
      35,     4,     4,     4,    11,    21,    35,    47,    50,    52,
      49,    49,    49,    18,    52,    47,    14,    15,     5,     6,
       7,     8,     9,    53,    54,    22,    50,    50,    38,    39,
      40,    48,    48,    35,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    42,    42,    42,    43,    44,    45,    46,
      47,    47,    47,    48,    48,    48,    49,    49,    49,    49,
      49,    49,    50,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    53,    53,    53,    53,    54,
      54
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     7,     6,    10,     6,
       3,     3,     1,     1,     1,     1,     3,     3,     3,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 41 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = (yyvsp[0].num_value); }
#line 1358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 42 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = (yyvsp[0].num_value); }
#line 1364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 43 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = (yyvsp[0].num_value); }
#line 1370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 44 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = (yyvsp[0].num_value); }
#line 1376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 47 "parser.y" /* yacc.c:1646  */
    {
			(yyval.num_value) = insert_function((yyvsp[0].num_value),(yyvsp[-3].str_ptr));
		}
#line 1384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 52 "parser.y" /* yacc.c:1646  */
    {
			(yyval.num_value) = delete_function((yyvsp[-2].num_value),(yyvsp[0].num_array));
		}
#line 1392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 57 "parser.y" /* yacc.c:1646  */
    {
			(yyval.num_value) = update_function((yyvsp[-4].num_value),(yyvsp[-2].str_ptr),(yyvsp[-6].num_value),(yyvsp[0].num_array));
		}
#line 1400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 62 "parser.y" /* yacc.c:1646  */
    {
			(yyval.num_value) = get_function((yyvsp[-4].num_array),(yyvsp[-2].num_value),(yyvsp[0].num_array));
		}
#line 1408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 67 "parser.y" /* yacc.c:1646  */
    {
			assert(((yyvsp[-2].num_array))[0] == ((yyvsp[0].num_array))[0]);
			/* assert(($1)[0] == (sizeof($1)-1)); */
			int len = ((yyvsp[-2].num_array))[0];
			int* arr = (int*)malloc(sizeof(int)*(len+1));
			arr[0] = len;
			int i;
			for(i=1;i<len+1;i++) {
				arr[i] = ((yyvsp[-2].num_array))[i] & ((yyvsp[0].num_array))[i];
			}
			free((yyvsp[-2].num_array));
			free((yyvsp[0].num_array));
			(yyval.num_array) = arr;
		}
#line 1427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 81 "parser.y" /* yacc.c:1646  */
    {
		assert(((yyvsp[-2].num_array))[0] == ((yyvsp[0].num_array))[0]);
		assert(((yyvsp[-2].num_array))[0] == (sizeof((yyvsp[-2].num_array))-1));
		int len = ((yyvsp[-2].num_array))[0];
		int* arr = (int*)malloc(sizeof(int)*(len+1));
		arr[0] = len;
		int i;
		for(i=1;i<len+1;i++) {
			arr[i] = ((yyvsp[-2].num_array))[i] | ((yyvsp[0].num_array))[i];
		}
		free((yyvsp[-2].num_array));
		free((yyvsp[0].num_array));
		(yyval.num_array) = arr;
	 }
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 95 "parser.y" /* yacc.c:1646  */
    { (yyval.num_array) = (yyvsp[0].num_array); }
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 98 "parser.y" /* yacc.c:1646  */
    {(yyval.str_ptr) = (yyvsp[0].str_ptr);}
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 99 "parser.y" /* yacc.c:1646  */
    {(yyval.str_ptr) = (yyvsp[0].str_ptr);}
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 100 "parser.y" /* yacc.c:1646  */
    {(yyval.str_ptr) = (yyvsp[0].str_ptr);}
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 102 "parser.y" /* yacc.c:1646  */
    {
			char *result = malloc(strlen((yyvsp[-2].str_ptr)) + strlen((yyvsp[0].str_ptr)) + 4);
	    strcpy(result, (yyvsp[-2].str_ptr));
			strcat(result, " ");
	    strcat(result, (yyvsp[0].str_ptr));
			/* printf("%s",$3); */
			/* result[strlen(result)-1] = '\0'; */
			(yyval.str_ptr) = result;
		}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 111 "parser.y" /* yacc.c:1646  */
    {
			char *result = malloc(strlen((yyvsp[-2].str_ptr)) + strlen((yyvsp[0].str_ptr)) + 4);
	    strcpy(result, (yyvsp[-2].str_ptr));
			strcat(result, " ");
	    strcat(result, (yyvsp[0].str_ptr));
			/* printf("%s",$3); */
			/* result[strlen(result)-1] = '\0'; */
			(yyval.str_ptr) = result;
		}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 120 "parser.y" /* yacc.c:1646  */
    {
			char *result = malloc(strlen((yyvsp[-2].str_ptr)) + strlen((yyvsp[0].str_ptr)) + 4);
	    strcpy(result, (yyvsp[-2].str_ptr));
			strcat(result, " ");
	    strcat(result, (yyvsp[0].str_ptr));
			/* printf("%s",$3); */
			/* result[strlen(result)-1] = '\0'; */
			(yyval.str_ptr) = result;
		}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 129 "parser.y" /* yacc.c:1646  */
    { (yyval.str_ptr) = (yyvsp[0].str_ptr); }
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 130 "parser.y" /* yacc.c:1646  */
    { (yyval.str_ptr) = (yyvsp[0].str_ptr); }
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 131 "parser.y" /* yacc.c:1646  */
    { (yyval.str_ptr) = (yyvsp[0].str_ptr); }
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 134 "parser.y" /* yacc.c:1646  */
    {
			int size;
			char file_name[50];
			if(f == 1) {
				strcpy(file_name,"EMP.txt");
			}
			else if(f == -1 ){
				strcpy(file_name,"DEPT.txt");
			}
			else {
				abort();
			}
			FILE* fp_used = fopen(file_name,"r");

			fscanf(fp_used,"%d\n", &size);
			int* arr = (int*)malloc(sizeof(int)*(size+1));
			/* Should we? */
			arr[0] = size;
			int i;
			for(i=0;i<size;i++) {
				int flag=0;

				if((yyvsp[-2].num_value) == 1 ) {
					int eid_var;
					fscanf(fp_used, "%d %*s %*d %*s %*d %*d\n",&eid_var);
					if( (yyvsp[-1].num_value) == 1 ) {
						if(eid_var == atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
					else if((yyvsp[-1].num_value) == 2) {
						if(eid_var < atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
					else if((yyvsp[-1].num_value) == 3) {
						if(eid_var > atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
				}

				else if((yyvsp[-2].num_value) == 2 ) {
					char ename_var[50];
					memset(&ename_var[0], 0, sizeof(ename_var));
					fscanf(fp_used, "%*d %s %*d %*s %*d %*d\n",ename_var);
					if( (yyvsp[-1].num_value) == 1 ) {
						if(strcmp(ename_var,(yyvsp[0].str_ptr)) ==0 ) {
							flag = 1;
						}
					}
				}

				else if((yyvsp[-2].num_value) == 3 ) {
					int eage_var;
					fscanf(fp_used, "%*d %*s %d %*s %*d %*d\n",&eage_var);
					if( (yyvsp[-1].num_value) == 1 ) {
						if(eage_var == atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
					else if((yyvsp[-1].num_value) == 2) {
						if(eage_var < atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
					else if((yyvsp[-1].num_value) == 3) {
						if(eage_var > atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
				}

				else if((yyvsp[-2].num_value) == 4 ) {
					char eaddress_var[50];
					memset(&eaddress_var[0], 0, sizeof(eaddress_var));
					fscanf(fp_used, "%*d %*s %*d %s %*d %*d\n",eaddress_var);
					if( (yyvsp[-1].num_value) == 1 ) {
						if(strcmp(eaddress_var,(yyvsp[0].str_ptr)) ==0 ) {
							flag = 1;
						}
					}
				}

				else if((yyvsp[-2].num_value) == 5 ) {
					int salary_var;
					fscanf(fp_used, "%*d %*s %*d %*s %d %*d\n",&salary_var);
					if( (yyvsp[-1].num_value) == 1 ) {
						if(salary_var == atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
					else if((yyvsp[-1].num_value) == 2) {
						if(salary_var < atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
					else if((yyvsp[-1].num_value) == 3) {
						if(salary_var > atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
				}

				else if((yyvsp[-2].num_value) == 6 ) {
					int deptno_var;
					fscanf(fp_used, "%*d %*s %*d %*s %*d %d\n",&deptno_var	);
					if( (yyvsp[-1].num_value) == 1 ) {
						if(deptno_var == atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
					else if((yyvsp[-1].num_value) == 2) {
						if(deptno_var < atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
					else if((yyvsp[-1].num_value) == 3) {
						if(deptno_var > atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
				}

				else if((yyvsp[-2].num_value) == 7 ) {
					int dnum_var;
					fscanf(fp_used, "%d %*s %*s\n",&dnum_var);
					if( (yyvsp[-1].num_value) == 1 ) {
						if(dnum_var == atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
					else if((yyvsp[-1].num_value) == 2) {
						if(dnum_var < atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
					else if((yyvsp[-1].num_value) == 3) {
						if(dnum_var > atoi((yyvsp[0].str_ptr))) {
							flag = 1;
						}
					}
				}

				else if((yyvsp[-2].num_value) == 8 ) {
					char dname_var[50];
					memset(&dname_var[0], 0, sizeof(dname_var));
					fscanf(fp_used, "%*d %s %*s\n",dname_var);
					if( (yyvsp[-1].num_value) == 1 ) {
						if(strcmp(dname_var,(yyvsp[0].str_ptr)) ==0 ) {
							flag = 1;
						}
					}
				}

				else if((yyvsp[-2].num_value) == 9 ) {
					char dlocation_var[50];
					memset(&dlocation_var[0], 0, sizeof(dlocation_var));
					fscanf(fp_used, "%*d %*s %s\n",dlocation_var);
					if( (yyvsp[-1].num_value) == 1 ) {
						if(strcmp(dlocation_var,(yyvsp[0].str_ptr)) ==0 ) {
							flag = 1;
						}
					}
				}
				else {
					abort();
				}

				/* Set if condition satisfies */
				arr[i+1] = flag;

			}
			(yyval.num_array) = arr;
		}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 311 "parser.y" /* yacc.c:1646  */
    {
	/* Different from condtion array */
		int len = sizeof((yyvsp[-2].num_array));
		int* arr = (int*) malloc((len+1)*sizeof(int));
		int i;
		arr[0] = (yyvsp[0].num_value);
		for(i=0;i<len;i++) {
			arr[i+1] = ((yyvsp[-2].num_array))[i];
		}
		free((yyvsp[-2].num_array));
		(yyval.num_array) = arr;
	}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 323 "parser.y" /* yacc.c:1646  */
    {
		 	int* arr = (int*) malloc(1*sizeof(int));
			arr[0] = (yyvsp[0].num_value);
			(yyval.num_array) = arr;
	 }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 330 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 1; }
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 331 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 2; }
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 332 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 3; }
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 333 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 4; }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 334 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 5; }
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 335 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 6; }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 336 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 7; }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 337 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 8; }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 338 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 9; }
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 341 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 1; }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 342 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 2; }
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 343 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 3; }
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 344 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 4; }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 345 "parser.y" /* yacc.c:1646  */
    { (yyval.num_value) = 5; }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 347 "parser.y" /* yacc.c:1646  */
    {
		int* z = &f;
		*z = 1;
		(yyval.num_value) = 1;
	}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 352 "parser.y" /* yacc.c:1646  */
    {
		int* z = &f;
		*z = -1;
		(yyval.num_value) = -1;
	}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1845 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 359 "parser.y" /* yacc.c:1906  */

/* TODO : Edit this to fit syntax*/
int get_function(int* field_arr,int fx, int* farray) {
	FILE* fp_old,fp_new;
	int file_size;
	int counter = 0;
	char file_name[50];

	if(fx == 1) {
		strcpy(file_name,"EMP.txt");
	}
	else if(fx == -1 ){
		strcpy(file_name,"DEPT.txt");
	}
	else {
		abort();
	}

	if(strcmp(file_name,"EMP.txt") == 0 || strcmp(file_name,"DEPT.txt") == 0 ) {
		FILE* fp_old = fopen(file_name,"r");
		/* FILE* fp_new = fopen("temp",'r'); */
		fscanf(fp_old,"%d\n",&file_size);
		/* fprintf(fp_new,"%d\n",farray[0]); */
		int i;
		char buffer[500];
		memset(&buffer[0], 0, sizeof(buffer));
		for(i=0;i<file_size;i++) {
			/* Cases that satisfy get */
			if(farray[i+1] == 1) {
				fscanf(fp_old,"%[^\n]\n",buffer);
				/* Print the get vals */
				printf("%s\n\n",buffer);
				memset(&buffer[0], 0, strlen(buffer));
				counter++;
			}
			else {
				/* Delete the cases that satisfy the criteria */
				fscanf(fp_old,"%[^\n]\n",buffer);
				memset(&buffer[0], 0, strlen(buffer));
				continue;
			}
		}

		/* fclose(fp_new); */
		fclose(fp_old);
		/* remove(file_name); */
		/* rename("temp", file_name); */
		return SUCCESS;
	}
	else {
		printf("Wrong file. Delete()");
		abort();
		return FAILURE;
	}
}

int update_function(int field_var, char* new_val,int fx, int* farray) {
	FILE* fp_old,fp_new;
	int file_size;
	int counter = 0;
	char file_name[50];

	if(fx == 1) {
		strcpy(file_name,"EMP.txt");
	}
	else if(fx == -1 ){
		strcpy(file_name,"DEPT.txt");
	}
	else {
		abort();
	}

	/* int j,count=0;
	for(j=1; j<=farray[0]; j++) {
		if(farray[j+1] == 1) {
			count++;
		}
	} */

	if(strcmp(file_name,"EMP.txt") == 0 || strcmp(file_name,"DEPT.txt") == 0 ) {
		FILE* fp_old = fopen(file_name,"r");
		FILE* fp_new = fopen("temp","w");
		fscanf(fp_old,"%d\n",&file_size);
		fprintf(fp_new,"%d\n",file_size);
		int i;
		char buffer[100];
		memset(&buffer[0], 0, sizeof(buffer));
		/* memset(&nbuffer[0], 0, sizeof(nbuffer)); */

		for(i=0;i<file_size;i++) {
			/* Cases that satisfy get */
			if(farray[i+1] == 1) {
				if(fx == 1) {
					int eid_var;
					char ename_var[50];
					int eage_var;
					char eaddress_var[50];
					int salary_var;
					int deptno_var;
					fscanf(fp_old,"%d %s %d %s %d %d\n",&eid_var,ename_var,&eage_var,eaddress_var,&salary_var,&deptno_var);
					/* Print the get vals */
					switch (field_var) {
						case 1:
							eid_var = atoi(new_val);
							break;
						case 2:
							memset(&ename_var, 0, strlen(ename_var));
							strcpy(ename_var,new_val);
							break;
						case 3:
							eage_var = atoi(new_val);
							break;
						case 4:
							memset(&eaddress_var, 0, strlen(eaddress_var));
							strcpy(eaddress_var,new_val);
							break;
						case 5:
							salary_var = atoi(new_val);
							break;
						case 6:
							deptno_var = atoi(new_val);
							break;
						}
					fprintf(fp_new,"%d %s %d %s %d %d\n",eid_var,ename_var,eage_var,eaddress_var,salary_var,deptno_var);
					/* memset(&buffer[0], 0, strlen(buffer)); */
					counter++;
				}
				else if(fx == -1) {
					int dnum_var;
					char dname_var[50];
					char dlocation_var[50];
					fscanf(fp_old,"%d %s %s\n",&dnum_var,dname_var,dlocation_var);
					switch (field_var) {
						case 7:
							dnum_var = atoi(new_val);
							break;
						case 8:
							memset(&dname_var, 0, strlen(dname_var));
							strcpy(dname_var,new_val);
							break;
						case 9:
							memset(&dlocation_var, 0, strlen(dlocation_var));
							strcpy(dlocation_var,new_val);
							break;
						}
					fprintf(fp_new,"%d %s %s\n",dnum_var,dname_var,dlocation_var);
					memset(&buffer[0], 0, strlen(buffer));
					counter++;
				}
			}
			else {
				fscanf(fp_old,"%[^\n]\n",buffer);
				/* Print the get vals */
				fprintf(fp_new,"%s\n",buffer);
				memset(&buffer[0], 0, strlen(buffer));
				counter++;
				continue;
			}
		}

		fclose(fp_new);
		fclose(fp_old);
		remove(file_name);
		rename("temp", file_name);
		return SUCCESS;
	}
	else {
		printf("Wrong file. UPDATE()");
		abort();
		return FAILURE;
	}
}


int delete_function(int fx, int* farray) {
	FILE* fp_old,fp_new;
	int file_size;
	int counter = 0;
	char file_name[50];

	if(fx == 1) {
		strcpy(file_name,"EMP.txt");
	}
	else if(fx == -1 ){
		strcpy(file_name,"DEPT.txt");
	}
	else {
		abort();
	}

	int j,count=0;
	for(j=1; j<=farray[0]; j++) {
		if(farray[j+1] == 1) {
			count++;
		}
	}

	if(strcmp(file_name,"EMP.txt") == 0 || strcmp(file_name,"DEPT.txt") == 0 ) {
		FILE* fp_old = fopen(file_name,"r");
		FILE* fp_new = fopen("temp","w");
		fscanf(fp_old,"%d\n",&file_size);
		fprintf(fp_new,"%d\n",(file_size - count));
		int i;
		char buffer[500];
		memset(&buffer[0], 0, sizeof(buffer));
		for(i=0;i<file_size;i++) {
			if(farray[i+1] == 0) {
				fscanf(fp_old,"%[^\n]\n",buffer);
				fprintf(fp_new,"%s\n",buffer);
				/* printf("%s\n",buffer); */
				memset(&buffer[0], 0, strlen(buffer));
				counter++;
			}
			else {
				fscanf(fp_old,"%[^\n]\n",buffer);
				memset(&buffer[0], 0, strlen(buffer));
				/* Delete the cases that satisfy the criteria */
				continue;
			}
		}

		fclose(fp_new);
		fclose(fp_old);
		remove(file_name);
		rename("temp", file_name);
		return SUCCESS;
	}
	else {
		printf("Wrong file. Delete()");
		abort();
		return FAILURE;
	}
}

/* Each file EMP or DEPT has first line containing the number of entries */
int insert_function(int fx, char* record_list) {
	FILE* fp_old,fp_new;
	int file_size;
	char file_name[20];

	if(fx == 1) {
		strcpy(file_name,"EMP.txt");
	}
	else if(fx == -1 ){
		strcpy(file_name,"DEPT.txt");
	}
	else {
		abort();
	}

	if(strcmp(file_name,"EMP.txt") == 0 || strcmp(file_name,"DEPT.txt") == 0 ) {
		FILE* fp_old = fopen(file_name,"r");
		FILE* fp_new = fopen("temp","w");
		fscanf(fp_old,"%d\n",&file_size);
		fprintf(fp_new,"%d\n",(file_size+1));
		int i;
		char buffer[500];
		memset(&buffer[0], 0, sizeof(buffer));
		for(i=0;i<file_size;i++) {
			fscanf(fp_old,"%[^\n]\n",buffer);
			fprintf(fp_new,"%s\n",buffer);
			memset(&buffer[0], 0, strlen(buffer));
		}
		fprintf(fp_new,"%s\n",record_list);

		fclose(fp_new);
		fclose(fp_old);
		remove(file_name);
		rename("temp", file_name);
		return SUCCESS;
	}
	else {
		printf("Wrong file. Insert()");
		abort();
		return FAILURE;
	}

}



int main(int argc,char **argv) {
	#if YYDEBUG
		yydebug = 1;
	#endif
	if (argc > 1) {
		FILE *file;

		file = fopen(argv[1], "r");
		if (!file) {
			fprintf(stderr,"could not open %s\n",argv[1]);
			exit(1);
		}
		yyin = file;
	}
	printf("SQL Shell\n>>");
	yyparse();
	return 0;
}
