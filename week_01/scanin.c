// This program will scan in from the terminal
// but we should understand something about it...
// What happens if I type in a white space character?

#include <stdio.h>

int main (void) {

    char my_char;
    int my_int;

    printf("Enter a character: ");
    scanf("%d", &my_int);
    // scanf("%d", &my_char);

    printf("You entered: %d\n", my_int);

    return 0;
}