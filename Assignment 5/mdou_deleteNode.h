/* CS2211b 2020 */
/* Assignment 05 */
/* Mingpei Dou */
/* 250156543 */
/* mdou */
/* 31/Mar/2020 */

bool deleteNode(linkedList* list, int value){
	listNode* testNode, *prev;	// initializes current node pointer and previous node pointer
	bool inList = false;		// deletion function has not passed

	if(list->count == 0)	// if list is empty		
		return inList;	// node does not exist, deletion has failed
	
	testNode = list->head;	// point current to head
	
	if(list->count == 1){				// if list only contains one node
		if(*((int*)testNode->data) == value){	// if node is in list
			list->head = NULL;		// head points to null
			list->rear = NULL;		// rear points to null
			list->count--;			// count decreases
			free(testNode);			// removed node is freed from memory
			return true;			// delection function passed, pop back to main
		}
	}
	else{
		while((testNode!=NULL)&&(!inList)){			// while curr is not end of list and deletion function has not passed
			if (*((int*)testNode->data) == value){		// if node is found
				if(testNode == list->head){		// if node is pointed to by head
					list->head = testNode->next;	// head points to next node
					free(testNode);			// curr node is removed from memory
					inList = true;			// deletion has passed
				}
				else{
					if(testNode == list->rear){	// else if node is at rear
						list->rear = prev;	// rear points to previous node
						prev->next = NULL;	// next of previous points to nothing
						free(testNode);		// curr node is removed from memory
						inList = true;		// deletion has passed
					}
					else{					// else if node is neither at the head nor rear
						prev->next = testNode->next;	// previous node points to next node
						free(testNode);			// current node is freed from memory
						inList = true;			// deletion has passed
					}
					
				}
				list->count--;	// count decreases by one
			}
			if(!inList){				// if deletion not yet passed
				prev = testNode;		// previous increments forward by one
				testNode = testNode->next;	// curr increments forward by one
			}
		}
	}
	return inList;	// pop to main
}
