#include <stdio.h>

enum elemental_type { Bug, Dragon, Electric, Fighting, Fire, Flying, Ghost,
 Grass, Ground, Ice, Normal, Poison, Psychic, Rock, Water  };

enum evolution { Basic, Stage1, Stage2 };

struct pokemon {
    enum elemental_type element;
    enum evolution level;
    int hp;
    double weight;
    int combat_power;
};

int main(void) {

    struct pokemon oshawott;

    oshawott.hp = 70;
    oshawott.level = Basic;
    oshawott.combat_power = 10;
    oshawott.weight = 13;
    oshawott.element = Water;


    return 0;
}