/* A Bison parser, made by GNU Bison 3.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_SCRIPTS_GENKSYMS_PARSE_TAB_H_INCLUDED
# define YY_YY_SCRIPTS_GENKSYMS_PARSE_TAB_H_INCLUDED
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
    ASM_KEYW = 258,
    ATTRIBUTE_KEYW = 259,
    AUTO_KEYW = 260,
    BOOL_KEYW = 261,
    BUILTIN_INT_KEYW = 262,
    CHAR_KEYW = 263,
    CONST_KEYW = 264,
    DOUBLE_KEYW = 265,
    ENUM_KEYW = 266,
    EXTERN_KEYW = 267,
    EXTENSION_KEYW = 268,
    FLOAT_KEYW = 269,
    INLINE_KEYW = 270,
    INT_KEYW = 271,
    LONG_KEYW = 272,
    REGISTER_KEYW = 273,
    RESTRICT_KEYW = 274,
    SHORT_KEYW = 275,
    SIGNED_KEYW = 276,
    STATIC_KEYW = 277,
    STATIC_ASSERT_KEYW = 278,
    STRUCT_KEYW = 279,
    TYPEDEF_KEYW = 280,
    UNION_KEYW = 281,
    UNSIGNED_KEYW = 282,
    VOID_KEYW = 283,
    VOLATILE_KEYW = 284,
    TYPEOF_KEYW = 285,
    VA_LIST_KEYW = 286,
    EXPORT_SYMBOL_KEYW = 287,
    ASM_PHRASE = 288,
    ATTRIBUTE_PHRASE = 289,
    TYPEOF_PHRASE = 290,
    BRACE_PHRASE = 291,
    BRACKET_PHRASE = 292,
    EXPRESSION_PHRASE = 293,
    STATIC_ASSERT_PHRASE = 294,
    CHAR = 295,
    DOTS = 296,
    IDENT = 297,
    INT = 298,
    REAL = 299,
    STRING = 300,
    TYPE = 301,
    OTHER = 302,
    FILENAME = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SCRIPTS_GENKSYMS_PARSE_TAB_H_INCLUDED  */
