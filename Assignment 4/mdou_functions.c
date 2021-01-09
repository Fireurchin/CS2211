/*CS2211b 2020 */
/* Assignment 04 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 13/Mar/20 */

#include<stdio.h>		// allows for program functionalities
#include<stdlib.h>		// allows for dynamic memory allocation
#include<string.h>		// allows for string arrays
#include"mdou_headers_P2.h"	// implements struct employed datatype

int print_person(struct employed subject){
	strcpy(subject.info.phone,"5555551234");	// changes the value stored in phone before the printing stage of the function
	printf("Name: %s %s\n",subject.info.title.first,subject.info.title.last); // returns the first and last name of the subject
	printf("Address: %s, %s, %s	%s\n",subject.info.address,subject.info.city,subject.info.province,subject.info.postalCode);	// returns address and postal code of the subject
	printf("Phone Number: %s\n",subject.info.phone);	// returns 10 digit phone number of subject
	printf("Employment: %s\nIncome: %f\n",subject.occupation,subject.salary);	// returns occupation and earnings of subject

	return 0;
}
