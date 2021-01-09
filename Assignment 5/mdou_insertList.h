/* CS2211b 2020 */
/* Assignment 05 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 28/Mar/2020 */

//#include<stdlib.h>
//#include"mdou_linkedlist.h"

bool insertNode(linkedList* list, void* item){
	listNode* newPtr;					// create pointer to new node
	if(!(newPtr=(listNode*)malloc(sizeof(listNode))))	// if node was not created
		return false;					// then return false and exit to main
	
	newPtr->data = item;		// data within node newPtr points to data at variable item
	newPtr->next = list->head;	// newPtr replaces node at head to become new head node

	if(list->count == 0)		// if list is empty
		list->rear = newPtr;	// newPtr becomes new rear node

	list->count++;			// count is incremented as a new node is inserted
	newPtr->index = list->count;	// index is set to position at count
	list->head = newPtr;		// newPtr is set as new head node

	return true;
}
