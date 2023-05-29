// Program to demonstrate how to declare and initialise an int variable

#include <stdio.h>
#define SPICE_LEVEL 10 
#define UP 'u' 

int main(void) {

    // 1. Declare and initialise a variable of type int
    int num = 27;
    int num_two = 13;
    printf("The numbers are: %d and %d\n", num_two, num);
    printf("The level of Spice that Sofia has consumed today is %c\n", SPICE_LEVEL);

    return 0;
}