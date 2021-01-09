/* CS2211b 2020 */
/* Assignment 05 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 28/Mar/2020 */

//#include<stdlib.h>
//#include"mdou_linkedlist.h"

linkedList* createList(){
	linkedList* newList;					// creates reference pointer to linked list
	newList = (linkedList*)malloc(sizeof(linkedList));	// allocates memory for new linked list object

	if(newList){			// if list has been created
		newList -> head = NULL;	// head is set to null
		newList -> rear = NULL; // rear is set to null
		newList->count = 0; 	// there are no items in list
	}

	return newList;	// returns created list
}
