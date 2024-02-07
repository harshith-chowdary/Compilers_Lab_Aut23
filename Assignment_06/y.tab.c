/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ass6_21CS10042_21CS10040.y"

    #include "ass6_21CS10042_21CS10040_translator.h"
    extern int currentLine;
    extern int yylex();
    void yyinfo(string);
    void yyerror(string);

#line 78 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHARTYPE = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOATTYPE = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INTTYPE = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOIDTYPE = 289,
    VOLATILE = 290,
    WHILE = 291,
    _BOOL = 292,
    _COMPLEX = 293,
    _IMAGINARY = 294,
    IDENTIFIER = 295,
    INTEGER_CONSTANT = 296,
    FLOATING_CONSTANT = 297,
    CHARACTER_CONSTANT = 298,
    STRING_LITERAL = 299,
    LEFT_SQUARE_BRACKET = 300,
    INCREMENT = 301,
    SLASH = 302,
    QUESTION_MARK = 303,
    ASSIGNMENT = 304,
    COMMA = 305,
    RIGHT_SQUARE_BRACKET = 306,
    LEFT_PARENTHESES = 307,
    LEFT_CURLY_BRACKET = 308,
    RIGHT_CURLY_BRACKET = 309,
    DOT = 310,
    ARROW = 311,
    ASTERISK = 312,
    PLUS = 313,
    MINUS = 314,
    TILDE = 315,
    EXCLAMATION = 316,
    MODULO = 317,
    LEFT_SHIFT = 318,
    RIGHT_SHIFT = 319,
    LESS_THAN = 320,
    GREATER_THAN = 321,
    LESS_EQUAL_THAN = 322,
    GREATER_EQUAL_THAN = 323,
    COLON = 324,
    SEMI_COLON = 325,
    ELLIPSIS = 326,
    ASTERISK_ASSIGNMENT = 327,
    SLASH_ASSIGNMENT = 328,
    MODULO_ASSIGNMENT = 329,
    PLUS_ASSIGNMENT = 330,
    MINUS_ASSIGNMENT = 331,
    LEFT_SHIFT_ASSIGNMENT = 332,
    HASH = 333,
    DECREMENT = 334,
    RIGHT_PARENTHESES = 335,
    BITWISE_AND = 336,
    EQUALS = 337,
    BITWISE_XOR = 338,
    BITWISE_OR = 339,
    LOGICAL_AND = 340,
    LOGICAL_OR = 341,
    RIGHT_SHIFT_ASSIGNMENT = 342,
    NOT_EQUALS = 343,
    BITWISE_AND_ASSIGNMENT = 344,
    BITWISE_OR_ASSIGNMENT = 345,
    BITWISE_XOR_ASSIGNMENT = 346,
    INVALID_TOKEN = 347,
    THEN = 348
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHARTYPE 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOATTYPE 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INTTYPE 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOIDTYPE 289
#define VOLATILE 290
#define WHILE 291
#define _BOOL 292
#define _COMPLEX 293
#define _IMAGINARY 294
#define IDENTIFIER 295
#define INTEGER_CONSTANT 296
#define FLOATING_CONSTANT 297
#define CHARACTER_CONSTANT 298
#define STRING_LITERAL 299
#define LEFT_SQUARE_BRACKET 300
#define INCREMENT 301
#define SLASH 302
#define QUESTION_MARK 303
#define ASSIGNMENT 304
#define COMMA 305
#define RIGHT_SQUARE_BRACKET 306
#define LEFT_PARENTHESES 307
#define LEFT_CURLY_BRACKET 308
#define RIGHT_CURLY_BRACKET 309
#define DOT 310
#define ARROW 311
#define ASTERISK 312
#define PLUS 313
#define MINUS 314
#define TILDE 315
#define EXCLAMATION 316
#define MODULO 317
#define LEFT_SHIFT 318
#define RIGHT_SHIFT 319
#define LESS_THAN 320
#define GREATER_THAN 321
#define LESS_EQUAL_THAN 322
#define GREATER_EQUAL_THAN 323
#define COLON 324
#define SEMI_COLON 325
#define ELLIPSIS 326
#define ASTERISK_ASSIGNMENT 327
#define SLASH_ASSIGNMENT 328
#define MODULO_ASSIGNMENT 329
#define PLUS_ASSIGNMENT 330
#define MINUS_ASSIGNMENT 331
#define LEFT_SHIFT_ASSIGNMENT 332
#define HASH 333
#define DECREMENT 334
#define RIGHT_PARENTHESES 335
#define BITWISE_AND 336
#define EQUALS 337
#define BITWISE_XOR 338
#define BITWISE_OR 339
#define LOGICAL_AND 340
#define LOGICAL_OR 341
#define RIGHT_SHIFT_ASSIGNMENT 342
#define NOT_EQUALS 343
#define BITWISE_AND_ASSIGNMENT 344
#define BITWISE_OR_ASSIGNMENT 345
#define BITWISE_XOR_ASSIGNMENT 346
#define INVALID_TOKEN 347
#define THEN 348

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "ass6_21CS10042_21CS10040.y"

    int intVal;
    char *floatVal;
    char *charVal;
    char *stringVal;
    char *identifierVal;

    int instructionNumber;
    int parameterCount;

    char *unaryOperator;
    Expression *expression;
    Statement *statement;
    Array *array;
    SymbolType *symbolType;
    Symbol *symbol;

#line 334 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1098

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  366

#define YYUNDEFTOK  2
#define YYMAXUTOK   348


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   192,   192,   199,   206,   213,   220,   229,   237,   246,
     266,   275,   279,   283,   292,   301,   305,   314,   320,   328,
     335,   345,   350,   357,   364,   391,   395,   404,   409,   414,
     419,   424,   429,   437,   442,   466,   482,   505,   528,   554,
     559,   570,   584,   589,   600,   622,   627,   641,   655,   669,
     686,   691,   707,   735,   740,   753,   758,   771,   776,   799,
     806,   848,   853,   867,   872,   886,   891,   911,   916,   937,
     941,   945,   949,   953,   957,   961,   965,   969,   973,   977,
     984,   989,   996,  1005,  1012,  1017,  1023,  1027,  1031,  1035,
    1042,  1047,  1053,  1057,  1064,  1069,  1081,  1085,  1089,  1093,
    1100,  1105,  1110,  1114,  1119,  1123,  1128,  1132,  1136,  1140,
    1144,  1148,  1152,  1159,  1163,  1170,  1175,  1181,  1185,  1189,
    1196,  1201,  1207,  1211,  1218,  1222,  1229,  1233,  1237,  1244,
    1251,  1260,  1267,  1280,  1286,  1291,  1295,  1299,  1317,  1336,
    1340,  1344,  1348,  1352,  1356,  1372,  1376,  1395,  1400,  1436,
    1442,  1451,  1455,  1462,  1466,  1473,  1477,  1484,  1490,  1497,
    1501,  1508,  1515,  1520,  1524,  1531,  1535,  1542,  1547,  1553,
    1560,  1564,  1571,  1575,  1584,  1588,  1593,  1599,  1604,  1609,
    1617,  1621,  1625,  1638,  1646,  1652,  1659,  1664,  1674,  1679,
    1687,  1695,  1701,  1727,  1735,  1744,  1775,  1785,  1794,  1805,
    1812,  1816,  1820,  1824,  1839,  1843,  1850,  1854,  1867,  1881,
    1886,  1892,  1896
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHARTYPE",
  "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN",
  "FLOATTYPE", "FOR", "GOTO", "IF", "INLINE", "INTTYPE", "LONG",
  "REGISTER", "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOIDTYPE",
  "VOLATILE", "WHILE", "_BOOL", "_COMPLEX", "_IMAGINARY", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "LEFT_SQUARE_BRACKET", "INCREMENT", "SLASH",
  "QUESTION_MARK", "ASSIGNMENT", "COMMA", "RIGHT_SQUARE_BRACKET",
  "LEFT_PARENTHESES", "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "DOT",
  "ARROW", "ASTERISK", "PLUS", "MINUS", "TILDE", "EXCLAMATION", "MODULO",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_EQUAL_THAN", "GREATER_EQUAL_THAN", "COLON", "SEMI_COLON",
  "ELLIPSIS", "ASTERISK_ASSIGNMENT", "SLASH_ASSIGNMENT",
  "MODULO_ASSIGNMENT", "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT",
  "LEFT_SHIFT_ASSIGNMENT", "HASH", "DECREMENT", "RIGHT_PARENTHESES",
  "BITWISE_AND", "EQUALS", "BITWISE_XOR", "BITWISE_OR", "LOGICAL_AND",
  "LOGICAL_OR", "RIGHT_SHIFT_ASSIGNMENT", "NOT_EQUALS",
  "BITWISE_AND_ASSIGNMENT", "BITWISE_OR_ASSIGNMENT",
  "BITWISE_XOR_ASSIGNMENT", "INVALID_TOKEN", "THEN", "$accept",
  "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression", "M", "N",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "change_scope", "direct_declarator",
  "type_qualifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initialiser", "initialiser_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348
};
# endif

