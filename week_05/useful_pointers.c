#include <stdio.h>

#define MAX_LENGTH 50

struct pokemon {
    char name[MAX_LENGTH];
    int hp;
    double attack;
};

void increase_attack_power(struct pokemon *pokemon_to_mod) {
    pokemon_to_mod->attack += 50;
}

void print_pokemon(struct pokemon *pokemon_to_print) {
    printf("The pokemon is named: ");
    fputs(pokemon_to_print->name, stdout);
    printf("\nThe HP is: %d\n", pokemon_to_print->hp);
    printf("The power is: %lf\n", pokemon_to_print->attack);
    printf("The pokemon is named: ");
}

int main(void) {
    struct pokemon my_pokemon = { "Oshawott", 50, 25.4 };
    print_pokemon(&my_pokemon);
    increase_attack_power(&my_pokemon);
    print_pokemon(&my_pokemon);

    return 0;
}