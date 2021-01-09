/* CS2211b 2020 */
/* Assignment 05 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 28/Mar/2020 */

#include<stdio.h>		// Imports neccesary functions for c program
#include<stdlib.h>		// Implements dynamic memory allocation
#include<time.h>		// Implements random number generation
#include<stdbool.h>
#include"mdou_headers.h"	// Implements all header files required to implement linked list structure 

int main(){
	int* data;			// initializes data pointer
	linkedList* linList;		// initializes list pointer
	int nodeCount, realCount;	// initializes user-specified node counter and real node index
	listNode* currNode;		// initializes current node
	int subNum = 211;		// initializes deletion value with a non-zero value
	bool del;			// initializes boolean to detect for successful deletion operation

	linList = createList(); // creates list object and store address in linList
	
	printf("Number of Nodes Required: ");	// queries user input
	scanf("%d",&nodeCount);			// number of nodes is defined by the user

	srand(time(NULL));	// sets counter for random number generation

	printf("\nUnsorted Linked List with %d nodes:\n\n",nodeCount);
	for(int i = 0; i<nodeCount; i++){
		data = (int*)malloc(sizeof(int));	// dymanically allocates room for data stored within node object
		*data = rand()%100+1;			// stores randomly generated variable within node of linked list
		insertNode(linList, data);		// calls insertList function to insert node within list
	}
	
	currNode = linList->head;							// begins print loop at list head
	while(currNode!=NULL){
		realCount = nodeCount-(currNode->index)+1;				// sets true value of index to capacity minus node index
		printf("Node: %d: Value: %d\n",realCount,*((int*)currNode->data));	// prints the index and datavalue of each node
		currNode = currNode->next;						// cycles through list
	}
	
	printf("\nSorted Linked List with %d nodes:\n\n",nodeCount);
	sortList(linList);								// performs sort operation on list
	currNode = linList->head;							// begins print loop at list head
	while(currNode!=NULL){								// repeat until node is rear
		realCount = nodeCount - (currNode->index)+1;				// sets true value of index to capacity minus node index
		printf("Node: %d: Value: %d\n",realCount,*((int*)currNode->data));	// print index and datavalue of each node
		currNode = currNode->next;						// cycles through list
	}
	
	while(subNum!=0){							// while in run
		printf("\nEnter a Value to be Deleted: ");			
		scanf("%d",&subNum);						// scan for value to be deleted
		printf("\n\nSearching for Node with Value of %d\n",subNum);
		del = deleteNode(linList,subNum);				// perform deletion operation on value
		if(del)								// if deletion passes
			printf("Node Found, deletion is imminent\n\n");		// alert user of success
		else								// if deletion fails
			printf("No Such Node Exists\n\n");			// notify user of failure
		
		currNode = linList->head;							// begin deletion loop at list head
		while(currNode!=NULL){								// repeat until all nodes traversed
			realCount = nodeCount-(currNode->index)+1;				// sets true value of index to capacity minus node index
			printf("Node: %d: Value: %d\n",realCount,*((int*)currNode->data));
			currNode = currNode->next;						// cycle through list
		}
	}

	/* inserts new nodes based on user-specification */
	printf("\nEnter Number of New Nodes: ");
	scanf("%d",&nodeCount);	
	for(int j = 0; j<nodeCount; j++){
		data = (int*)malloc(sizeof(int));
		*data = rand()%100+1;
		insertNode(linList, data);
	}
	/* sorts and prints new list */ 
	printf("\n\nSorted List After Adding %d Nodes:\n",nodeCount);
	sortList(linList);						
	currNode = linList->head;
	while(currNode!=NULL){
		realCount = nodeCount - (currNode->index)+1+(linList->count);		// accounts for new nodeCount value and generates true index
		printf("Node: %d: Value: %d\n",realCount,*((int*)currNode->data));
		currNode = currNode->next;
	}
	
	return 0;
}
