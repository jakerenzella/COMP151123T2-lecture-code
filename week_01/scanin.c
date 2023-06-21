// This program will scan in from the terminal

#include <stdio.h>

int main (void) {
    int my_int;
    char my_char;

    // printf("Enter in your int: ");
    // scanf("%d", &my_int);

    printf("Enter in your char: ");
    scanf(" %c", &my_char);
    printf("You entered %c\n", my_char);

    return 0;
}