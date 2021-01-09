/* CS2211b 2020 */
/* Assignment 03 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 07/Feb/2020 */

#include <stdio.h>
/* #include <string.h> might be useful later on */

int main(){
	int i, j, temp, next, smallest, count, sum; // local variables
	int array[] = {23,43,65,23,12,7,34,76,28,64,4,51,10,2,73}; // creates array of values to be tested
	size_t bytes = sizeof(array); // determines byte size
	size_t capacity = bytes/sizeof(array[0]); // determines length from byte size and size of individual byte
	int reverseArray[capacity]; // initializes reverse array with psuedo-dynamic capacity (capacity is set to equal original array)
	int swapArray[capacity]; // initializes array for project 6
	int orderedArray[capacity]; // initializes array of ordered elements
	printf("Size of array: %d bytes\n",(int)bytes); // returns byte size
	printf("Length of array: %d elements\n",(int)capacity); // returns length
	printf("\n"); // double space
	
	printf("PROJECT 1:\nThe Values Stored in the Array are:\n");
	for(i = 0;i<capacity;i++) // basic loop to insert all elements in array into a
		printf("%d ",array[i]); // prints array elements on one line
	
	printf("\n\nPROJECT 2:\nThe Reverse Values are:\n");
	for(i=capacity-1;i>-1;i--) // reverse loop
		printf("%d ",array[i]); // prints in reverse

	printf("\n\nPROJECT 3:\nThe Smallest Value is:\n");
	smallest = array[0]; // initializes smallest to first value
	for(i=0;i<capacity;i++){ // searches for smallest value
		int curr = array[i];
		if(curr<smallest)
			smallest = curr; // sets value after testing for smallest
	}
	count = 0;
	for(i=0;i<capacity;i++){
		count++; // finds index by tracing array and incrementing
		if(array[i] == smallest)
			break; // stops incrementation when smallest is reached
	}
	printf("%d and is found at the %dth position from the left\n\n",smallest,count);

	printf("PROJECT 4:\nThe Sum of the Array is:\n%d ",array[0]);
	sum = array[0]; // base case for recursive sum
	for(i=1;i<capacity;i++){
		printf("+ %d ",array[i]);
		sum = sum + array[i]; // recursive case for sum
	}
	printf("Equals: %d\n\n",sum);

	printf("PROJECT 5:\nCopy the Original Array into a New Reversed Array:\nOrginal Array:\n");
	for(i=0;i<capacity;i++)
		printf("%d ",array[i]); // prints original array
	printf("\nNew (Reversed) Array:\n");
	for(i=0;i<capacity;i++){
		reverseArray[i] = array[capacity-1-i]; // fills array with elements in reverse order
		printf("%d ",reverseArray[i]); // returns elements in reversed array
	}

	printf("\n\nPROJECT 6:\nSwitch the First and Last Values of the Array:\nOriginal Array:\n");
	for(i=0;i<capacity;i++)
		printf("%d ",array[i]);
	printf("\nChanged Array:\n");
	swapArray[0] = array[capacity-1]; // swaps first element with last
	swapArray[capacity-1] = array[0]; // swaps last element with first
	printf("%d ",swapArray[0]); // returns first element in array
	for(i=1;i<capacity-1;i++){
		swapArray[i] = array[i]; // copies middle of array to swapArray
		printf("%d ",array[i]); // returns middle
	}
	printf("%d ",swapArray[capacity-1]); // returns last
	
	printf("\n\nPROJECT 7:\nSort the Array in Ascending Order:\nOriginal Array:\n");
	for(i=0;i<capacity;i++)
		printf("%d ",array[i]);
	printf("\nChanged Array:\n");
	for(i=0;i<capacity;i++)
		orderedArray[i] = array[i]; // duplicates array into orderedArray
	for(i=0;i<capacity;i++){ // performs in-place selection sort on orderedArray
		temp = orderedArray[i]; // temp is assigned the value at index in-question to be compared
		for(j=i+1;j<capacity;j++){ // shifts following array elements down and organizes them
			next = orderedArray[j]; // next is assigned the value at successive index of temp
			if(next < temp){ // compare next and temp, if true:
				orderedArray[i] = next; 
				orderedArray[j] = temp; // array at index is swaped with array at next index to match order
				temp = next; // value of next becomes value to be compared
			}
		}

	}
	for(i=0;i<capacity;i++)
		printf("%d ",orderedArray[i]);
	printf("\n");

	return 0;
}
