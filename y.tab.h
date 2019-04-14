/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
#line 13 "parser.y" /* yacc.c:1909  */

	/* The return values involved */
	int num_value;
	float f_value;
	char op_val;
	int* num_array;
	char* str_ptr;

#line 143 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
