/* CS2211b */
/* Assignment 05 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 29/Mar/2020 */

bool sortList(linkedList* list){	// function to sort any given linked list by numerical magnitude
	listNode* curr, *next1;		// initializes next and current pointers for sort function	
	bool unordered = true;		// used to indicate the success of each swap iteration and whether the list has been sorted to its most ordered configeration
	void* temp;
	int tempestusScion;

	if((list->head == NULL)||(list->head->next == NULL))	// if list is empty or contains only one node
		return true;					// return true and pop to main

	while(unordered){		// while list has not been sorted to the most ordered configuration
		unordered = false;	// list is ordered if no swap operation is needed
		curr = list->head;	// curr points to first node
		next1 = curr->next;	// next points to second node

		while(next1!=NULL){// repeat until node does not point to rear
			if(*((int*)(curr->data)) > *((int*)(curr->next->data))){	// if data in curr is greater than data in next	
				temp = curr->data;		// data of curr is stored in temp
				curr->data = next1->data;	// data of next is stored in curr
				next1->data = temp;		// data of curr is stored in next
				
				tempestusScion = curr->index;	// index of curr is stored in tempestusScion
				curr->index = next1->index;	// index of next is stored in curr
				next1->index = tempestusScion;	// index of curr is stored in next

				unordered=true;			// swap operation was neccessary, list remains unordered
			}
			curr = next1;		
			next1 = next1->next;	// cycles loop
		}
	}
	return true;
}
