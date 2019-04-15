%{
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
%}

%union {
	/* The return values involved */
	int num_value;
	float f_value;
	char op_val;
	int* num_array;
	char* str_ptr;
}

%token SEMICOLON COMMA EQUAL GREATER GREATEREQ LESSER LESSEREQ OPENPARANTHESIS
%token CLOSEPARANTHESIS GET FROM AND OR INSERT RECORD INTO UPDATE IN SET TO
%token DELETE EMP DEPT eid ename eage eaddress salary deptno dnum dname
%token dlocation WHERE IDENTIFIER FIELDLIST
%token <str_ptr> STRING INTEGER FLOAT

%type <num_value> query get_type insert_type update_type delete_type filetype OPERATOR FIELD
%type <num_array> condition_list condition fields
%type <str_ptr> VALUE record_list

%%

query: get_type { $$ = $1; }
	| insert_type { $$ = $1; }
	| update_type { $$ = $1; }
	| delete_type { $$ = $1; }
	;

insert_type: INSERT RECORD OPENPARANTHESIS record_list CLOSEPARANTHESIS INTO filetype {
			$$ = insert_function($7,$4);
		}
	;

delete_type: DELETE RECORD FROM filetype WHERE condition_list {
			$$ = delete_function($4,$6);
		}
	;

update_type:	UPDATE RECORD IN filetype SET FIELD TO VALUE WHERE condition_list {
			$$ = update_function($6,$8,$4,$10);
		}
	;

get_type: GET fields FROM filetype WHERE condition_list {
			$$ = get_function($2,$4,$6);
		}
	;

condition_list: condition_list AND condition {
			assert(($1)[0] == ($3)[0]);
			/* assert(($1)[0] == (sizeof($1)-1)); */
			int len = ($1)[0];
			int* arr = (int*)malloc(sizeof(int)*(len+1));
			arr[0] = len;
			int i;
			for(i=1;i<len+1;i++) {
				arr[i] = ($1)[i] & ($3)[i];
			}
			free($1);
			free($3);
			$$ = arr;
		}
	| condition_list OR condition {
		assert(($1)[0] == ($3)[0]);
		assert(($1)[0] == (sizeof($1)-1));
		int len = ($1)[0];
		int* arr = (int*)malloc(sizeof(int)*(len+1));
		arr[0] = len;
		int i;
		for(i=1;i<len+1;i++) {
			arr[i] = ($1)[i] | ($3)[i];
		}
		free($1);
		free($3);
		$$ = arr;
	 }
	| condition 	{ $$ = $1; }
	;

VALUE: STRING {$$ = $1;}
	| INTEGER {$$ = $1;}
	| FLOAT {$$ = $1;}

record_list: STRING COMMA record_list   {
			char *result = malloc(strlen($1) + strlen($3) + 4);
	    strcpy(result, $1);
			strcat(result, " ");
	    strcat(result, $3);
			/* printf("%s",$3); */
			/* result[strlen(result)-1] = '\0'; */
			$$ = result;
		}
	| INTEGER COMMA record_list{
			char *result = malloc(strlen($1) + strlen($3) + 4);
	    strcpy(result, $1);
			strcat(result, " ");
	    strcat(result, $3);
			/* printf("%s",$3); */
			/* result[strlen(result)-1] = '\0'; */
			$$ = result;
		}
	|	FLOAT COMMA record_list  {
			char *result = malloc(strlen($1) + strlen($3) + 4);
	    strcpy(result, $1);
			strcat(result, " ");
	    strcat(result, $3);
			/* printf("%s",$3); */
			/* result[strlen(result)-1] = '\0'; */
			$$ = result;
		}
	| STRING { $$ = $1; }
	| INTEGER { $$ = $1; }
	| FLOAT { $$ = $1; }
	;

