%{
	#include<stdio.h>
	#include"y.tab.h"
%}
LETTER [a-zA-Z]
DIGIT [0-9]
PDIGIT[1-9]
UNDERSCORE _
DOLLARSIGN "$"
SEMICOLON ";"
EQUAL "="
OPENPARANTHESIS "("
CLOSEPARANTHESIS ")"
INTEGER {PDIGIT}{DIGIT}*
FLOAT {INTEGER}"."{DIGIT}*
STRING \".*\"
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
IDENTIFIER ({LETTER}|{UNDERSCORE})({LETTER}|{DIGIT}|{UNDERSCORE}|{DOLLARSIGN})*
FIELDLIST {IDENTIFIER}(","{IDENTIFIER})*
%%
(?i:quit) {yyterminate();
}
{SEMICOLON} {return SEMICOLON;}
{EQUAL} {return EQUAL;}
{OPENPARANTHESIS} {return OPENPARANTHESIS;}
{CLOSEPARANTHESIS} {return CLOSEPARANTHESIS;}
{INTEGER} {return INTEGER;}
{FLOAT} {return FLOAT;}
{STRING} {return STRING;}
{GET} {return GET;
}
{FROM} {return FROM
}
{AND} {return AND;}
{OR} {return OR;}
{INSERT} {return INSERT}
{RECORD} {return RECORD;}
{INTO} {return INTO;}
{UPDATE} {return UPDATE}
{IN} {return IN;}
{SET} {return SET;}
{TO} {return TO;}
{DELETE} {return DELETE;}
{WHERE} {return WHERE;
}
{IDENTIFIER} {return IDENTIFIER;
}
{FIELDLIST} {return FIELDLIST;
}

.	return yytext[0];


%%
int main(){
	yylex();
	return 0;
}
