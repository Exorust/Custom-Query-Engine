#!/bin/bash
yacc -d parser.y
flex -d lexer.l
gcc -w y.tab.c lex.yy.c -ly -ll