#define YYPACT_NINF (-298)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-211)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1025,  -298,  -298,  -298,  -298,    43,  -298,  -298,  -298,  -298,
    -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,
    -298,  -298,  -298,    27,  1025,  1025,  -298,  1025,  1025,   988,
    -298,  -298,    67,    85,  -298,    27,   106,   -45,   100,  -298,
     947,    60,   -18,  -298,  -298,  -298,  -298,  -298,  -298,  -298,
     103,    81,  -298,    83,   106,  -298,    27,   757,  -298,    27,
    -298,  1025,   608,   131,    60,   125,   -33,  -298,  -298,  -298,
    -298,  -298,   127,   828,  -298,  -298,  -298,  -298,  -298,   856,
     566,   -22,  -298,  -298,  -298,  -298,  -298,   856,  -298,  -298,
      -9,   758,   884,  -298,    87,    93,   102,    91,    54,   112,
     101,   118,   120,   -34,  -298,  -298,  -298,   150,  -298,   692,
    -298,   153,   158,   650,  -298,   531,   -26,   884,   -28,  -298,
     566,  -298,   566,  -298,  -298,   -15,  1059,  -298,  1059,   126,
     884,   170,    18,   757,  -298,    90,  -298,  -298,   884,  -298,
     884,   171,   172,  -298,  -298,  -298,  -298,  -298,  -298,  -298,
    -298,  -298,  -298,  -298,  -298,   884,  -298,  -298,   884,   884,
     884,   884,   884,   884,   884,   884,   884,   884,   884,   884,
     884,   884,   884,   884,  -298,  -298,   165,   280,   163,   692,
    -298,  -298,   884,  -298,   164,   169,  -298,    27,   141,   174,
    -298,   182,  -298,  -298,  -298,  -298,  -298,   145,   147,   884,
    -298,  -298,  -298,  -298,   800,   177,  -298,    62,  -298,  -298,
    -298,  -298,   119,   151,   183,  -298,  -298,  -298,  -298,  -298,
    -298,  -298,    87,    87,    93,    93,   102,   102,   102,   102,
      91,    91,    54,   112,   101,   884,   884,  -298,   162,   884,
     166,   175,  -298,   186,   195,   187,   884,   188,  -298,   176,
     280,   191,  -298,  -298,  -298,  -298,   189,   192,  -298,  -298,
     178,  -298,  -298,  -298,  -298,   198,   199,  -298,  -298,  -298,
    -298,   755,  -298,   200,   200,  -298,   -22,  -298,  -298,  -298,
     757,  -298,  -298,   884,   118,   120,   884,  -298,   185,  -298,
     468,   468,   422,   190,   884,   193,   884,   203,   468,   202,
    -298,   359,  -298,  -298,  -298,  -298,  -298,    31,  -298,  -298,
     191,   468,  -298,  -298,   884,   194,  -298,   -11,  -298,    -2,
     884,  -298,  -298,  -298,    92,  -298,   197,  -298,   216,   201,
    -298,  -298,   468,    24,  -298,  -298,   205,   884,   884,   468,
    -298,  -298,   884,   884,   179,   207,  -298,   468,  -298,    30,
     468,  -298,   246,  -298,   208,  -298,   884,  -298,  -298,  -298,
     468,   181,  -298,  -298,   468,  -298
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,   101,   126,   106,   121,    96,   105,   129,   103,
     104,    99,   127,   102,   107,    97,   108,   100,   128,   109,
     110,   111,   207,    85,    91,    91,   112,    91,    91,     0,
     204,   206,   119,     0,   133,     0,   148,     0,    84,    92,
      94,   131,     0,    90,    86,    87,    88,    89,     1,   205,
       0,     0,   151,   149,   147,    83,     0,     0,   211,    85,
     132,   209,     0,   132,   130,   124,     0,   122,   134,   150,
     152,    93,    94,     0,     2,     3,     4,     5,     6,     0,
       0,   168,    28,    29,    30,    31,    32,     0,    27,     8,
      21,    33,     0,    35,    39,    42,    45,    50,    53,    55,
      57,    61,    63,    65,    67,   162,    95,     0,   212,     0,
     138,    28,     0,     0,   159,     0,     0,     0,     0,   117,
       0,    25,     0,    22,    80,     0,   116,   161,   116,     0,
       0,     0,     0,     0,   167,     0,   170,    23,     0,    13,
      18,     0,     0,    14,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    79,    78,     0,    33,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    59,     0,   185,     0,     0,
     143,   137,     0,   136,    28,     0,   146,   158,     0,   153,
     155,     0,   145,    82,   125,   118,   123,     0,     0,     0,
       7,   115,   113,   114,     0,     0,   173,   168,   163,   165,
     169,   171,     0,     0,    17,    19,    11,    12,    68,    37,
      36,    38,    40,    41,    43,    44,    46,    47,    48,    49,
      51,    52,    54,    56,    58,     0,     0,    59,     0,     0,
       0,     0,    59,     0,     0,     0,   192,     0,    59,     2,
     185,   191,   188,   189,   174,   175,     0,    59,   186,   176,
       0,   177,   178,   179,   140,     0,     0,   142,   135,   157,
     144,     0,   160,    26,     0,    81,   168,    34,   172,   164,
       0,     9,    10,     0,    62,    64,     0,   202,     0,   201,
     192,   192,   192,     0,     0,     0,     0,     0,   192,     0,
     208,   192,   190,   139,   141,   154,   156,     0,   166,    20,
      60,   192,   182,    59,   192,     0,   200,     0,   203,     0,
       0,   180,   183,   187,   168,    15,     0,   181,     0,     0,
      59,    59,   192,     0,    16,    59,     0,   192,   192,   192,
     195,    59,     0,     0,     0,     0,    60,   192,    66,     0,
     192,    59,   193,   196,     0,   199,   192,    59,   197,    60,
     192,     0,   194,    59,   192,   198
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -298,  -298,  -298,  -298,  -298,   -72,  -298,   -83,    29,    36,
      21,    25,    96,    97,    89,    33,  -134,  -297,    39,  -298,
    -112,    -7,  -298,   -78,  -120,     0,  -298,     3,   155,  -298,
     223,  -298,   -69,   -55,   144,  -298,  -298,  -298,   209,     2,
    -298,   -19,   217,   239,  -298,   229,   -43,  -298,  -298,    38,
    -298,    40,  -127,    35,  -199,  -298,  -298,   196,  -113,  -298,
    -298,    75,  -298,    11,  -298,  -183,  -298,  -298,  -298,  -298,
     299,  -298,  -298,  -298
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    89,    90,   213,   214,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   235,   176,   102,   103,
     104,   124,   155,   251,   194,   252,    37,    59,    44,    38,
      39,    24,    25,   127,   202,    26,    33,    66,    67,    27,
      28,    72,   107,    41,    53,    42,    54,   188,   189,   190,
     116,   129,   106,   132,   133,   134,   135,   136,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,    29,
      30,    31,    60,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   121,   125,    23,    40,   193,   209,   123,   280,   157,
     205,   126,    65,   326,   -60,   137,    51,   118,   193,   113,
     156,   119,    34,   130,   191,    55,   195,    43,    43,    22,
      43,    43,    23,   131,    35,   199,   138,   139,    52,   199,
      58,   236,   125,   140,   125,   156,   141,   142,   199,   352,
     105,   126,   175,   126,   192,   112,    70,   126,   156,   126,
     212,   108,   361,   295,    52,   200,   179,    34,   207,   331,
     143,   201,   208,   201,   199,   219,   220,   221,   332,    35,
     199,   324,   128,    32,    36,   325,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   178,   286,   341,    62,   185,   130,   291,   315,
     354,    52,    63,     3,   297,    70,   279,   131,   187,   288,
    -120,   277,   128,   301,   128,   280,   105,   193,   128,    12,
     128,   329,   156,   215,   158,   130,   169,   130,    50,   210,
      36,    18,   170,    65,   159,   131,   334,   131,   218,   160,
      56,   161,   162,   308,   344,   345,   165,   166,   167,   168,
     197,    68,   198,   156,   156,   163,   164,   156,   269,   199,
     281,   114,   265,   359,   117,   266,    57,   312,   313,   328,
      45,    70,    46,    47,   172,   321,   226,   227,   228,   229,
     222,   223,   275,   171,   230,   231,   338,   339,   327,   224,
     225,   342,   173,   177,   180,   174,   204,   347,   310,   181,
     206,   216,   217,   237,   264,   267,   317,   356,   319,   340,
     268,   270,   272,   360,   271,   273,   346,   274,   278,   364,
     348,   282,   287,   283,   353,   293,   289,   355,   292,   294,
     296,   199,   333,   300,   290,   298,  -184,   362,   302,   303,
     304,   365,   336,   276,   311,   320,   322,   343,   357,   350,
     316,   363,   234,   318,   330,   349,   335,   232,   284,   233,
     156,   337,   203,   105,   187,   285,   309,   351,   358,    71,
     115,    64,    69,     1,   238,   239,     2,     3,   240,   241,
     242,     4,   314,     5,     6,     7,   243,   244,   245,     8,
       9,    10,    11,    12,   246,    13,    14,    73,    15,   306,
     247,   307,   323,    16,    17,    18,   248,    19,    20,    21,
     249,    75,    76,    77,    78,   299,    79,   196,    49,     0,
       0,   211,    80,   250,     0,     0,     0,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
    -192,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,    88,     1,   238,   239,     2,     3,   240,   241,   242,
       4,     0,     5,     6,     7,   243,   244,   245,     8,     9,
      10,    11,    12,   246,    13,    14,    73,    15,     0,   247,
       0,     0,    16,    17,    18,   248,    19,    20,    21,   249,
      75,    76,    77,    78,     0,    79,     0,     0,     0,     0,
       0,    80,   250,     0,     0,     0,    82,    83,    84,    85,
      86,     0,     0,     0,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,    87,     0,
      88,     8,     9,    10,    11,    12,     0,    13,    14,    73,
      15,     0,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21,    74,    75,    76,    77,    78,     0,    79,     0,
       0,     0,   238,   239,    80,     0,   240,   241,   242,    82,
      83,    84,    85,    86,   243,   244,   245,     0,     0,     0,
       0,     0,   246,     0,     0,    73,     0,     0,   247,     0,
       0,    87,     0,    88,   248,     0,     0,     0,   249,    75,
      76,    77,    78,     0,    79,     0,     0,     0,     0,     0,
      80,   250,     0,     0,     0,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,    87,     0,    88,
       8,     9,    10,    11,    12,     0,    13,    14,     0,    15,
       0,     0,     0,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     0,     0,     9,    10,     0,    12,
       0,    13,    14,    73,     0,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,    74,    75,    76,    77,
      78,   186,    79,     0,     0,     3,     0,     0,    80,     0,
       0,     0,     0,    82,    83,    84,    85,    86,     0,     0,
       0,    12,     0,     0,     0,    73,   109,     0,     0,     0,
       0,     0,     0,    18,     0,    87,     0,    88,    74,    75,
      76,    77,    78,     0,    79,     0,     0,     3,     0,   110,
      80,     0,     0,     0,     0,   111,    83,    84,    85,    86,
       0,     0,     0,    12,     0,     0,     0,    73,   182,     0,
       0,     0,     0,     0,     0,    18,     0,    87,     0,    88,
      74,    75,    76,    77,    78,     0,    79,     0,     0,     3,
       0,   183,    80,     0,     0,     0,     0,   184,    83,    84,
      85,    86,     0,     0,     0,    12,     0,     0,     0,    73,
       0,     0,     0,     0,     0,     0,     0,    18,     0,    87,
       0,    88,    74,    75,    76,    77,    78,     0,    79,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,    87,     0,    88,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,    73,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     0,     0,    74,    75,    76,
      77,    78,     0,    79,     0,     0,     0,   144,     0,    80,
      81,     0,     0,     0,    82,    83,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,   305,    73,     0,     0,
     145,   146,   147,   148,   149,   150,    87,     0,    88,     0,
      74,    75,    76,    77,    78,   151,    79,   152,   153,   154,
       0,     0,    80,   276,     0,    73,     0,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,     0,    79,     0,     0,     0,     0,    87,
     120,    88,     0,    73,     0,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,     0,    79,     0,     0,     0,     0,    87,   122,    88,
       0,    73,     0,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,     0,
      79,     0,     0,     0,     0,    87,    80,    88,     0,     0,
       0,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,    87,     0,    88,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     0,    48,     0,
       0,     1,     0,     0,     2,     3,    57,     0,     0,     4,
    -210,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     2,     3,     0,     0,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     0,     9,
      10,     0,    12,     0,    13,    14,     0,     0,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    73,    80,     0,    23,   117,   133,    79,   207,    92,
     130,    80,    40,   310,    48,    87,    35,    50,   130,    62,
      92,    54,    40,    45,    50,    70,    54,    24,    25,    29,
      27,    28,    29,    55,    52,    50,    45,    46,    36,    50,
      40,   175,   120,    52,   122,   117,    55,    56,    50,   346,
      57,   120,    86,   122,    80,    62,    54,   126,   130,   128,
     138,    61,   359,   246,    62,    80,   109,    40,    50,    80,
      79,   126,    54,   128,    50,   158,   159,   160,    80,    52,
      50,    50,    80,    40,    57,    54,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   109,   237,    80,    45,   113,    45,   242,   292,
      80,   109,    52,     7,   248,   113,    54,    55,   115,   239,
      53,   204,   120,   257,   122,   324,   133,   239,   126,    23,
     128,   314,   204,   140,    47,    45,    82,    45,    53,    49,
      57,    35,    88,    40,    57,    55,    54,    55,   155,    62,
      50,    58,    59,   280,   337,   338,    65,    66,    67,    68,
     120,    80,   122,   235,   236,    63,    64,   239,   187,    50,
      51,    40,   179,   356,    49,   182,    49,   290,   291,   313,
      25,   179,    27,    28,    83,   298,   165,   166,   167,   168,
     161,   162,   199,    81,   169,   170,   330,   331,   311,   163,
     164,   335,    84,    53,    51,    85,    80,   341,   286,    51,
      40,    40,    40,    48,    51,    51,   294,   351,   296,   332,
      51,    80,    40,   357,    50,    80,   339,    80,    51,   363,
     342,    80,    70,    50,   347,    40,    70,   350,    52,    52,
      52,    50,   320,    54,    69,    69,    54,   360,    70,    51,
      51,   364,    36,    53,    69,    52,    54,    52,    12,    80,
      70,    80,   173,    70,    70,   343,    69,   171,   235,   172,
     342,    70,   128,   280,   271,   236,   283,    70,    70,    56,
      63,    42,    53,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   292,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,   271,
      30,   276,   301,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   250,    46,   118,    29,    -1,
      -1,   135,    52,    53,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    79,    -1,
      81,    19,    20,    21,    22,    23,    -1,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    -1,     4,     5,    52,    -1,     8,     9,    10,    57,
      58,    59,    60,    61,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    27,    -1,    -1,    30,    -1,
      -1,    79,    -1,    81,    36,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    79,    -1,    81,
      19,    20,    21,    22,    23,    -1,    25,    26,    -1,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,
      39,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    80,    46,    -1,    -1,     7,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    79,    -1,    81,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,     7,    -1,    51,
      52,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    79,    -1,    81,
      40,    41,    42,    43,    44,    -1,    46,    -1,    -1,     7,
      -1,    51,    52,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    79,
      -1,    81,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    79,    -1,    81,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    27,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,    -1,    -1,    40,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    49,    -1,    52,
      53,    -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    27,    -1,    -1,
      72,    73,    74,    75,    76,    77,    79,    -1,    81,    -1,
      40,    41,    42,    43,    44,    87,    46,    89,    90,    91,
      -1,    -1,    52,    53,    -1,    27,    -1,    57,    58,    59,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    79,
      52,    81,    -1,    27,    -1,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    79,    52,    81,
      -1,    27,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    79,    52,    81,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    79,    -1,    81,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    -1,     0,    -1,
      -1,     3,    -1,    -1,     6,     7,    49,    -1,    -1,    11,
      53,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   119,   121,   125,   126,   129,   133,   134,   163,
     164,   165,    40,   130,    40,    52,    57,   120,   123,   124,
     135,   137,   139,   121,   122,   122,   122,   122,     0,   164,
      53,   135,   133,   138,   140,    70,    50,    49,   119,   121,
     166,   167,    45,    52,   137,    40,   131,   132,    80,   139,
     133,   124,   135,    27,    40,    41,    42,    43,    44,    46,
      52,    53,    57,    58,    59,    60,    61,    79,    81,    95,
      96,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   112,   113,   114,   115,   146,   136,   119,    28,
      51,    57,   115,   140,    40,   136,   144,    49,    50,    54,
      52,    99,    52,    99,   115,   117,   126,   127,   133,   145,
      45,    55,   147,   148,   149,   150,   151,    99,    45,    46,
      52,    55,    56,    79,    49,    72,    73,    74,    75,    76,
      77,    87,    89,    90,    91,   116,    99,   101,    47,    57,
      62,    58,    59,    63,    64,    65,    66,    67,    68,    82,
      88,    81,    83,    84,    85,    86,   111,    53,   115,   140,
      51,    51,    28,    51,    57,   115,    80,   121,   141,   142,
     143,    50,    80,   114,   118,    54,   132,   145,   145,    50,
      80,   127,   128,   128,    80,   118,    40,    50,    54,   146,
      49,   151,   117,    97,    98,   115,    40,    40,   115,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   106,   107,   108,   110,   110,    48,     4,     5,
       8,     9,    10,    16,    17,    18,    24,    30,    36,    40,
      53,   117,   119,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,    51,   115,   115,    51,    51,   135,
      80,    50,    40,    80,    80,   115,    53,   101,    51,    54,
     148,    51,    80,    50,   109,   112,   110,    70,   118,    70,
      69,   110,    52,    40,    52,   159,    52,   110,    69,   155,
      54,   110,    70,    51,    51,    71,   143,   147,   146,   115,
     117,    69,   152,   152,   119,   159,    70,   117,    70,   117,
      52,   152,    54,   157,    50,    54,   111,   152,   110,   159,
      70,    80,    80,   117,    54,    69,    36,    70,   110,   110,
     152,    80,   110,    52,   159,   159,   152,   110,   114,   117,
      80,    70,   111,   152,    80,   152,   110,    12,    70,   159,
     110,   111,   152,    80,   110,   152
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     100,   100,   100,   101,   101,   102,   102,   102,   102,   103,
     103,   103,   104,   104,   104,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   119,   120,   120,   121,   121,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   125,   125,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   127,   127,   128,   128,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   133,   134,
     135,   135,   136,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   138,   138,   139,
     139,   140,   140,   141,   141,   142,   142,   143,   143,   144,
     144,   145,   146,   146,   146,   147,   147,   148,   148,   149,
     150,   150,   151,   151,   152,   152,   152,   152,   152,   152,
     153,   153,   153,   154,   155,   155,   156,   156,   157,   157,
     158,   159,   159,   160,   160,   160,   161,   161,   161,   161,
     162,   162,   162,   162,   163,   163,   164,   164,   165,   166,
     166,   167,   167
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     0,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     0,
       0,     1,     4,     1,     4,     1,     9,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     0,     2,     2,     2,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     0,     5,     6,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     0,     1,     3,     5,     4,     4,     3,     6,
       5,     6,     5,     4,     5,     4,     4,     1,     0,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     3,     4,     2,     4,     1,     0,     2,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     3,     1,     0,     1,     3,     1,     1,
       2,     1,     0,     7,    10,     5,     7,     9,    13,     8,
       3,     2,     2,     3,     1,     2,     1,     1,     7,     1,
       0,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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
  case 2:
