{%
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SUCCESS 1
#define FAILURE 0

FILE* fp_used = NULL;
enum file_used {EMP = 1, DEPT = 0};
%}

%union {
	/* The return values involved */
	int num_value;
	char op_val;
	int* num_array;

}

%token

%type <num_array> condition_list
%type <num_value> FIELD

%%

query: get_type { $$ = $1; }
	| insert_type { $$ = $1; }
	| update_type { $$ = $1; }
	| delete_type { $$ = $1; }
	;

insert_type: INSERT RECORD record_list INTO FILETYPE {
			FILE** fp = &fp_used;
			*fp = fopen($5,'r');
			$$ = insert_function($5,$3);
		}
	;

delete_type: DELETE RECORD FROM FILETYPE WHERE condition_list {
			/* First value of condition list is new size */
			FILE** fp = &fp_used;
			*fp = fopen($5,'r');
			$$ = delete_function($4,$6);
		}
	;

update_type:	UPDATE RECORD IN FILETYPE SET FIELD TO NEW_VALUE WHERE condition_list
	;

get_type: GET fields FROM FILETYPE WHERE condition_list {
			FILE** fp = &fp_used;
			*fp = fopen($5,'r');
			$$ = get_function($5,$3);
		}
	;

condition_list: condition_list AND condition {
			assert(($1)[0] == ($3)[0]);
			for()
		}
	| condition_list OR condition {

	 }
	| condition 	{ $$ = $1; }
	;

