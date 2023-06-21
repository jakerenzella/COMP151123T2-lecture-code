#include <stdio.h>

struct animal {
    int cuteness;
    int safety;
    double price;
};

int main(void) {
    struct animal dog_1;
    struct animal dog_2;

    struct animal otter_1;

    dog_1.cuteness = 500;
    otter_1.cuteness = 3200000000;

    dog_1.safety = 10;
    otter_1.safety = 100;

    dog_1.price = 2000;
    otter_1.price = 0.5;

    printf("cuteness: %d\n", dog_1.cuteness);

    return 0;
}