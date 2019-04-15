#!/bin/bash
yacc -g -d -v -t parser.y
flex -d -v lexer.l
gcc -g y.tab.c lex.yy.c -ly -ll
# yacc parser.y
# flex lexer.l
# gcc -w y.tab.c lex.yy.c -ly -ll
