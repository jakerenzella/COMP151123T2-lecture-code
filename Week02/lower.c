// Demonstrating how to play with characters in C
// Program asks the user for a letter, checks if the letter is upper or lower
// case and then converts it to the opposite case

// Sasha Week 2, Lecture 3

// Problem: A user inputs a letter, we must check 
// if the letter is upper or lower case and then 
// output the same letter, but in the opposite case
// Possibilities/Breakpoints?
/*
    1. Take some input in from terminal for a letter (scanf())
    2. If it is a lower case letter .... letter >= 'a' && letter <= 'z'
        - then you need to move to be an upper case letter
    3. If it is an upper case letter .... letter >= 'A' && letter <= 'Z'
        - then you need to move to be a lower case letter

*/
// 


#include <stdio.h>

int main (void){


    // How will we solve the problem?
    // How can we break it?
    
    // Declare and initialise any variables we may use in our solution
    char letter;
    printf("Please enter a letter: ");
    scanf(" %c", &letter);

    if (letter >= 'a' && letter <= 'z') {
        // This means it is a lower case letter 
        // I now need to convert this letter to a capital letter
        // For exAMPLE,lower case d (100), I want it to go to D (68)
        letter = letter - 'a' + 'A';
    } else if (letter >= 'A' && letter <= 'Z') {
        //This means it is an upper case letter
        // I now need to convert it to lower case
        letter = letter - 'A' + 'a';
    } else {
        printf("You did not enter a letter... \n");
    }

    printf("The new letter is: %c\n", letter);


    return 0;
}