// This program allows us to scan into, print and manipulate a 1D array
// Sasha Week 3 Lecture 6
// Completely unnecessary but I <3 Arrays 


#include <stdio.h>
// I have a bad habit of watching bad tv shows, 
// and would like to break this habit... 
// I want to be able to track the number of hours I watch trash 
// tv in any given week.  

// Let's extend the problem. Let's say my friend (let's call him Tom) is 
// keen to see what on earth the fuss is about and gets sucked into watching
// trashy tv also. I now want to prove that I don't watch that much bad tv
// by also calculating how much Tom has watched this week and comparing our 
// hours of watching.

#define WORK_WEEK 5

int main(void) {


    int hours_tv[WORK_WEEK];
    int hours_tv_tom[WORK_WEEK];
    int sum_sasha = 0;
    int sum_tom = 0;

    for(int i = 0; i < WORK_WEEK; i++) {
        printf("How many hours did you watch on day %d\n", i + 1);
        scanf("%d", &hours_tv[i]);
    }

    // Should we do a while loops?
    int i = 0;
    while (i < WORK_WEEK) {
        printf("How many hours did Tom watch on day %d\n", i + 1);
        scanf("%d", &hours_tv_tom[i]);
        i++;
    }

    /* for(i = 0; i < WORK_WEEK; i++) {
        printf("%d\n", hours_tv[i]);
    }
    */
    for(i = 0; i < WORK_WEEK; i++) {
        sum_sasha = sum_sasha + hours_tv[i];
        sum_tom = sum_tom + hours_tv_tom[i];
    }

    if (sum_sasha < sum_tom) {
        printf("Sasha watched %d hours this week of trashy TV, whilst Jake watched %d hours..."
                "looks like Jake is now watching more trashy tv than Sasha...\n", sum_sasha, sum_tom);
    } 
    //Tom now watching more trashy TV
    // 
    // Sasha still watching too much trashy TV
    // printf("Sasha watched %d hours this week of trashy TV, whilst Jake watched %d hours...looks like Sasha is still the queen of wasting time...\n", );

    // We are even.
    // printf("Sasha watched %d hours this week of trashy TV, whilst Jake watched %d hours...looks like we are both wasting a lot of time...\n", ); 


    return 0;
}