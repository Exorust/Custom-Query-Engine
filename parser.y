%{
#include <string.h>
%}


%%
statement_list:	statement '\n'
	|	statement_list statement '\n'
	;

query: get_type
	| insert_type
	| update_type
	| delete_type
	;

insert_type: INSERT RECORD record_list INTO FILETYPE {FILE* fp = fopen($5,'a'); fprintf("%s\n",$3);fclose(fp);}
	;

delete_type: DELETE RECORD FROM FILETYPE WHERE condition_list
	;

update_type:	UPDATE RECORD IN FILETYPE SET FIELD TO NEW_VALUE WHERE condition_list
	;

get_type: GET FIELDS FROM FILETYPE WHERE condition_list
	;

condition_list: condition_list AND condition
	| condition_list OR condition
	| condition
	;

condition: FIELD OPERATOR VALUE
	;



%%
/* look up a symbol table entry, add if not present */
struct symtab *
symlook(s)
char *s;
{
	char *p;
	struct symtab *sp;

	for(sp = symtab; sp < &symtab[NSYMS]; sp++) {
		/* is it already here? */
		if(sp->name && !strcmp(sp->name, s))
			return sp;

		/* is it free */
		if(!sp->name) {
			sp->name = strdup(s);
			return sp;
		}
		/* otherwise continue to next */
	}
	yyerror("Too many symbols");
	exit(1);	/* cannot continue */
} /* symlook */
