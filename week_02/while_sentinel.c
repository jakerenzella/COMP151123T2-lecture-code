// Demonstrating the use of a while loop with a sentinel
// condition.
// Sasha Week 2, Lecture 3

// Problem: I want to read in some numbers until a negative number has been 
// entered, and sum up all the positive numbers. 
// Let's think through the steps to solve this!
/*
1. read in numbers (scanf()) - on repeat until.... (loop)
2. I want to check if my read in value is greater than or less than 0
    - if it is less than 0, I want to stop scanning in
    - if it is more than 0, add it to the sum!
3. Output my sum (printf())
*/


#include <stdio.h>

int main (void){

    // I am going to use 0 if number is positive, and 1 if number is negative
    int flag = 0;
    int sum = 0; // it should be initialised!
    int number;

    while(flag == 0){
        scanf("%d", &number);
        if (number < 0) {
            flag = 1;
        } else {
            sum = sum + number;
        } 
    }

    printf("The sum is: %d\n", sum);
    return 0;
}