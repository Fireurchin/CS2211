/* CS2211b 2020 */
/* Assignment 04 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 13/Mar/20 */

#ifndef MDOU_HEADERS_P2_H_INCLUDED
	#define MDOU_HEADERS_P2_H_INLCUDED

#include<stdio.h>	// allows for program functionalities
#include<string.h>	// allows for string array implementation

struct person{
	char first[32];	// creates parameter to hold first names (array of char)  within the person structure
	char last[32];	// creates parameter to hold last names (array of char)  within the person structure
};

struct personalInfo{
	struct person title;	// implements structure previously defined as name and creates variable title to store it
	char address[64];	// creates parameter to hold address
	char city[86];		// creates parameter to hold city name
	char province[32];	// creates parameter to hold province name
	char postalCode[8];	// creates parameter to hold Canadian postal code value (adjusting for space in between and null termiantor)
	char phone[11];		// creates int parameter to hold phone number
};	

struct employed{
	struct personalInfo info;	// implements structure previously defined as personalInfo and creates variable info to store it
	char occupation[32];		// creates parameter to hold occupation title
	double salary;			// creates parameter to hold earnings and income
};

#endif // MDOU_HEADERS_P2_INCLUDED
