#include <stdio.h>

int main(void) {

    double weight_lifted = 50.5;
    int num_reps = 4;

    int total_weight_lifted;
    total_weight_lifted = weight_lifted * num_reps;

    printf("%d\n", total_weight_lifted);
    return 0;
}