#line 193 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("primary_expression ==> IDENTIFIER");
                (yyval.expression) = new Expression();
                (yyval.expression)->symbol = (yyvsp[0].symbol);
                (yyval.expression)->type = Expression::NONBOOLEAN; 
            }
#line 1965 "y.tab.c"
    break;

  case 3:
#line 200 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("primary_expression ==> INTEGER_CONSTANT"); 
                (yyval.expression) = new Expression();
                (yyval.expression)->symbol = gentemp(SymbolType::INT, toString((yyvsp[0].intVal)));
                emit("=", (yyval.expression)->symbol->name, (yyvsp[0].intVal));
            }
#line 1976 "y.tab.c"
    break;

  case 4:
#line 207 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("primary_expression ==> FLOATING_CONSTANT"); 
                (yyval.expression) = new Expression();
                (yyval.expression)->symbol = gentemp(SymbolType::FLOAT, (yyvsp[0].floatVal));
                emit("=", (yyval.expression)->symbol->name, (yyvsp[0].floatVal));
            }
#line 1987 "y.tab.c"
    break;

  case 5:
#line 214 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("primary_expression ==> CHARACTER_CONSTANT"); 
                (yyval.expression) = new Expression();
                (yyval.expression)->symbol = gentemp(SymbolType::CHAR, (yyvsp[0].charVal));
                emit("=", (yyval.expression)->symbol->name, (yyvsp[0].charVal));
            }
#line 1998 "y.tab.c"
    break;

  case 6:
#line 221 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("primary_expression ==> STRING_LITERAL"); 
                (yyval.expression) = new Expression();
                (yyval.expression)->symbol = gentemp(SymbolType::POINTER, (yyvsp[0].stringVal));
                (yyval.expression)->symbol->type->arrayType = new SymbolType(SymbolType::CHAR);
                emit("=str", (yyval.expression)->symbol->name, stringLiterals.size());
                stringLiterals.push_back((yyvsp[0].stringVal));
            }
#line 2011 "y.tab.c"
    break;

  case 7:
#line 230 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("primary_expression ==> ( expression )"); 
                (yyval.expression) = (yyvsp[-1].expression);
            }
#line 2020 "y.tab.c"
    break;

  case 8:
#line 238 "ass6_21CS10042_21CS10040.y"
            { 
                // creating a new array with symbol same as the primary expression
                yyinfo("postfix_expression ==> primary_expression"); 
                (yyval.array) = new Array();
                (yyval.array)->symbol = (yyvsp[0].expression)->symbol;
                (yyval.array)->temp = (yyval.array)->symbol;
                (yyval.array)->subArrayType = (yyvsp[0].expression)->symbol->type;
            }
#line 2033 "y.tab.c"
    break;

  case 9:
