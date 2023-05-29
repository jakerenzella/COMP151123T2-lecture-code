// Demonstrating the use of a while loop with a
// counter.
// Sasha Week 2, Lecture 3

// Problem: I want to count from 1-10! 

#include <stdio.h>

int main (void){

    // 1. Declare and initialise the loop control variable (counter)
    int counter = 1;
    // 2. Test the loop counter
    while(counter <= 10) {
        printf("%d\n", counter);
        // 3. Update the loop control variable
        counter = counter + 1; //counter++;
    }

    
    /*
    printf("%d\n", counter);
    printf("%d\n", counter + 1);
    printf("3\n");
    */

    return 0;
}