// A while inside a while (tick tock)
// Demonstrating how you can put a while inside a while to print out a 
// grid of numbers
// Sasha Week 2, Lecture 4

/* Problem: Print out a grid of numbers that looks like this: 

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/
#define MAX 5

#include <stdio.h>

int main(void) {

    // 1. Initialise a loop control
    int row = 1;
    int col = 1;
    // 2. Test Loop control
    while (col <= MAX) {
        row = 1;
        while (row <= MAX) {
            printf("%d ", row);
            row = row + 1;
        }
        printf("\n");
        col = col + 1;
    }
    // 3. Update loop control
 


    return 0;
}