#line 247 "ass6_21CS10042_21CS10040.y"
            { 
                // array expression => creating a new array
                yyinfo("postfix_expression ==> postfix_expression [ expression ]"); 
                (yyval.array) = new Array();
                (yyval.array)->symbol = (yyvsp[-3].array)->symbol;    // same symbol continues
                (yyval.array)->subArrayType = (yyvsp[-3].array)->subArrayType->arrayType; // as we are indexing we need to go one more level deep
                (yyval.array)->temp = gentemp(SymbolType::INT); // temporary to compute location
                (yyval.array)->type = Array::ARRAY;    // type will be array

                if((yyvsp[-3].array)->type == Array::ARRAY) {
                    // as postfix_expression is already an array we multiply expression with size of subarray and add
                    Symbol *sym = gentemp(SymbolType::INT);
                    emit("*", sym->name, (yyvsp[-1].expression)->symbol->name, toString((yyval.array)->subArrayType->getSize()));
                    emit("+", (yyval.array)->temp->name, (yyvsp[-3].array)->temp->name, sym->name);
                } else {
                    emit("*", (yyval.array)->temp->name, (yyvsp[-1].expression)->symbol->name, toString((yyval.array)->subArrayType->getSize()));
                }

            }
#line 2057 "y.tab.c"
    break;

  case 10:
#line 267 "ass6_21CS10042_21CS10040.y"
            { 
                // function call => argument_expression_list_opt stores the number of parameters
                yyinfo("postfix_expression ==> postfix_expression ( argument_expression_list_opt )"); 
                (yyval.array) = new Array();
                (yyval.array)->symbol = gentemp((yyvsp[-3].array)->symbol->type->type);
                (yyval.array)->symbol->type->arrayType = (yyvsp[-3].array)->symbol->type->arrayType;
                emit("call", (yyval.array)->symbol->name, (yyvsp[-3].array)->symbol->name, toString((yyvsp[-1].parameterCount)));
            }
#line 2070 "y.tab.c"
    break;

  case 11:
#line 276 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("postfix_expression ==> postfix_expression . IDENTIFIER"); 
            }
#line 2078 "y.tab.c"
    break;

  case 12:
#line 280 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("postfix_expression ==> postfix_expression -> IDENTIFIER"); 
            }
#line 2086 "y.tab.c"
    break;

  case 13:
#line 284 "ass6_21CS10042_21CS10040.y"
            { 
                // post increment => we should first generate a temporary with actual value and later add 1
                yyinfo("postfix_expression ==> postfix_expression ++");
                (yyval.array) = new Array();
                (yyval.array)->symbol = gentemp((yyvsp[-1].array)->symbol->type->type);
                emit("=", (yyval.array)->symbol->name, (yyvsp[-1].array)->symbol->name);
                emit("+", (yyvsp[-1].array)->symbol->name, (yyvsp[-1].array)->symbol->name, toString(1)); 
            }
#line 2099 "y.tab.c"
    break;

  case 14:
#line 293 "ass6_21CS10042_21CS10040.y"
            { 
                // post decrement => we should first generate a temporary with actual value and later subtract 1
                yyinfo("postfix_expression ==> postfix_expression --"); 
                (yyval.array) = new Array();
                (yyval.array)->symbol = gentemp((yyvsp[-1].array)->symbol->type->type);
                emit("=", (yyval.array)->symbol->name, (yyvsp[-1].array)->symbol->name);
                emit("-", (yyvsp[-1].array)->symbol->name, (yyvsp[-1].array)->symbol->name, toString(1));
            }
#line 2112 "y.tab.c"
    break;

  case 15:
#line 302 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("postfix_expression ==> ( type_name ) { initialiser_list }"); 
            }
#line 2120 "y.tab.c"
    break;

  case 16:
#line 306 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("postfix_expression ==> ( type_name ) { initialiser_list , }"); 
            }
#line 2128 "y.tab.c"
    break;

  case 17:
#line 315 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("argument_expression_list_opt ==> argument_expression_list"); 
                (yyval.parameterCount) = (yyvsp[0].parameterCount);
            }
#line 2137 "y.tab.c"
    break;

  case 18:
#line 320 "ass6_21CS10042_21CS10040.y"
            { 
                // if empty => 0 params (epsilon or null)
                yyinfo("argument_expression_list_opt ==> epsilon");
                (yyval.parameterCount) = 0;
            }
#line 2147 "y.tab.c"
    break;

  case 19:
#line 329 "ass6_21CS10042_21CS10040.y"
            { 
                // for first parameter initialise parameter count to 1
                yyinfo("argument_expression_list ==> assignment_expression"); 
                emit("param", (yyvsp[0].expression)->symbol->name);
                (yyval.parameterCount) = 1;
            }
#line 2158 "y.tab.c"
    break;

  case 20:
#line 336 "ass6_21CS10042_21CS10040.y"
            { 
                // for a new parameter, increment parameter count by 1
                yyinfo("argument_expression_list ==> argument_expression_list , assignment_expression");
                emit("param", (yyvsp[0].expression)->symbol->name);
                (yyval.parameterCount) = (yyvsp[-2].parameterCount) + 1; 
            }
#line 2169 "y.tab.c"
    break;

  case 21:
#line 346 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("unary_expression ==> postfix_expression"); 
                (yyval.array) = (yyvsp[0].array);
            }
#line 2178 "y.tab.c"
    break;

  case 22:
#line 351 "ass6_21CS10042_21CS10040.y"
            { 
                // for pre increment no new temporary is required so we simply add 1
                yyinfo("unary_expression ==> ++ unary_expression"); 
                (yyval.array) = (yyvsp[0].array);
                emit("+", (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->symbol->name, toString(1));
            }
#line 2189 "y.tab.c"
    break;

  case 23:
#line 358 "ass6_21CS10042_21CS10040.y"
            { 
                // for pre decrement no new temporary is required so we simply subtract 1
                yyinfo("unary_expression ==> -- unary_expression"); 
                (yyval.array) = (yyvsp[0].array);
                emit("-", (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->symbol->name, toString(1));
            }
#line 2200 "y.tab.c"
    break;

  case 24:
#line 365 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("unary_expression ==> unary_operator cast_expression");
                if(strcmp((yyvsp[-1].unaryOperator), "&") == 0) {
                    // addressing => generates a pointer which makes the subArray type same as the symbol type of the cast_expression
                    (yyval.array) = new Array();
                    (yyval.array)->symbol = gentemp(SymbolType::POINTER);
                    (yyval.array)->symbol->type->arrayType = (yyvsp[0].array)->symbol->type;
                    emit("=&", (yyval.array)->symbol->name, (yyvsp[0].array)->symbol->name);
                } else if(strcmp((yyvsp[-1].unaryOperator), "*") == 0) {
                    // dereferncing => generates a pointer, a new temporary is generated with type as the subarray type of the cast_expression
                    // so the subArray type will be one level deeper to that of the cast_expression
                    (yyval.array) = new Array();
                    (yyval.array)->symbol = (yyvsp[0].array)->symbol;
                    (yyval.array)->temp = gentemp((yyvsp[0].array)->temp->type->arrayType->type);
                    (yyval.array)->temp->type->arrayType = (yyvsp[0].array)->temp->type->arrayType->arrayType;
                    (yyval.array)->type = Array::POINTER;
                    emit("=*", (yyval.array)->temp->name, (yyvsp[0].array)->temp->name);
                } else if(strcmp((yyvsp[-1].unaryOperator), "+") == 0) {
                    (yyval.array) = (yyvsp[0].array);
                } else { // for -, ~ and !
                    // apply the operator on cast_expression as they are direct operations
                    (yyval.array) = new Array();
                    (yyval.array)->symbol = gentemp((yyvsp[0].array)->symbol->type->type);
                    emit((yyvsp[-1].unaryOperator), (yyval.array)->symbol->name, (yyvsp[0].array)->symbol->name);
                }
            }
#line 2231 "y.tab.c"
    break;

  case 25:
#line 392 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("unary_expression ==> sizeof unary_expression"); 
            }
#line 2239 "y.tab.c"
    break;

  case 26:
#line 396 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("unary_expression ==> sizeof ( type_name )"); 
            }
#line 2247 "y.tab.c"
    break;

  case 27:
#line 405 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("unary_operator ==> &"); 
                (yyval.unaryOperator) = strdup("&"); 
            }
#line 2256 "y.tab.c"
    break;

  case 28:
#line 410 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("unary_operator ==> *"); 
                (yyval.unaryOperator) = strdup("*"); 
            }
#line 2265 "y.tab.c"
    break;

  case 29:
#line 415 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("unary_operator ==> +"); 
                (yyval.unaryOperator) = strdup("+"); 
            }
#line 2274 "y.tab.c"
    break;

  case 30:
#line 420 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("unary_operator ==> -"); 
                (yyval.unaryOperator) = strdup("=-"); 
            }
#line 2283 "y.tab.c"
    break;

  case 31:
#line 425 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("unary_operator ==> ~"); 
                (yyval.unaryOperator) = strdup("~"); 
            }
#line 2292 "y.tab.c"
    break;

  case 32:
#line 430 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("unary_operator ==> !"); 
                (yyval.unaryOperator) = strdup("!"); 
            }
#line 2301 "y.tab.c"
    break;

  case 33:
#line 438 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("cast_expression ==> unary_expression"); 
                (yyval.array) = (yyvsp[0].array);
            }
#line 2310 "y.tab.c"
    break;

  case 34:
#line 443 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("cast_expression ==> ( type_name ) cast_expression"); 
                (yyval.array) = new Array();
                (yyval.array)->symbol = (yyvsp[0].array)->symbol->convert(currentType);
            }
#line 2320 "y.tab.c"
    break;

  case 35:
