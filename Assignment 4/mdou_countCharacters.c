/* CS2211b 2020 */
/* Assignment 04 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 16/Mar/20 */

#include<stdio.h>	// imports functionalities for program
#include<string.h>	// allows access to string datatype

#include"mdou_headers_P1.h"	// header file, defines and explicitly declares functions

int countCharacters(FILE *fogFile){
	char currChar;		// variable to scan for current char in file
	int count = 0;		// counter variable, updates when character is distinct

	for(currChar=getc(fogFile);currChar!=EOF;currChar=getc(fogFile)){	// counts each valid character in the specified file
		if((currChar!='\n')&&(currChar!=' ')&&(currChar!='\r'))		// except when character is a new line, space or carriage return
			count++;						// increment total counter by 1
	}

	printf("Total Number of Characters: %d\n",count);	// print the total number of characters within the file

	return 0;

}
