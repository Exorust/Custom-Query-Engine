#!/bin/bash
yacc -g -d -v -t parser.y
flex -g -d -v lexer.l
gcc -g -w y.tab.c lex.yy.c -ly -ll
# yacc parser.y
# flex lexer.l
# gcc -w y.tab.c lex.yy.c -ly -ll
