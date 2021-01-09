/* CS2211b 2020 */
/* Assignment 05 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 28/Mar/2020 */

// List ADT definitions
typedef struct node{		// defines structural datatype node
	void* data;		// creates void pointer to point at unique data within a node
	struct node* next;	// creates void pointer to point at next node within a list sequence
	int index;		// sets the index value of each node as they were at insert
}listNode;			// initializes variable of type node to be used in the definition of future variables

typedef struct{
	int count;		// initializes counter to represent number of nodes within list
	listNode* head;		// initializes pointer to head node
	listNode* rear;		// initializes pointer to rear node
}linkedList;			// initializes varible of type linkedList to create linked lists
