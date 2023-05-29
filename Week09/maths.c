// This is the implementation file of maths.h
// This is where you will implement all the functions
// that were defined (prototyped) in the header file

// Include the header file in the implementation file
// so that everyone knows where your definitions are
// #include "my_header.h"

#include "maths.h"


int absolute_value(int number){
    // If the number is negative, multiply it by -1
    if (number < 0){
        return -1 * number;
    }
    return number;
}

double area_circle(double radius){
    double area = PI * radius * radius; 
    return area;
}

int sum(int number1, int number2){
    return number1 + number2;
}