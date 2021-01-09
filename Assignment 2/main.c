/* CS2211b 2020 */
/* Assignmed 03 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 07/Feb/2020 */

#include <stdio.h>
#include <string.h>

int main(){
	int i, smallest, count, sum; // instance variables
	int array[] = {23,43,65,23,12,7,34,76,28,64};
	int reverseArray[capacity]; // initializes reverse array
	size_t bytes = sizeof(array); // determines byte size
	size_t capacity = bytes/sizeof(array[0]); // determines length from byte size and size of individual byte
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
		printf("%d ",array[0]);
	printf("\nNew (Reversed) Array:\n");
	for(i=0;i<capacity;i++){
		reverseArray[i] = array[capacity-1-i]; // fills array with elements in reverse order
		printf(reverseArray[i]; // returns elements in reversed array
	}
	printf("\n\n");

	return 0;
}
