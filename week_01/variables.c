// This program shows how to declare and initialise a variable
// Looking at ints, doubles, and char :) 

#include <stdio.h>

int main(void) {

    // let's say I want an int!
    // 1. Declared that I want a variable called number and it is of type int
    int number;
    // 2. Initialise that variable
    number = 42;
    // Youu can also do this all in one line
    int number_two = 13;

    // What about a char? The single quotes mean it is an ascii character, and you initialise by putting the character
    // in single quotes 
    char letter = 'S';

    // Is a decimal point number
    double decimal = 3.14;

    // %d - number (int)
    // %c - character (char)
    // %lf - double (long float)
    printf("The numbers are %d and %d, the char is %c and the decimal is %.2lf\n", number, number_two, letter, decimal);

    return 0;

}