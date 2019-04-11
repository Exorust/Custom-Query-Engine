%{
#include <stdio.h>
#include <string.h>
%}

%union {
	/* The return values involved */
	int num_value;
	char op_val;

}

%token

%%

query: get_type
	| insert_type
	| update_type
	| delete_type
	;

insert_type: INSERT RECORD record_list INTO FILETYPE {/*Call insert*/}
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

/* Each file EMP or DEPT has first line containing the number of entries */
void insert(char* file_name, char* record_list) {
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
		for(i=0;i<=file_size;i++) {
			fscanf(fp_old,"%s",&buffer);
			fprintf(fp_new,"%s",buffer)
			memset(&buffer[0], 0, strlen(buffer));
		}
		fprintf(fp_new,"%s\n",record_list);

		fclose(fp_new);
		fclose(fp_old);
		remove(file_name);
		rename("temp", file_name);
	}
	else {
		printf("Wrong file.")
	}

}

void 