condition: FIELD OPERATOR VALUE {
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

				if($1 == 1 ) {
					int eid_var;
					fscanf(fp_used, "%d %*s %*d %*s %*d %*d\n",&eid_var);
					if( $2 == 1 ) {
						if(eid_var == atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 2) {
						if(eid_var < atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 3) {
						if(eid_var > atoi($3)) {
							flag = 1;
						}
					}
				}

				else if($1 == 2 ) {
					char ename_var[50];
					memset(&ename_var[0], 0, sizeof(ename_var));
					fscanf(fp_used, "%*d %s %*d %*s %*d %*d\n",ename_var);
					if( $2 == 1 ) {
						if(strcmp(ename_var,$3) ==0 ) {
							flag = 1;
						}
					}
				}

				else if($1 == 3 ) {
					int eage_var;
					fscanf(fp_used, "%*d %*s %d %*s %*d %*d\n",&eage_var);
					if( $2 == 1 ) {
						if(eage_var == atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 2) {
						if(eage_var < atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 3) {
						if(eage_var > atoi($3)) {
							flag = 1;
						}
					}
				}

				else if($1 == 4 ) {
					char eaddress_var[50];
					memset(&eaddress_var[0], 0, sizeof(eaddress_var));
					fscanf(fp_used, "%*d %*s %*d %s %*d %*d\n",eaddress_var);
					if( $2 == 1 ) {
						if(strcmp(eaddress_var,$3) ==0 ) {
							flag = 1;
						}
					}
				}

				else if($1 == 5 ) {
					int salary_var;
					fscanf(fp_used, "%*d %*s %*d %*s %d %*d\n",&salary_var);
					if( $2 == 1 ) {
						if(salary_var == atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 2) {
						if(salary_var < atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 3) {
						if(salary_var > atoi($3)) {
							flag = 1;
						}
					}
				}

				else if($1 == 6 ) {
					int deptno_var;
					fscanf(fp_used, "%*d %*s %*d %*s %*d %d\n",&deptno_var	);
					if( $2 == 1 ) {
						if(deptno_var == atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 2) {
						if(deptno_var < atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 3) {
						if(deptno_var > atoi($3)) {
							flag = 1;
						}
					}
				}

				else if($1 == 7 ) {
					int dnum_var;
					fscanf(fp_used, "%d %*s %*s\n",&dnum_var);
					if( $2 == 1 ) {
						if(dnum_var == atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 2) {
						if(dnum_var < atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 3) {
						if(dnum_var > atoi($3)) {
							flag = 1;
						}
					}
				}

				else if($1 == 8 ) {
					char dname_var[50];
					memset(&dname_var[0], 0, sizeof(dname_var));
					fscanf(fp_used, "%*d %s %*s\n",dname_var);
					if( $2 == 1 ) {
						if(strcmp(dname_var,$3) ==0 ) {
							flag = 1;
						}
					}
				}

				else if($1 == 9 ) {
					char dlocation_var[50];
					memset(&dlocation_var[0], 0, sizeof(dlocation_var));
					fscanf(fp_used, "%*d %*s %s\n",dlocation_var);
					if( $2 == 1 ) {
						if(strcmp(dlocation_var,$3) ==0 ) {
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
			$$ = arr;
		}
	;

fields: fields COMMA FIELD {
	/* Different from condtion array */
		int len = sizeof($1);
		int* arr = (int*) malloc((len+1)*sizeof(int));
		int i;
		arr[0] = $3;
		for(i=0;i<len;i++) {
			arr[i+1] = ($1)[i];
		}
		free($1);
		$$ = arr;
	}
 | FIELD {
		 	int* arr = (int*) malloc(1*sizeof(int));
			arr[0] = $1;
			$$ = arr;
	 }
 ;

FIELD: eid { $$ = 1; }
 | ename{ $$ = 2; }
 | eage{ $$ = 3; }
 | eaddress{ $$ = 4; }
 | salary{ $$ = 5; }
 | deptno{ $$ = 6; }
 | dnum { $$ = 7; }
 | dname{ $$ = 8; }
 | dlocation{ $$ = 9; }
 ;

OPERATOR: EQUAL { $$ = 1; }
	| LESSER { $$ = 2; }
	| GREATER { $$ = 3; }
	| GREATEREQ { $$ = 4; }
	| LESSEREQ { $$ = 5; }

filetype: EMP {
		int* z = &f;
		*z = 1;
		$$ = 1;
	}
	| DEPT {
		int* z = &f;
		*z = -1;
		$$ = -1;
	}
	;

%%
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
