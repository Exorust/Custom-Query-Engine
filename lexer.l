%{
	#include<stdio.h>
	#include "y.tab.h"
%}
LETTER [a-zA-Z]
DIGIT [0-9]
PDIGIT[1-9]
UNDERSCORE _
DOLLARSIGN "$"
SEMICOLON ";"
COMMA ","
EQUAL "="
GREATER ">"
LESSER "<"
LESSEREQ "<="
GREATEREQ ">="
OPENPARANTHESIS "("
CLOSEPARANTHESIS ")"
INTEGER {PDIGIT}{DIGIT}*
FLOAT {INTEGER}"."{DIGIT}*
STRING \"[^,]*\"
GET (?i:get)
FROM (?i:from)
AND (?i:and)
OR (?i:or)
INSERT (?i:insert)
RECORD (?i:record)
INTO (?i:into)
UPDATE (?i:update)
IN (?i:in)
SET (?i:set)
TO (?i:to)
WHERE (?i:where)
DELETE (?i:delete)
EMP (?i:emp)
DEPT (?:dept)
eid  (?i:eid)
ename (?i:ename)
eage (?i:eage)
eaddress (?i:eaddress)
salary (?i:salary)
deptno (?i:deptno)
dnum  (?i:dnum)
dname (?i:dname)
dlocation (?i:dlocation)
IDENTIFIER ({LETTER}|{UNDERSCORE})({LETTER}|{DIGIT}|{UNDERSCORE}|{DOLLARSIGN})*
%%
(?i:quit) {yyterminate();
}
{SEMICOLON} {return SEMICOLON;}
{COMMA} {return COMMA;}
{EQUAL} {return EQUAL;}
{GREATER} {return GREATER;}
{GREATEREQ} {return GREATEREQ;}
{LESSER} {return LESSER;}
{LESSEREQ} {return LESSEREQ;}
{OPENPARANTHESIS} {return OPENPARANTHESIS;}
{CLOSEPARANTHESIS} {return CLOSEPARANTHESIS;}
{INTEGER} {
	char* pass = (char*)malloc(50*sizeof(char));
	strcpy(pass,yytext);
	yylval.str_ptr = pass;
	return INTEGER;}
{FLOAT} {
	char* pass = (char*)malloc(50*sizeof(char));
	strcpy(pass,yytext);
	yylval.str_ptr = pass;
	return FLOAT;}
{STRING} {
	char* pass = (char*)malloc(50*sizeof(char));
	int i;
	for(i=1;i<strlen(yytext)-1;i++ ) {
		pass[i-1] = yytext[i];
	}
	/* printf("\n\n%s\n\n",pass); */
	yylval.str_ptr = pass;
	return STRING;}
{GET} {return GET;}
{FROM} {return FROM;}
{AND} {return AND;}
{OR} {return OR;}
{INSERT} {return INSERT;}
{RECORD} {return RECORD;}
{INTO} {return INTO;}
{UPDATE} {return UPDATE;}
{IN} {return IN;}
{SET} {return SET;}
{TO} {return TO;}
{DELETE} {return DELETE;}
{EMP} { return EMP;}
{DEPT} { return DEPT;}
{eid} { return  eid;}
{ename} { return  ename;}
{eage} { return  eage;}
{eaddress} { return  eaddress;}
{salary} { return  salary;}
{deptno} { return  deptno;}
{dnum} { return  dnum;}
{dname} { return  dname;}
{dlocation} { return  dlocation;}
{WHERE} {return WHERE;}
{IDENTIFIER} {return IDENTIFIER;}
[ \t\n] ;

.	return yytext[0];


%%
/* int main(){
	yylex();
	return 0;
} */
