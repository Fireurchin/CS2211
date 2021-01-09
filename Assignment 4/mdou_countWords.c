/* CS2211b 2020 */
/* Assignment 04 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 16/Mar/20 */

#include<stdio.h>	// implements program functionalities
#include<string.h>	// allows implementation of string array datatype

#include"mdou_headers_P1.h"	// header file, defines and explicitly declares functions

int countWords(FILE* fogFile){
	char currChar, prevChar;	// initializes char to hold current variable and prev variable for word/non-word discernment
	int count = 0;			// initializes counter variable, updates for each distinct word

	for(currChar=getc(fogFile);currChar!=EOF;currChar=getc(fogFile)){	// loops through each character in the file
		if((currChar==' ')||(currChar=='\n')||(currChar=='\r')){	// if the character is either a space or an newline
			if((prevChar!=' ')&&(prevChar!='\n'))	// and is preceded by any character that is not a space or newline
				count++;					// increment counter by 1
		}
		prevChar = currChar;	// increment prevChar to store the succeeding character
	}

	printf("Total Number of Words: %d\n",count);	// prints the total number of words in the file

	return 0;
}