#line 467 "ass6_21CS10042_21CS10040.y"
            { 
                SymbolType *baseType = (yyvsp[0].array)->symbol->type;
                while(baseType->arrayType)
                    baseType = baseType->arrayType;
                yyinfo("multiplicative_expression ==> cast_expression"); 
                (yyval.expression) = new Expression();
                if((yyvsp[0].array)->type == Array::ARRAY) {
                    (yyval.expression)->symbol = gentemp(baseType->type);
                    emit("=[]", (yyval.expression)->symbol->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
                } else if((yyvsp[0].array)->type == Array::POINTER) {
                    (yyval.expression)->symbol = (yyvsp[0].array)->temp;
                } else {
                    (yyval.expression)->symbol = (yyvsp[0].array)->symbol;
                }
            }
#line 2340 "y.tab.c"
    break;

  case 36:
#line 483 "ass6_21CS10042_21CS10040.y"
            { 
                SymbolType *baseType = (yyvsp[0].array)->symbol->type;
                while(baseType->arrayType)
                    baseType = baseType->arrayType;
                Symbol *temp;
                if((yyvsp[0].array)->type == Array::ARRAY) {
                    temp = gentemp(baseType->type);
                    emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
                } else if((yyvsp[0].array)->type == Array::POINTER) {
                    temp = (yyvsp[0].array)->temp;
                } else {
                    temp = (yyvsp[0].array)->symbol;
                }
                yyinfo("multiplicative_expression ==> multiplicative_expression * cast_expression"); 
                if(typeCheck((yyvsp[-2].expression)->symbol, temp)) {
                    (yyval.expression) = new Expression();
                    (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                    emit("*", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, temp->name);
                } else {
                    yyerror("TYPE ERROR !!!");
                }
            }
#line 2367 "y.tab.c"
    break;

  case 37:
#line 506 "ass6_21CS10042_21CS10040.y"
            { 
                SymbolType *baseType = (yyvsp[0].array)->symbol->type;
                while(baseType->arrayType)
                    baseType = baseType->arrayType;
                Symbol *temp;
                if((yyvsp[0].array)->type == Array::ARRAY) {
                    temp = gentemp(baseType->type);
                    emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
                } else if((yyvsp[0].array)->type == Array::POINTER) {
                    temp = (yyvsp[0].array)->temp;
                } else {
                    temp = (yyvsp[0].array)->symbol;
                }
                yyinfo("multiplicative_expression ==> multiplicative_expression / cast_expression");
                if(typeCheck((yyvsp[-2].expression)->symbol, temp)) {
                    (yyval.expression) = new Expression();
                    (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                    emit("/", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, temp->name);
                } else {
                    yyerror("TYPE ERROR !!!");
                }
            }
#line 2394 "y.tab.c"
    break;

  case 38:
#line 529 "ass6_21CS10042_21CS10040.y"
            { 
                SymbolType *baseType = (yyvsp[0].array)->symbol->type;
                while(baseType->arrayType)
                    baseType = baseType->arrayType;
                Symbol *temp;
                if((yyvsp[0].array)->type == Array::ARRAY) {
                    temp = gentemp(baseType->type);
                    emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
                } else if((yyvsp[0].array)->type == Array::POINTER) {
                    temp = (yyvsp[0].array)->temp;
                } else {
                    temp = (yyvsp[0].array)->symbol;
                }
                yyinfo("multiplicative_expression ==> multiplicative_expression % cast_expression"); 
                if(typeCheck((yyvsp[-2].expression)->symbol, temp)) {
                    (yyval.expression) = new Expression();
                    (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                    emit("%", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, temp->name);
                } else {
                    yyerror("TYPE ERROR !!!");
                }
            }
#line 2421 "y.tab.c"
    break;

  case 39:
#line 555 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("additive_expression ==> multiplicative_expression"); 
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 2430 "y.tab.c"
    break;

  case 40:
#line 560 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("additive_expression ==> additive_expression + multiplicative_expression"); 
                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                    (yyval.expression) = new Expression();
                    (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                    emit("+", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                } else {
                    yyerror("TYPE ERROR !!!");
                }
            }
#line 2445 "y.tab.c"
    break;

  case 41:
#line 571 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("additive_expression ==> additive_expression - multiplicative_expression"); 
                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                    (yyval.expression) = new Expression();
                    (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                    emit("-", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                } else {
                    yyerror("TYPE ERROR !!!");
                }
            }
#line 2460 "y.tab.c"
    break;

  case 42:
#line 585 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("shift_expression ==> additive_expression");
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 2469 "y.tab.c"
    break;

  case 43:
#line 590 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("shift_expression ==> shift_expression << additive_expression"); 
                if((yyvsp[0].expression)->symbol->type->type == SymbolType::INT) {
                    (yyval.expression) = new Expression();
                    (yyval.expression)->symbol = gentemp(SymbolType::INT);
                    emit("<<", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                } else {
                    yyerror("TYPE ERROR !!!");
                }
            }
#line 2484 "y.tab.c"
    break;

  case 44:
#line 601 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("shift_expression ==> shift_expression >> additive_expression"); 
                if((yyvsp[0].expression)->symbol->type->type == SymbolType::INT) {
                    (yyval.expression) = new Expression();
                    (yyval.expression)->symbol = gentemp(SymbolType::INT);
                    emit(">>", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                } else {
                    yyerror("TYPE ERROR !!!");
                }
            }
#line 2499 "y.tab.c"
    break;

  case 45:
#line 623 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("relational_expression ==> shift_expression"); 
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 2508 "y.tab.c"
    break;

  case 46:
#line 628 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("relational_expression ==> relational_expression < shift_expression"); 
                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                    (yyval.expression) = new Expression();
                    (yyval.expression)->type = Expression::BOOLEAN;
                    (yyval.expression)->trueList = makeList(nextInstruction());
                    (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                    emit("<", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                    emit("goto", "");
                } else {
                    yyerror("TYPE ERROR !!!");
                }
            }
#line 2526 "y.tab.c"
    break;

  case 47:
#line 642 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("relational_expression ==> relational_expression > shift_expression"); 
                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                    (yyval.expression) = new Expression();
                    (yyval.expression)->type = Expression::BOOLEAN;
                    (yyval.expression)->trueList = makeList(nextInstruction());
                    (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                    emit(">", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                    emit("goto", "");
                } else {
                    yyerror("TYPE ERROR !!!");
                }
            }
#line 2544 "y.tab.c"
    break;

  case 48:
#line 656 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("relational_expression ==> relational_expression <= shift_expression"); 
                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                    (yyval.expression) = new Expression();
                    (yyval.expression)->type = Expression::BOOLEAN;
                    (yyval.expression)->trueList = makeList(nextInstruction());
                    (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                    emit("<=", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                    emit("goto", "");
                } else {
                    yyerror("TYPE ERROR !!!");
                }
            }
#line 2562 "y.tab.c"
    break;

  case 49:
#line 670 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("relational_expression ==> relational_expression >= shift_expression"); 
                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                    (yyval.expression) = new Expression();
                    (yyval.expression)->type = Expression::BOOLEAN;
                    (yyval.expression)->trueList = makeList(nextInstruction());
                    (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                    emit(">=", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                    emit("goto", "");
                } else {
                    yyerror("TYPE ERROR !!!");
                }
            }
#line 2580 "y.tab.c"
    break;

  case 50:
#line 687 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("equality_expression ==> relational_expression"); 
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 2589 "y.tab.c"
    break;

  case 51:
#line 692 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("equality_expression ==> equality_expression == relational_expression"); 
                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                    (yyvsp[-2].expression)->toInt();
                    (yyvsp[0].expression)->toInt();
                    (yyval.expression) = new Expression();
                    (yyval.expression)->type = Expression::BOOLEAN;
                    (yyval.expression)->trueList = makeList(nextInstruction());
                    (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                    emit("==", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                    emit("goto", "");
                } else {
                    yyerror("TYPE ERROR !!!");
                }
            }
#line 2609 "y.tab.c"
    break;

  case 52:
#line 708 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("equality_expression ==> equality_expression != relational_expression"); 
                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                    (yyvsp[-2].expression)->toInt();
                    (yyvsp[0].expression)->toInt();
                    (yyval.expression) = new Expression();
                    (yyval.expression)->type = Expression::BOOLEAN;
                    (yyval.expression)->trueList = makeList(nextInstruction());
                    (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                    emit("!=", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                    emit("goto", "");
                } else {
                    yyerror("TYPE ERROR !!!");
                }
            }
#line 2629 "y.tab.c"
    break;

  case 53:
#line 736 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("AND_expression ==> equality_expression"); 
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 2638 "y.tab.c"
    break;

  case 54:
#line 741 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("AND_expression ==> AND_expression & equality_expression"); 
                (yyvsp[-2].expression)->toInt();
                (yyvsp[0].expression)->toInt();
                (yyval.expression) = new Expression();
                (yyval.expression)->type = Expression::NONBOOLEAN;
                (yyval.expression)->symbol = gentemp(SymbolType::INT);
                emit("&", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
            }
#line 2652 "y.tab.c"
    break;

  case 55:
#line 754 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("exclusive_OR_expression ==> AND_expression"); 
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 2661 "y.tab.c"
    break;

  case 56:
#line 759 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("exclusive_OR_expression ==> exclusive_OR_expression ^ AND_expression"); 
                (yyvsp[-2].expression)->toInt();
                (yyvsp[0].expression)->toInt();
                (yyval.expression) = new Expression();
                (yyval.expression)->type = Expression::NONBOOLEAN;
                (yyval.expression)->symbol = gentemp(SymbolType::INT);
                emit("^", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
            }
#line 2675 "y.tab.c"
    break;

  case 57:
#line 772 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("inclusive_OR_expression ==> exclusive_OR_expression"); 
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 2684 "y.tab.c"
    break;

  case 58:
#line 777 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("inclusive_OR_expression ==> inclusive_OR_expression | exclusive_OR_expression"); 
                (yyvsp[-2].expression)->toInt();
                (yyvsp[0].expression)->toInt();
                (yyval.expression) = new Expression();
                (yyval.expression)->type = Expression::NONBOOLEAN;
                (yyval.expression)->symbol = gentemp(SymbolType::INT);
                emit("|", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
            }
#line 2698 "y.tab.c"
    break;

  case 59:
#line 799 "ass6_21CS10042_21CS10040.y"
        {
            yyinfo("M ==> epsilon");
            (yyval.instructionNumber) = nextInstruction();
        }
#line 2707 "y.tab.c"
    break;

  case 60:
#line 806 "ass6_21CS10042_21CS10040.y"
        {
            yyinfo("N ==> epsilon");
            (yyval.statement) = new Statement();
            (yyval.statement)->nextList = makeList(nextInstruction());
            emit("goto", "");
        }
#line 2718 "y.tab.c"
    break;

  case 61:
#line 849 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("logical_AND_expression ==> inclusive_OR_expression"); 
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 2727 "y.tab.c"
    break;

  case 62:
#line 854 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("logical_AND_expression ==> logical_AND_expression && inclusive_OR_expression");
                (yyvsp[-3].expression)->toBool();
                (yyvsp[0].expression)->toBool();
                (yyval.expression) = new Expression();
                (yyval.expression)->type = Expression::BOOLEAN;
                backpatch((yyvsp[-3].expression)->trueList, (yyvsp[-1].instructionNumber));
                (yyval.expression)->trueList = (yyvsp[0].expression)->trueList;
                (yyval.expression)->falseList = merge((yyvsp[-3].expression)->falseList, (yyvsp[0].expression)->falseList);
            }
#line 2742 "y.tab.c"
    break;

  case 63:
#line 868 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("logical_OR_expression ==> logical_AND_expression"); 
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 2751 "y.tab.c"
    break;

  case 64:
#line 873 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("logical_OR_expression ==> logical_OR_expression || logical_AND_expression"); 
                (yyvsp[-3].expression)->toBool();
                (yyvsp[0].expression)->toBool();
                (yyval.expression) = new Expression();
                (yyval.expression)->type = Expression::BOOLEAN;
                backpatch((yyvsp[-3].expression)->falseList, (yyvsp[-1].instructionNumber));
                (yyval.expression)->trueList = merge((yyvsp[-3].expression)->trueList, (yyvsp[0].expression)->trueList);
                (yyval.expression)->falseList = (yyvsp[0].expression)->falseList;
            }
#line 2766 "y.tab.c"
    break;

  case 65:
#line 887 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("conditional_expression ==> logical_OR_expression"); 
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 2775 "y.tab.c"
    break;

  case 66:
#line 892 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("conditional_expression ==> logical_OR_expression ? expression : conditional_expression"); 
                (yyval.expression)->symbol = gentemp((yyvsp[-4].expression)->symbol->type->type);
                emit("=", (yyval.expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                list<int> l = makeList(nextInstruction());
                emit("goto", "");
                backpatch((yyvsp[-3].statement)->nextList, nextInstruction());
                emit("=", (yyval.expression)->symbol->name, (yyvsp[-4].expression)->symbol->name);
                l = merge(l, makeList(nextInstruction()));
                emit("goto", "");
                backpatch((yyvsp[-7].statement)->nextList, nextInstruction());
                (yyvsp[-8].expression)->toBool();
                backpatch((yyvsp[-8].expression)->trueList, (yyvsp[-5].instructionNumber));
                backpatch((yyvsp[-8].expression)->falseList, (yyvsp[-1].instructionNumber));
                backpatch(l, nextInstruction());
            }
#line 2796 "y.tab.c"
    break;

  case 67:
#line 912 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("assignment_expression ==> conditional_expression"); 
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 2805 "y.tab.c"
    break;

  case 68:
#line 917 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("assignment_expression ==> unary_expression assignment_operator assignment_expression"); 
                if((yyvsp[-2].array)->type == Array::ARRAY) {
                    // assignment to array
                    (yyvsp[0].expression)->symbol = (yyvsp[0].expression)->symbol->convert((yyvsp[-2].array)->subArrayType->type);
                    emit("[]=", (yyvsp[-2].array)->symbol->name, (yyvsp[-2].array)->temp->name, (yyvsp[0].expression)->symbol->name);
                } else if((yyvsp[-2].array)->type == Array::POINTER) {
                    // assignment to pointer
                    (yyvsp[0].expression)->symbol = (yyvsp[0].expression)->symbol->convert((yyvsp[-2].array)->temp->type->type);
                    emit("*=", (yyvsp[-2].array)->temp->name, (yyvsp[0].expression)->symbol->name);
                } else {
                    // assignment to other
                    (yyvsp[0].expression)->symbol = (yyvsp[0].expression)->symbol->convert((yyvsp[-2].array)->symbol->type->type);
                    emit("=", (yyvsp[-2].array)->symbol->name, (yyvsp[0].expression)->symbol->name);
                }
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 2827 "y.tab.c"
    break;

  case 69:
#line 938 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("assignment_operator ==> ="); 
            }
#line 2835 "y.tab.c"
    break;

  case 70:
#line 942 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("assignment_operator ==> *="); 
            }
#line 2843 "y.tab.c"
    break;

  case 71:
#line 946 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("assignment_operator ==> /="); 
            }
