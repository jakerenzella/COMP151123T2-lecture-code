// Let's create a simple program that will 
// calculate area of a rectangle, and let's try 
// and use some functions in this program! 
/*
1. Want to find out the length of rectangle (scanf())
2. Want to find out the width of rectangle (scanf()
3. Calculate the area
4. Output the area


*/

// Sasha Week 3 Lecture 5

#include <stdio.h>

// int = the data type that you are returning from a function
// name of the function = want that name to be meaningful! 
// (paramters) = what is going into the function?

// Include any function prototype
int calculate_area(int length, int width); 

int main(void) {

    int length;
    int width;
    // int area;
    printf("Please enter the length and width of the rectangle: ");
    int scanf_return = scanf("%d %d", &length, &width);
    // They could enter something that is not numbers here - need to do some error checking!

    //Let's try and implement calculate_area as a function!
    if (scanf_return == 2) {
        int area = calculate_area(length, width);
        printf("The area is %d\n", area);
        //printf("The area is %d\n", calculate_area(length, width));
    }
    
    return 0;
}

// This function calculates_area
// INPUT: length and width (int, int)
// OUTPUT: area (int)
// Name of function: calculate_area

int calculate_area(int number_one, int number_two) {
    int area = number_one * number_two;
    return area;
    // return length * width;
}