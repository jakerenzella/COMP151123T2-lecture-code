#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char input_char;
    int num_input_chars;

    printf("Enter your command: ");
    scanf(" %c", &input_char);

    while (input_char == 'r')  {

        int random_num = (rand() % 6) + 1;

        printf("You rolled a %d...\n", random_num);

        if(random_num == 1) {
            printf("Bad luck you lose...\n");
        }

        printf("Enter your command: ");
        scanf(" %c", &input_char);


    }

    return 0;
}