#line 2851 "y.tab.c"
    break;

  case 72:
#line 950 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("assignment_operator ==> %="); 
            }
#line 2859 "y.tab.c"
    break;

  case 73:
#line 954 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("assignment_operator ==> += "); 
            }
#line 2867 "y.tab.c"
    break;

  case 74:
#line 958 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("assignment_operator ==> -= "); 
            }
#line 2875 "y.tab.c"
    break;

  case 75:
#line 962 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("assignment_operator ==> <<="); 
            }
#line 2883 "y.tab.c"
    break;

  case 76:
#line 966 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("assignment_operator ==> >>="); 
            }
#line 2891 "y.tab.c"
    break;

  case 77:
#line 970 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("assignment_operator ==> &="); 
            }
#line 2899 "y.tab.c"
    break;

  case 78:
#line 974 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("assignment_operator ==> ^="); 
            }
#line 2907 "y.tab.c"
    break;

  case 79:
#line 978 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("assignment_operator ==> |="); 
            }
#line 2915 "y.tab.c"
    break;

  case 80:
#line 985 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("expression ==> assignment_expression"); 
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 2924 "y.tab.c"
    break;

  case 81:
#line 990 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("expression ==> expression , assignment_expression"); 
            }
#line 2932 "y.tab.c"
    break;

  case 82:
#line 997 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("constant_expression ==> conditional_expression"); 
            }
#line 2940 "y.tab.c"
    break;

  case 83:
#line 1006 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("declaration ==> declaration_specifiers init_declarator_list_opt ;"); 
            }
#line 2948 "y.tab.c"
    break;

  case 84:
#line 1013 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("init_declarator_list_opt ==> init_declarator_list"); 
            }
#line 2956 "y.tab.c"
    break;

  case 85:
#line 1017 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("init_declarator_list_opt ==> epsilon"); 
            }
#line 2964 "y.tab.c"
    break;

  case 86:
#line 1024 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("declaration_specifiers ==> storage_class_specifier declaration_specifiers_opt"); 
            }
#line 2972 "y.tab.c"
    break;

  case 87:
#line 1028 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("declaration_specifiers ==> type_specifier declaration_specifiers_opt"); 
            }
#line 2980 "y.tab.c"
    break;

  case 88:
#line 1032 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("declaration_specifiers ==> type_qualifier declaration_specifiers_opt"); 
            }
#line 2988 "y.tab.c"
    break;

  case 89:
#line 1036 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("declaration_specifiers ==> function_specifier declaration_specifiers_opt"); 
            }
#line 2996 "y.tab.c"
    break;

  case 90:
#line 1043 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("declaration_specifiers_opt ==> declaration_specifiers"); 
            }
#line 3004 "y.tab.c"
    break;

  case 91:
#line 1047 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("declaration_specifiers_opt ==> epsilon "); 
            }
#line 3012 "y.tab.c"
    break;

  case 92:
#line 1054 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("init_declarator_list ==> init_declarator"); 
            }
#line 3020 "y.tab.c"
    break;

  case 93:
#line 1058 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("init_declarator_list ==> init_declarator_list , init_declarator"); 
            }
#line 3028 "y.tab.c"
    break;

  case 94:
#line 1065 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("init_declarator ==> declarator"); 
                (yyval.symbol) = (yyvsp[0].symbol);
            }
#line 3037 "y.tab.c"
    break;

  case 95:
#line 1070 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("init_declarator ==> declarator = initialiser");
                // if there is some initial value assign it 
                if((yyvsp[0].symbol)->initialValue != "") 
                    (yyvsp[-2].symbol)->initialValue = (yyvsp[0].symbol)->initialValue;
                // = assignment
                emit("=", (yyvsp[-2].symbol)->name, (yyvsp[0].symbol)->name);
            }
#line 3050 "y.tab.c"
    break;

  case 96:
#line 1082 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("storage_class_specifier ==> extern"); 
            }
#line 3058 "y.tab.c"
    break;

  case 97:
#line 1086 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("storage_class_specifier ==> static"); 
            }
#line 3066 "y.tab.c"
    break;

  case 98:
#line 1090 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("storage_class_specifier ==> auto"); 
            }
#line 3074 "y.tab.c"
    break;

  case 99:
#line 1094 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("storage_class_specifier ==> register"); 
            }
#line 3082 "y.tab.c"
    break;

  case 100:
#line 1101 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("type_specifier ==> void");
                currentType = SymbolType::VOID;
            }
#line 3091 "y.tab.c"
    break;

  case 101:
#line 1106 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("type_specifier ==> char"); 
                currentType = SymbolType::CHAR;
            }
#line 3100 "y.tab.c"
    break;

  case 102:
#line 1111 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("type_specifier ==> short"); 
            }
#line 3108 "y.tab.c"
    break;

  case 103:
#line 1115 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("type_specifier ==> int"); 
                currentType = SymbolType::INT;
            }
#line 3117 "y.tab.c"
    break;

  case 104:
#line 1120 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("type_specifier ==> long"); 
            }
#line 3125 "y.tab.c"
    break;

  case 105:
#line 1124 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("type_specifier ==> float"); 
                currentType = SymbolType::FLOAT;
            }
#line 3134 "y.tab.c"
    break;

  case 106:
#line 1129 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("type_specifier ==> double"); 
            }
#line 3142 "y.tab.c"
    break;

  case 107:
#line 1133 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("type_specifier ==> signed"); 
            }
#line 3150 "y.tab.c"
    break;

  case 108:
#line 1137 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("type_specifier ==> unsigned"); 
            }
#line 3158 "y.tab.c"
    break;

  case 109:
#line 1141 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("type_specifier ==> _Bool"); 
            }
#line 3166 "y.tab.c"
    break;

  case 110:
#line 1145 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("type_specifier ==> _Complex"); 
            }
#line 3174 "y.tab.c"
    break;

  case 111:
#line 1149 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("type_specifier ==> _Imaginary"); 
            }
#line 3182 "y.tab.c"
    break;

  case 112:
#line 1153 "ass6_21CS10042_21CS10040.y"
            {
                    yyinfo("type_specifier ==> enum_specifier"); 
            }
#line 3190 "y.tab.c"
    break;

  case 113:
#line 1160 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("specifier_qualifier_list ==> type_specifier specifier_qualifier_list_opt"); 
            }
#line 3198 "y.tab.c"
    break;

  case 114:
#line 1164 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("specifier_qualifier_list ==> type_qualifier specifier_qualifier_list_opt"); 
            }
#line 3206 "y.tab.c"
    break;

  case 115:
#line 1171 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("specifier_qualifier_list_opt ==> specifier_qualifier_list"); 
            }
#line 3214 "y.tab.c"
    break;

  case 116:
#line 1175 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("specifier_qualifier_list_opt ==> epsilon"); 
            }
#line 3222 "y.tab.c"
    break;

  case 117:
#line 1182 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("enum_specifier ==> enum identifier_opt { enumerator_list }"); 
            }
#line 3230 "y.tab.c"
    break;

  case 118:
#line 1186 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("enum_specifier ==> enum identifier_opt { enumerator_list , }"); 
            }
#line 3238 "y.tab.c"
    break;

  case 119:
#line 1190 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("enum_specifier ==> enum IDENTIFIER"); 
            }
#line 3246 "y.tab.c"
    break;

  case 120:
#line 1197 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("identifier_opt ==> IDENTIFIER"); 
            }
#line 3254 "y.tab.c"
    break;

  case 121:
#line 1201 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("identifier_opt ==> epsilon"); 
            }
#line 3262 "y.tab.c"
    break;

  case 122:
#line 1208 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("enumerator_list ==> enumerator"); 
            }
