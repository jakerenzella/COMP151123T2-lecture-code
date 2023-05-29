// Quick rehash of enums

#include <stdio.h>

//1. Define enum
enum month {
    JAN = 1, 
    FEB = 1,
    MAR,
    APR,
    MAY = 50,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

enum favourite_month {
    MAR,
    DEC
};

int main(void) {

    enum month month_name;

    month_name = SEP;
    printf("The month is %d\n", month_name);
    return 0;
}

