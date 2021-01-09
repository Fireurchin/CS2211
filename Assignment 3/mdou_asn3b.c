/* CS2211b 2020 */
/* Assignment 03 */
/* Mingpei Dou */
/* 251056543 */
/* mdou */
/* 21/Feb/2020 */

#include<stdio.h>

/**
 * Calculates the sum of primes of a user-inputed number
 */

int main(){ // main function
	int sum,divisor,inputVar,counter; // instance variables (What am I even supposed to change d to?)
	while(1){ // while true:
		sum = 0; // sum is assigned 0, best case for numbers which have no constituent primes
		printf("Input? "); // displays UI request for input
		scanf("%d",&inputVar); // scans for user input and stores in int inputVar
		if (inputVar==0) break; // input cannot be 0, program ends
		for (int i=1;i<=inputVar;i++){ // loop to cycle through all constituent integers
			counter = 0; // counter reset to base value 0
			for (divisor=2;divisor<=i;divisor++) // loop to cycle through all constituent integers and posslbe divisors of the current constituent integer
				if(i%divisor==0) // if remainder is 0:
					counter++; // counter incriments by 1
			if(counter==1) // if only 1 remainder (number can only be divisble by itself and only itself)
				sum=sum+i; // adds i to the result of a if e is prime
		}
		printf("The Final Total is: %d\n",sum); // returns result
	}
	return 0;
}
