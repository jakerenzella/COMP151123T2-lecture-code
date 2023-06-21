#include <stdio.h>

enum species { Dog, Pikachu, Otter, PufferFish, Dragon, Termite, Anteater, Kangaroo };

int main(void) {
    enum species my_species_1 = Otter;
    enum species my_species = my_species_1;

    printf("%d\n", my_species);

    return 0;
}