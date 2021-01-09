/* CS2211b 2020 */
/* Assignment 04 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 16/Mar/20 */

#include<stdio.h>	// imports neccessary functions to allow program to run as expected
#include<string.h>	// supports the usage of strings within the program
#include<stdlib.h>	// supports the dynamic allocation of memory for variables and arrays
#include"mdou_headers_P1.h"	// header file, defines and explicitly declares functions

int main(){
	char *str2 = (char *)malloc(sizeof(str2));	// creates a scan object that allocates enough memory to store the user-inputted file
	FILE *fpt;	// creates a file pointer to interact with said file (In this case, we will be performing a read operation)	
	int chr, word, line; // local variables

	printf("Enter Filename: ");
	scanf("%s", str2);	// asks for user input and scans for file name
	fpt = fopen(str2,"r");	// opens file instructed by user input

	if (fpt == NULL){	// test if file exists
		printf("Invalid Filename\n");	// notifies user that the file does not exist
		return 0;	// breaks and pops function off execution stack
	}

	chr = countCharacters(fpt);
	fseek(fpt,0,SEEK_SET);

	word = countWords(fpt);
	fseek(fpt,0,SEEK_SET);

	line = countLines(fpt);

	fclose(fpt);	// closes file once program has finished

	free(str2);	// frees memory allocated for str2
	
	return 0;
}
