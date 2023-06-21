#include<stdio.h>

#define MIN_HEIGHT 100
#define MIN_HEIGHT_WITH_ADULT 70

int main(void) {
    int rider_height;

    printf("Are you tall enough to ride the rollercoaster?\n");
    printf("Enter your height: ")

    scanf("%d", &rider_height);

    if(rider_height < MIN_HEIGHT_WITH_ADULT) {
        printf("get lost kid...\n");
    } else if (rider_height < MIN_HEIGHT) {
        printf("You must have a guardian with you\n");
    } else {
        printf("You are good to go\n");
    }







    return 0;
}