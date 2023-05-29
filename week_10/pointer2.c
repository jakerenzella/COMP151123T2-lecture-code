// Program to demonstrate the use of pointers in functions
// 

#include <stdio.h>

// Function to sum using pointers
// Input:  
// Output: 



// Function to product using pointers
// Input:  
// Output: 



// Function to swap values at two memory addresses
// Input:  
// Output: 



// Main function for testing out this random program
int main(void){

    int num1 = 42;
    int num2 = 10;
    int *pointer = &a;

    // Swap the two numbers around using pointers
    // Input: the pointers to the two numbers (the addresses of the two numbers)
    // Output: nothing
    swap(&num1, &num2);
    // Swap the numbers and then add the numbers together
    int result = sum(&num1, &num2);

    result = product(&num1, &num2);

    return 0;
}