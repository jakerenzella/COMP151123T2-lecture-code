// This program removes a specified character from a string
// and then prints out the new string

#include <string.h>
#include <stdio.h>

#define MAX 50


int main(void) {

    char string[MAX];
    printf("Enter a string: ");
    fgets(string, MAX, stdin);

    char character;
    printf("Enter a character to remove: ");
    scanf(" %c", &character);

    int i = 0; 
    while(string[i] != character && string[i] != '\0') {
        i++;
    }
    // either string[i] = character
    // or string[i] = \0 and I have reached the end of the string

    // hello
    // remove e
    // 
    if (string[i] == character){
        while (i < strlen(string)){
            string[i] = string[i + 1];
            i++;
        }

    }

    printf("After removing character %c, the string is \n%s", character, string);


    return 0;
}