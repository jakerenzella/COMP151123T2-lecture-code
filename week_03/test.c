// This is an example of bad style!Shall we clean this up???Sasha Week 3 Lecture 5
// First of all, what do you think this program does?
// What is the easiest thing to start the fixing with?
#include <stdio.h> 

#define X 10 

#define ONE_SCOOP 1.25

struct ice_cream {
    double price; 
    int scoops;
    char flavour;
};

enum yums {
    a, 
    b, 
    c, 
    d, 
    e 
};

int main(void) {
    struct ice_cream tall;
    int total = 0;
    char loop = 'y';
    int scanf_return;
    tall.price = O_S;            

    while (loop == 'y') { 
        printf("Starting .........\n");
        printf("What flavour do you want and how many scoops of that flavour: ");
        scanf_return = scanf(" %c %d", &tall.yum, &tall.port);

        if(success != 2) {
            printf("Error!!!!!!!!!!!!!!!! That wasn't very clever of you...\n");
            return 1;
        }
        total = total + (tall.price * tall.port); 

        if(total > X) {
            printf("You do not have enough money to buy this much ice-cream.\n");
            return 1;
        } else {
            printf("Yay! You have enough to get some ice-cream\n");
        }       
        printf("Would you like to try ordering more ice-cream (y/n)? ");
        scanf(" %c", &loop);
    } 
    
    return 0;
}