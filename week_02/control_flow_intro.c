#include <stdio.h>
#define LEGAL_AGE 18

int main(void) {
    
    int user_age;

    printf("Enter your age (be honest pls): ");
    scanf("%d", &user_age);

    if(user_age < LEGAL_AGE) {
        printf("get lost, kid...\n");
    }

    return 0;


}