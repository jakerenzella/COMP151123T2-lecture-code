// Echo a string in C - demonstrating how strings are read in with fgets()

// Sasha Week 4: Lecture 8: Strings

#include <stdio.h>

#define MAX 1000

int main(void) {

    // Declared an array of char of size MAX (20 characters long)
    char array[MAX];
    // Can initialise an array of char to make it a string
    // char array[] = "hello"; // automatically given the size of 6 character, one for each letter plus '/0'
    // Null terminator is a special character that indicates that we have reached the end of the string
    // Always teh last character in the string
    printf("Type in a string to echo: ");
    // To read a string from terminal, we use the fgets function
    // fgets(INPUT1, INPUT2, INPUT3)
    // fgets(array name that you are reading into, size of that array, where you are reading from - stdin)
    while (fgets(array, MAX, stdin) != NULL) {
        printf("%s", array);
        printf("Type in a string to echo: ");
    }
    // let's read in a string and echo it once
    // %s indicates that I want to print a string!
    //printf("%s", array);
    //array[6] = '\0';
    //printf("%s", array); 
    // What about if we want to keep reading strings in and echoing until 
    // Ctrl+D is pressed? 
    // This is indicated by what keyword!?

    
    return 0;
}