#line 3270 "y.tab.c"
    break;

  case 123:
#line 1212 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("enumerator_list ==> enumerator_list , enumerator"); 
            }
#line 3278 "y.tab.c"
    break;

  case 124:
#line 1219 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("enumerator ==> ENUMERATION_CONSTANT"); 
            }
#line 3286 "y.tab.c"
    break;

  case 125:
#line 1223 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("enumerator ==> ENUMERATION_CONSTANT = constant_expression"); 
            }
#line 3294 "y.tab.c"
    break;

  case 126:
#line 1230 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("type_qualifier ==> const"); 
            }
#line 3302 "y.tab.c"
    break;

  case 127:
#line 1234 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("type_qualifier ==> restrict"); 
            }
#line 3310 "y.tab.c"
    break;

  case 128:
#line 1238 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("type_qualifier ==> volatile"); 
            }
#line 3318 "y.tab.c"
    break;

  case 129:
#line 1245 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("function_specifier ==> inline"); 
            }
#line 3326 "y.tab.c"
    break;

  case 130:
#line 1252 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("declarator ==> pointer direct_declarator"); 
                SymbolType *it = (yyvsp[-1].symbolType);
                while(it->arrayType != NULL) 
                    it = it->arrayType;
                it->arrayType = (yyvsp[0].symbol)->type;
                (yyval.symbol) = (yyvsp[0].symbol)->update((yyvsp[-1].symbolType));
            }
#line 3339 "y.tab.c"
    break;

  case 131:
#line 1261 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("declarator ==> direct_declarator"); 
            }
#line 3347 "y.tab.c"
    break;

  case 132:
#line 1267 "ass6_21CS10042_21CS10040.y"
            {
                if(currentSymbol->nestedTable == NULL) {
                    changeTable(new SymbolTable(""));
                }
                else {
                    changeTable(currentSymbol->nestedTable);
                    emit("label", currentTable->name);
                }
            }
#line 3361 "y.tab.c"
    break;

  case 133:
#line 1281 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => IDENTIFIER"); 
                (yyval.symbol) = (yyvsp[0].symbol)->update(new SymbolType(currentType)); // update type to the last type seen
                currentSymbol = (yyval.symbol);
            }
#line 3371 "y.tab.c"
    break;

  case 134:
#line 1287 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => ( declarator )"); 
                (yyval.symbol) = (yyvsp[-1].symbol);
            }
#line 3380 "y.tab.c"
    break;

  case 135:
#line 1292 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => direct_declarator [ type_qualifier_list assignment_expression ]"); 
            }
#line 3388 "y.tab.c"
    break;

  case 136:
#line 1296 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => direct_declarator [ type_qualifier_list ]"); 
            }
#line 3396 "y.tab.c"
    break;

  case 137:
#line 1300 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => direct_declarator [ assignment_expression ]"); 
                SymbolType *it1 = (yyvsp[-3].symbol)->type, *it2 = NULL;
                while(it1->type == SymbolType::ARRAY) { // go to the base level of a nested type
                    it2 = it1;
                    it1 = it1->arrayType;
                }
                if(it2 != NULL) { // nested array case
                    // another level of nesting with base as it1 and width the value of assignment_expression
                    it2->arrayType =  new SymbolType(SymbolType::ARRAY, it1, atoi((yyvsp[-1].expression)->symbol->initialValue.c_str()));	
                    (yyval.symbol) = (yyvsp[-3].symbol)->update((yyvsp[-3].symbol)->type);
                }
                else { // fresh array
                    // create a new array with base as type of direct_declarator and width the value of assignment_expression
                    (yyval.symbol) = (yyvsp[-3].symbol)->update(new SymbolType(SymbolType::ARRAY, (yyvsp[-3].symbol)->type, atoi((yyvsp[-1].expression)->symbol->initialValue.c_str())));
                }
            }
#line 3418 "y.tab.c"
    break;

  case 138:
#line 1318 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => direct_declarator [ ]"); 
                // same as the previous rule, just we dont know the size so put it as 0
                SymbolType *it1 = (yyvsp[-2].symbol)->type, *it2 = NULL;
                while(it1->type == SymbolType::ARRAY) { // go to the base level of a nested type
                    it2 = it1;
                    it1 = it1->arrayType;
                }
                if(it2 != NULL) { // nested array case
                    // another level of nesting with base as it1 and width the value of assignment_expression
                    it2->arrayType =  new SymbolType(SymbolType::ARRAY, it1, 0);	
                    (yyval.symbol) = (yyvsp[-2].symbol)->update((yyvsp[-2].symbol)->type);
                }
                else { // fresh array
                    // create a new array with base as type of direct_declarator and width the value of assignment_expression
                    (yyval.symbol) = (yyvsp[-2].symbol)->update(new SymbolType(SymbolType::ARRAY, (yyvsp[-2].symbol)->type, 0));
                }
            }
#line 3441 "y.tab.c"
    break;

  case 139:
#line 1337 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => direct_declarator [ static type_qualifier_list assignment_expression ]"); 
            }
#line 3449 "y.tab.c"
    break;

  case 140:
#line 1341 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => direct_declarator [ assignment_expression ]"); 
            }
#line 3457 "y.tab.c"
    break;

  case 141:
#line 1345 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => direct_declarator [ type_qualifier_list static assignment_expression ]"); 
            }
#line 3465 "y.tab.c"
    break;

  case 142:
#line 1349 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => direct_declarator [ type_qualifier_list * ]"); 
            }
#line 3473 "y.tab.c"
    break;

  case 143:
#line 1353 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => direct_declarator [ * ]"); 
            }
#line 3481 "y.tab.c"
    break;

  case 144:
#line 1357 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => direct_declarator ( parameter_type_list )"); 
                // function declaration
                currentTable->name = (yyvsp[-4].symbol)->name;
                if((yyvsp[-4].symbol)->type->type != SymbolType::VOID) {
                    // set type of return value
                    currentTable->lookup("return")->update((yyvsp[-4].symbol)->type);
                }
                // move back to the global table and set the nested table for the function
                (yyvsp[-4].symbol)->nestedTable = currentTable;
                (yyvsp[-4].symbol)->category = Symbol::FUNCTION;
                currentTable->parent = globalTable;
                changeTable(globalTable);
                currentSymbol = (yyval.symbol);
            }
#line 3501 "y.tab.c"
    break;

  case 145:
#line 1373 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => direct_declarator ( identifier_list )"); 
            }
#line 3509 "y.tab.c"
    break;

  case 146:
#line 1377 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("direct_declarator => direct_declarator ( )"); 
                // same as the previous rule
                currentTable->name = (yyvsp[-3].symbol)->name;
                if((yyvsp[-3].symbol)->type->type != SymbolType::VOID) {
                    // set type of return value
                    currentTable->lookup("return")->update((yyvsp[-3].symbol)->type);
                }
                // move back to the global table and set the nested table for the function
                (yyvsp[-3].symbol)->nestedTable = currentTable;
                (yyvsp[-3].symbol)->category = Symbol::FUNCTION;
                currentTable->parent = globalTable;
                changeTable(globalTable);
                currentSymbol = (yyval.symbol);
            }
#line 3529 "y.tab.c"
    break;

  case 147:
#line 1396 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("type_qualifier_list_opt ==> type_qualifier_list"); 
            }
#line 3537 "y.tab.c"
    break;

  case 148:
#line 1400 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("type_qualifier_list_opt ==> epsilon"); 
            }
#line 3545 "y.tab.c"
    break;

  case 149:
#line 1437 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("pointer ==> * type_qualifier_list_opt"); 
                // fresh pointer
                (yyval.symbolType) = new SymbolType(SymbolType::POINTER);
            }
#line 3555 "y.tab.c"
    break;

  case 150:
#line 1443 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("pointer ==> * type_qualifier_list_opt pointer"); 
                // nested pointer
                (yyval.symbolType) = new SymbolType(SymbolType::POINTER, (yyvsp[0].symbolType));
            }
#line 3565 "y.tab.c"
    break;

  case 151:
#line 1452 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("type_qualifier_list ==> type_qualifier"); 
            }
#line 3573 "y.tab.c"
    break;

  case 152:
#line 1456 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("type_qualifier_list ==> type_qualifier_list type_qualifier"); 
            }
#line 3581 "y.tab.c"
    break;

  case 153:
#line 1463 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("parameter_type_list ==> parameter_list"); 
            }
#line 3589 "y.tab.c"
    break;

  case 154:
#line 1467 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("parameter_type_list ==> parameter_list , ..."); 
            }
#line 3597 "y.tab.c"
    break;

  case 155:
#line 1474 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("parameter_list ==> parameter_declaration"); 
            }
#line 3605 "y.tab.c"
    break;

  case 156:
#line 1478 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("parameter_list ==> parameter_list , parameter_declaration"); 
            }
#line 3613 "y.tab.c"
    break;

  case 157:
#line 1485 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("parameter_declaration => declaration_specifiers declarator");
                (yyvsp[0].symbol)->category = Symbol::PARAMETER; 
                currentTable->parameters.push_back((yyvsp[0].symbol)->name);
            }
#line 3623 "y.tab.c"
    break;

  case 158:
#line 1491 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("parameter_declaration => declaration_specifiers"); 
            }
#line 3631 "y.tab.c"
    break;

  case 159:
#line 1498 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("identifier_list ==> IDENTIFIER"); 
            }
#line 3639 "y.tab.c"
    break;

  case 160:
#line 1502 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("identifier_list ==> identifier_list , IDENTIFIER"); 
            }
#line 3647 "y.tab.c"
    break;

  case 161:
#line 1509 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("type_name ==> specifier_qualifier_list"); 
            }
#line 3655 "y.tab.c"
    break;

  case 162:
#line 1516 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("initialiser ==> assignment_expression"); 
                (yyval.symbol) = (yyvsp[0].expression)->symbol;
            }
#line 3664 "y.tab.c"
    break;

  case 163:
#line 1521 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("initialiser ==> { initialiser_list }"); 
            }
#line 3672 "y.tab.c"
    break;

  case 164:
#line 1525 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("initialiser ==> { initialiser_list , }"); 
            }
#line 3680 "y.tab.c"
    break;

  case 165:
#line 1532 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("initialiser_list ==> designation_opt initialiser"); 
            }
#line 3688 "y.tab.c"
    break;

  case 166:
#line 1536 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("initialiser_list ==> initialiser_list , designation_opt initialiser"); 
            }
#line 3696 "y.tab.c"
    break;

  case 167:
#line 1543 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("designation_opt ==> designation"); 
            }
#line 3704 "y.tab.c"
    break;

  case 168:
#line 1547 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("designation_opt ==> epsilon"); 
            }
