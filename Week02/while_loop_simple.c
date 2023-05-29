// Demonstrating a simple while loop

#include <stdio.h>

int main(void) {

    // 1. Loop control variable (use a variable to control and test the loop)
    // 2. Test that control variable
    // 3. Increment loop control (or change it in some way otherwise I will get an infinite loop)
    int counter = 0; // I have a loop control variable, that is called counter, and I initialised to 0

    int number_prints;
    printf("How many times would you like to print something? ");
    scanf("%d", &number_prints);
    
    while (counter < number_prints) { //inside the while condition, we are going to test the loop control variable
        printf("I love COMP1511\n");
        counter = counter + 1; // Update the loop control variable (in this case increment by 1)
        // Shorthand way of writing counter = counter + 1 IS counter++;
    }


    return 0;
}