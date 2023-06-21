#include <stdio.h>
#define MAX_LENGTH 50

int main(void) {
    // asking for 8bits * MAX_LENGTH (50)
    char name[MAX_LENGTH];

    strcpy(name, "jake");
    
    printf("Enter your name: ");
    while (fgets(name, MAX_LENGTH, stdin) != NULL) {
        //...
        printf("Enter your name: ");
    }

    return 0;
}