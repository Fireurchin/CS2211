/* CS2211b 2020 */
/* Assignment 03 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 28/Feb/2020 */

#include<stdio.h>
#include<stdlib.h>

void funct(int *p2){
	/* p2 = (int *)malloc(4); error caused by premature allocation of memory by a function with limited scope */
	*p2 = 14;
	printf("%d\n", *p2);
}

int main(){
	int *p;
	p = (int *)malloc(4); /* malloc performed in main, this line changed the error */
	funct(p);
	printf("%d\n",*p);
	free(p); // frees allocated memory to prevent fatal memory leak

	return 0;
}
