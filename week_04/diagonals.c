// Write a program in C to find the sum of the right diagonals of a 2D array. 
// (Assume 2D array will always be square)
// Extend the problem to find the sum of the left diagonals of a 2D array

// Sasha Week 4: Lecture 8: 2D Arrays

#include <stdio.h>
#define MAX_ROW 3
#define MAX_COL 3

int main(void) {

    int sum_right = 0;
    //int sum_left;

    // Let's declare and initialise a 2D array
    int array[MAX_ROW][MAX_COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};    

    for(int row = 0; row < MAX_ROW; row++) {
        for(int col = 0; col < MAX_COL; col++) {
            if (row == col) {
                sum_right = sum_right + array[row][col];
            }
        }
    }

    printf("The sum of the right diagonals is %d\n", sum_right);
    //printf("The sum of the left diagonals is %d\n", sum_left);
    return 0;
}