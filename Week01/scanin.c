// This program will scan in from the terminal

#include <stdio.h>

int main (void) {

    // 1. Declare a variable to store the input from terminal into
    int number;
    int number_two;
    printf("Please enter two numbers: ");
    // To scan something in from the terminal you use the scanf function
    scanf("%d %d", &number, &number_two);

    int result = number % number_two;

    printf("The result is %d\n", result);
    

    // 1. Declare a double
    /*double decimal;
    printf("Please enter a decimal number:");
    scanf("%lf", &decimal);

    printf("The decimal number entered was: %lf\n", decimal);
    */
    // 1. Declare a character 
    /*char character;
    printf("Please enter a character: ");
    scanf(" %c", &character);

    printf("The character that was scanned in is: %c\n", character);
*/

    return 0;



}