condition: FIELD OPERATOR VALUE {
			int size;
			fscanf(fp_used,"%d\n", &size);
			int* arr = (int*)malloc(int*(size+1));
			for(i=0;i<size;i++) {
				int flag=0;

				if($1 == 1 ) {
					int eid;
					fscanf(fp_used, "%d %*s %*d %*s %*d %*d",&eid);
					if( $2 == 1 ) {
						if(eid == atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 2) {
						if(eid < atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 3) {
						if(eid > atoi($3)) {
							flag = 1;
						}
					}
				}

				else if($1 == 2 ) {
					char ename[50];
					memset(&ename[0], 0, sizeof(ename));
					fscanf(fp_used, "%*d %s %*d %*s %*d %*d",&ename);
					if( $2 == 1 ) {
						if(strcmp(ename,$3) ==0 ) {
							flag = 1;
						}
					}
				}
				else {
					abort();
				}

				else if($1 == 3 ) {
					int eage;
					fscanf(fp_used, "%*d %*s %d %*s %*d %*d",&eage);
					if( $2 == 1 ) {
						if(eage == atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 2) {
						if(eage < atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 3) {
						if(eage > atoi($3)) {
							flag = 1;
						}
					}
				}

				else if($1 == 4 ) {
					char eaddress[50];
					memset(&eaddress[0], 0, sizeof(eaddress));
					fscanf(fp_used, "%*d %*s %*d %s %*d %*d",&eaddress);
					if( $2 == 1 ) {
						if(strcmp(eaddress,$3) ==0 ) {
							flag = 1;
						}
					}
				}
				else {
					abort();
				}

				else if($1 == 5 ) {
					int salary;
					fscanf(fp_used, "%*d %*s %*d %*s %d %*d",&salary);
					if( $2 == 1 ) {
						if(salary == atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 2) {
						if(salary < atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 3) {
						if(salary > atoi($3)) {
							flag = 1;
						}
					}
				}

				else if($1 == 6 ) {
					int deptno;
					fscanf(fp_used, "%*d %*s %*d %*s %*d %d",&deptno	);
					if( $2 == 1 ) {
						if(deptno == atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 2) {
						if(deptno < atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 3) {
						if(deptno > atoi($3)) {
							flag = 1;
						}
					}
				}

				else if($1 == 7 ) {
					int dnum;
					fscanf(fp_used, "%d %*s %*s",&dnum);
					if( $2 == 1 ) {
						if(dnum == atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 2) {
						if(dnum < atoi($3)) {
							flag = 1;
						}
					}
					else if($2 == 3) {
						if(dnum > atoi($3)) {
							flag = 1;
						}
					}
				}

				else if($1 == 8 ) {
					char dname[50];
					memset(&dname[0], 0, sizeof(dname));
					fscanf(fp_used, "%*d %s %*s",&dname);
					if( $2 == 1 ) {
						if(strcmp(dname,$3) ==0 ) {
							flag = 1;
						}
					}
				}
				else {
					abort();
				}

				else if($1 == 9 ) {
					char dlocation[50];
					memset(&dlocation[0], 0, sizeof(dlocation));
					fscanf(fp_used, "%*d %*s %s",&dlocation);
					if( $2 == 1 ) {
						if(strcmp(dlocation,$3) ==0 ) {
							flag = 1;
						}
					}
				}
				else {
					abort();
				}

				/* Set if condition satisfies */
				arr[i+1] = flag

			}
		}
	;

fields: fields COMMA FIELD {
		int len = sizeof($1);
		int* arr = (int*) malloc((len+1)*sizeof(int));
		int i;
		arr[0] = $3;
		for(i=0;i<len,i++) {
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
	| GREATER { $$ = 2; }
	| LESSER { $$ = 3; }
	| GREATEREQ { $$ = 4; }
	| LESSEREQ { $$ = 5; }

%%

/* TODO : Edit this to fit syntax*/
int get_function(char** field_arr,char* file_name, int* farray) {
	FILE* fp_old,fp_new;
	int file_size;
	int counter = 0;

	if(strcmp(file_name,"EMP.txt") == 0 || strcmp(file_name,"DEPT.txt") == 0 ) {
		FILE* fp_old = fopen(file_name,'r');
		/* FILE* fp_new = fopen("temp",'r'); */
		fscanf(fp_old,"%d\n",&file_size);
		/* fprintf(fp_new,"%d\n",farray[0]); */
		int i;
		char buffer[500];
		memset(&buffer[0], 0, sizeof(buffer));
		for(i=0;i<file_size;i++) {
			/* Cases that satisfy get */
			if(farray[i+1] == 1) {
				fscanf(fp_old,"%s",&buffer);
				/* Print the get vals */
				printf("%s",buffer);
				memset(&buffer[0], 0, strlen(buffer));
				counter++;
			}
			else {
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


void delete_function(char* file_name, int* farray) {
	FILE* fp_old,fp_new;
	int file_size;
	int counter = 0;

	if(strcmp(file_name,"EMP.txt") == 0 || strcmp(file_name,"DEPT.txt") == 0 ) {
		FILE* fp_old = fopen(file_name,'r');
		FILE* fp_new = fopen("temp",'r');
		fscanf(fp_old,"%d\n",&file_size);
		fprintf(fp_new,"%d\n",(file_size - farray[0]));
		int i;
		char buffer[500];
		memset(&buffer[0], 0, sizeof(buffer));
		for(i=0;i<file_size;i++) {
			if(farray[i+1] == 0) {
				fscanf(fp_old,"%s",&buffer);
				fprintf(fp_new,"%s",buffer);
				memset(&buffer[0], 0, strlen(buffer));
				counter++;
			}
			else {
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
void insert_function(char* file_name, char* record_list) {
	FILE* fp_old,fp_new;
	int file_size;

	if(strcmp(file_name,"EMP.txt") == 0 || strcmp(file_name,"DEPT.txt") == 0 ) {
		FILE* fp_old = fopen(file_name,'r');
		FILE* fp_new = fopen("temp",'r');
		fscanf(fp_old,"%d\n",&file_size);
		fprintf(fp_new,"%d\n",(file_size+1));
		int i;
		char buffer[500];
		memset(&buffer[0], 0, sizeof(buffer));
		for(i=0;i<file_size;i++) {
			fscanf(fp_old,"%s",&buffer);
			fprintf(fp_new,"%s",buffer);
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

int main() {
	while(!feof(yyin)){
		yyparse();
	}
}