#line 3712 "y.tab.c"
    break;

  case 169:
#line 1554 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("designation ==> designator_list ="); 
            }
#line 3720 "y.tab.c"
    break;

  case 170:
#line 1561 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("designator_list ==> designator"); 
            }
#line 3728 "y.tab.c"
    break;

  case 171:
#line 1565 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("designator_list ==> designator_list designator"); 
            }
#line 3736 "y.tab.c"
    break;

  case 172:
#line 1572 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("designator ==> [ constant_expression ]"); 
            }
#line 3744 "y.tab.c"
    break;

  case 173:
#line 1576 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("designator ==> . IDENTIFIER"); 
            }
#line 3752 "y.tab.c"
    break;

  case 174:
#line 1585 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("statement ==> labeled_statement"); 
            }
#line 3760 "y.tab.c"
    break;

  case 175:
#line 1589 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("statement ==> compound_statement");
                (yyval.statement) = (yyvsp[0].statement); 
            }
#line 3769 "y.tab.c"
    break;

  case 176:
#line 1594 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("statement ==> expression_statement"); 
                (yyval.statement) = new Statement();
                (yyval.statement)->nextList = (yyvsp[0].expression)->nextList;
            }
#line 3779 "y.tab.c"
    break;

  case 177:
#line 1600 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("statement ==> selection_statement"); 
                (yyval.statement) = (yyvsp[0].statement);
            }
#line 3788 "y.tab.c"
    break;

  case 178:
#line 1605 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("statement ==> iteration_statement"); 
                (yyval.statement) = (yyvsp[0].statement);
            }
#line 3797 "y.tab.c"
    break;

  case 179:
#line 1610 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("statement ==> jump_statement"); 
                (yyval.statement) = (yyvsp[0].statement);
            }
#line 3806 "y.tab.c"
    break;

  case 180:
#line 1618 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("labeled_statement ==> IDENTIFIER : statement"); 
            }
#line 3814 "y.tab.c"
    break;

  case 181:
#line 1622 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("labeled_statement ==> case constant_expression : statement"); 
            }
#line 3822 "y.tab.c"
    break;

  case 182:
#line 1626 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("labeled_statement ==> default : statement"); 
            }
#line 3830 "y.tab.c"
    break;

  case 183:
#line 1639 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("compound_statement => { block_item_list_opt }"); 
                (yyval.statement) = (yyvsp[-1].statement);
            }
#line 3839 "y.tab.c"
    break;

  case 184:
#line 1647 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("block_item_list_opt ==> block_item_list"); 
                (yyval.statement) = (yyvsp[0].statement);
            }
#line 3848 "y.tab.c"
    break;

  case 185:
#line 1652 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("block_item_list_opt ==> epsilon"); 
                (yyval.statement) = new Statement();
            }
#line 3857 "y.tab.c"
    break;

  case 186:
#line 1660 "ass6_21CS10042_21CS10040.y"
            {
                yyinfo("block_item_list ==> block_item"); 
                (yyval.statement) = (yyvsp[0].statement);
            }
#line 3866 "y.tab.c"
    break;

  case 187:
#line 1665 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("block_item_list ==> block_item_list block_item"); 
                (yyval.statement) = (yyvsp[0].statement);
                // after completion of block_item_list(1) we move to block_item(3)
                backpatch((yyvsp[-2].statement)->nextList,(yyvsp[-1].instructionNumber));
            }
#line 3877 "y.tab.c"
    break;

  case 188:
#line 1675 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("block_item ==> declaration"); 
                (yyval.statement) = new Statement();
            }
#line 3886 "y.tab.c"
    break;

  case 189:
#line 1680 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("block_item ==> statement"); 
                (yyval.statement) = (yyvsp[0].statement);
            }
#line 3895 "y.tab.c"
    break;

  case 190:
#line 1688 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("expression_statement ==> expression_opt ;"); 
                (yyval.expression) = (yyvsp[-1].expression);
            }
#line 3904 "y.tab.c"
    break;

  case 191:
#line 1696 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("expression_opt ==> expression"); 
                (yyval.expression) = (yyvsp[0].expression);
            }
#line 3913 "y.tab.c"
    break;

  case 192:
#line 1701 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("expression_opt ==> epsilon"); 
                (yyval.expression) = new Expression();
            }
#line 3922 "y.tab.c"
    break;

  case 193:
#line 1728 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("selection_statement ==> if ( expression ) statement"); 
                (yyval.statement) = new Statement();
                (yyvsp[-4].expression)->toBool();
                backpatch((yyvsp[-4].expression)->trueList, (yyvsp[-2].instructionNumber)); // if true go to M
                (yyval.statement)->nextList = merge((yyvsp[-4].expression)->falseList, merge((yyvsp[-1].statement)->nextList, (yyvsp[0].statement)->nextList)); // exits
            }
#line 3934 "y.tab.c"
    break;

  case 194:
#line 1736 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("selection_statement ==> if ( expression ) statement else statement"); 
                (yyval.statement) = new Statement();
                (yyvsp[-7].expression)->toBool();
                backpatch((yyvsp[-7].expression)->trueList, (yyvsp[-5].instructionNumber)); // if true go to M
                backpatch((yyvsp[-7].expression)->falseList, (yyvsp[-1].instructionNumber)); // if false go to else
                (yyval.statement)->nextList = merge((yyvsp[0].statement)->nextList, merge((yyvsp[-4].statement)->nextList, (yyvsp[-3].statement)->nextList)); // exits
            }
#line 3947 "y.tab.c"
    break;

  case 195:
#line 1745 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("selection_statement ==> switch ( expression ) statement"); 
            }
#line 3955 "y.tab.c"
    break;

  case 196:
#line 1776 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("iteration_statement ==> while ( expression ) statement"); 
                (yyval.statement) = new Statement();
                (yyvsp[-3].expression)->toBool();
                backpatch((yyvsp[0].statement)->nextList, (yyvsp[-5].instructionNumber)); // after this statement go back to M1
                backpatch((yyvsp[-3].expression)->trueList, (yyvsp[-1].instructionNumber)); // if true go to M2
                (yyval.statement)->nextList = (yyvsp[-3].expression)->falseList; // else exit
                emit("goto", toString((yyvsp[-5].instructionNumber)));
            }
#line 3969 "y.tab.c"
    break;

  case 197:
#line 1786 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("iteration_statement ==> do statement while ( expression ) ;"); 
                (yyval.statement) = new Statement();
                (yyvsp[-2].expression)->toBool();
                backpatch((yyvsp[-2].expression)->trueList, (yyvsp[-7].instructionNumber)); // if true go back to M1
                backpatch((yyvsp[-6].statement)->nextList, (yyvsp[-5].instructionNumber)); // after statement is executed go to M2
                (yyval.statement)->nextList = (yyvsp[-2].expression)->falseList; // else exit
            }
#line 3982 "y.tab.c"
    break;

  case 198:
#line 1795 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("iteration_statement ==> for ( expression_opt ; expression_opt ; expression_opt ) statement"); 
                (yyval.statement) = new Statement();
                (yyvsp[-7].expression)->toBool();
                backpatch((yyvsp[-7].expression)->trueList, (yyvsp[-1].instructionNumber)); // if true go to M3 (loop body)
                backpatch((yyvsp[-3].statement)->nextList, (yyvsp[-8].instructionNumber)); // after N go to M1 (check condition)
                backpatch((yyvsp[0].statement)->nextList, (yyvsp[-5].instructionNumber)); // after S1 (loop body) go to M2 (increment/decrement/any other operation)
                emit("goto", toString((yyvsp[-5].instructionNumber)));
                (yyval.statement)->nextList = (yyvsp[-7].expression)->falseList; // else exit
            }
#line 3997 "y.tab.c"
    break;

  case 199:
#line 1806 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("iteration_statement ==> for ( declaration expression_opt ; expression_opt ) statement"); 
            }
#line 4005 "y.tab.c"
    break;

  case 200:
#line 1813 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("jump_statement ==> goto IDENTIFIER ;"); 
            }
#line 4013 "y.tab.c"
    break;

  case 201:
#line 1817 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("jump_statement ==> continue ;"); 
            }
#line 4021 "y.tab.c"
    break;

  case 202:
#line 1821 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("jump_statement ==> break ;"); 
            }
#line 4029 "y.tab.c"
    break;

  case 203:
#line 1825 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("jump_statement ==> return expression_opt ;"); 
                (yyval.statement) = new Statement();
                if((yyvsp[-1].expression)->symbol != NULL) {
                    emit("return", (yyvsp[-1].expression)->symbol->name); // if the current symbol exists emit the current symbol name at return, otherwise empty
                } else {
                    emit("return", "");
                }
            }
#line 4043 "y.tab.c"
    break;

  case 204:
#line 1840 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("translation_unit ==> external_declaration"); 
            }
#line 4051 "y.tab.c"
    break;

  case 205:
#line 1844 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("translation_unit ==> translation_unit external_declaration"); 
            }
#line 4059 "y.tab.c"
    break;

  case 206:
#line 1851 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("external_declaration ==> function_definition"); 
            }
#line 4067 "y.tab.c"
    break;

  case 207:
#line 1855 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("external_declaration ==> declaration"); 
            }
#line 4075 "y.tab.c"
    break;

  case 208:
#line 1868 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("function_definition ==> declaration_specifiers declarator declaration_list_opt compound_statement"); 
                tableCount = 0;
                emit("labelend", (yyvsp[-5].symbol)->name);
                if((yyvsp[-5].symbol)->type->type != SymbolType::VOID) {
                    // set type of return value
                    currentTable->lookup("return")->update((yyvsp[-5].symbol)->type);
                }
                changeTable(globalTable);
            }
#line 4090 "y.tab.c"
    break;

  case 209:
#line 1882 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("declaration_list_opt ==> declaration_list"); 
            }
#line 4098 "y.tab.c"
    break;

  case 210:
#line 1886 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("declaration_list_opt ==> epsilon"); 
            }
#line 4106 "y.tab.c"
    break;

  case 211:
#line 1893 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("declaration_list ==> declaration"); 
            }
#line 4114 "y.tab.c"
    break;

  case 212:
#line 1897 "ass6_21CS10042_21CS10040.y"
            { 
                yyinfo("declaration_list ==> declaration_list declaration"); 
            }
#line 4122 "y.tab.c"
    break;


#line 4126 "y.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 1902 "ass6_21CS10042_21CS10040.y"


void yyinfo(string s) {
    #ifdef _DEBUG_H
        printf("INFO - [Line %d] : %s\n", currentLine, s.c_str());
    #endif
}

void yyerror(string s) {
    printf("ERROR - [Line %d] : %s\n", currentLine, s.c_str());
}
