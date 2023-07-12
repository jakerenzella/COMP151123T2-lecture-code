#include <stdio.h>
#include <stdlib.h>

#define NAME_MAX_LEN 100
#define MAX_PARTY 6

enum element { WATER, FIRE, FLYING, GRASS };
struct pokemon {
  int id;
  char name[NAME_MAX_LEN];
  int hp;
  double attack_power;
  enum element type;
};

struct pokedex {
  struct pokemon *found;
  int number_found;
};

struct game_data {
  struct pokedex player_pokedex;
  struct pokemon party[MAX_PARTY];
};

struct game_data initialise_game(void) {
  struct game_data game;

  game.player_pokedex.number_found = 0;
  game.player_pokedex.found = NULL;
}

void encounter_wild_pokemon(struct game_data game) {
  struct pokemon wild_pokemon = {.id = 0,
                                 .name = "Bulbasaur",
                                 .hp = 50,
                                 .attack_power = .5,
                                 .type = GRASS};

  // check that it exists in the pokedex
  int already_encountered = 0;
  for (int i = 0; i < game.player_pokedex.number_found; i++) {
    if (game.player_pokedex.found[i].id == wild_pokemon.id) {
      already_encountered = 1;
    }
  }

  // if not, add it
  // 1 -> true
  // 0 -> false
  // !true -> false
  // !false -> true
  if (already_encountered) {
  } else {
    add_to_pokedex(game, wild_pokemon);
  }
  // else, don't
  // give player a chance to catch it
}

int main(void) { return 0; }