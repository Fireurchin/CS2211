/* CS2211b 2020 */
/* Assignment 04 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 16/Mar/20 */

#include<stdio.h>	// imports functionalities for program
#include<string.h>	// implements string datatype

#include"mdou_headers_P1.h"	// header file, defines and explicitly declares functions

int countLines(FILE *fogFile){
	char currLine[256];	// initializes string storing to the current line for line
	int count = 0;		// initializes counter variable, updates for each non-blank line

	while(fgets(currLine,sizeof(currLine),fogFile)){	// loops through each line in the file
		if(currLine[0]!='\r')				// if line does not begin with a carriage return (/r/n) (is not a blank line)
			count++;				// increment counter variable by 1
	}

	printf("Total Number of Lines: %d\n",count);	// print total non-blank line count
	return 0;
}
