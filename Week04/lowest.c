// Recapping 1D arrays! 
// Problem: A user is asked to enter 5 numbers. We will
// then go through these numbers and find the lowest
// number and output what the lowest number is to the
// user.
/*
1. Scan in some numbers for the array
2. Store those numbers (in an array!)
3. Do our lowest comparison by parsing through the array... 
4.

*/

#include <stdio.h>

#define MAX 5

int main(void) {

    int lowest_number;
    // Declare an array to store the numbers that the user will enter
    int array[MAX];

    for (int i = 0; i < MAX; i++) {
        printf("Please enter a number: ");
        if (scanf("%d", &array[i]) != 1) {
            printf("You did not enter a number!\n");
            return 1;
        }  // error checking... 
    }
    
    lowest_number = array[0]; 

    for (int i = 0; i < MAX; i++) {
        if (lowest_number > array[i]) {
            lowest_number = array[i];
        }
    }
    printf("The lowest number is %d\n", lowest_number);

    return 0;
}