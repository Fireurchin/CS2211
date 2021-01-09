/* CS2211b 2020 */
/* Assignment 04 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 16/Mar/20 */

#include<stdio.h>		// allows for program functionalities
#include<string.h>		// allows for implementation of string arrays
#include<stdlib.h>		// allows for dynamic memory allocation
#include"mdou_headers_P2.h"	// implements struct employed datatype

int main(){
	struct employed adam,*adamp;	// creates employed type structure adam to hold personal information to test

	adamp = (struct employed *)malloc( sizeof(struct employed));	// allocates memory for struct employed adam

	strcpy(adam.info.title.first,"Adam");		// sets first name of adam to Adam
	strcpy(adam.info.title.last,"Driver");		// sets last name of adam to Driver
	strcpy(adam.info.address,"1200 Western Road");	// sets address of adam to 1200 Western Road
	strcpy(adam.info.city,"Cloverfield Island");	// sets city of adam to Cloverfield Island
	strcpy(adam.info.province,"Nunavut");		// sets province of adam to Nunavut
	strcpy(adam.info.postalCode,"T3T1U5");		// sets postal code for adam
	strcpy(adam.info.phone,"4034206969");		// sets phone number for adam
	strcpy(adam.occupation,"Poop Scooper");		// sets adam's job
	adam.salary=25117.49;				// sets adam's monthy salary
	
	printf("%s\n",adam.info.phone);	// prints value of phone before print_person() function
	print_person(adam);		// calls print_person() onto the execution stack
	printf("%s\n",adam.info.phone);	// prints value of phone after print_person() is popped

	free(adamp);	// frees memory reserved for struct employed adam

	return 0;
}
