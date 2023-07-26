#include "splashkit.h"

#define NUM_ENEMIES 10

typedef struct player {
  point_2d pos;
  bitmap bmp;
} Player;

typedef Player Enemy;

typedef struct game {
  Player p;
  window w;
  Enemy enemies[NUM_ENEMIES];
} Game;

Game initialise_game(window w) {
  Game game;
  Player p;

  p.pos.x = window_width(w) / 2;
  p.pos.y = window_height(w) - 50;
  p.bmp = load_bitmap("player", "player.png");
  load_bitmap("background", "gamebackground.jpg");
  load_bitmap("enemy", "enemy.jpg");

  for (int i = 0; i < NUM_ENEMIES; i++) {
    game.enemies[i].pos = random_window_point(w);
    game.enemies[i].pos.y -= window_height(w);
  }

  game.p = p;
  game.w = w;

  return game;
}

void draw_game(const Game *game) {
  clear_screen(COLOR_AQUA);
  draw_bitmap("background", 0, 0);

  for (int i = 0; i < NUM_ENEMIES; i++) {
    draw_bitmap("enemy", game->enemies[i].pos.x, game->enemies[i].pos.y);
  }

  draw_bitmap("player", game->p.pos.x, game->p.pos.y);
}

void update_game(Game *game) {
  for (int i = 0; i < NUM_ENEMIES; i++) {
    game->enemies[i].pos.y++;
  }

  if (key_down(LEFT_KEY)) {
    game->p.pos.x--;
  }
  if (key_down(RIGHT_KEY)) {
    game->p.pos.x++;
  }
  if (key_down(UP_KEY)) {
    game->p.pos.y--;
  }
  if (key_down(DOWN_KEY)) {
    game->p.pos.y++;
  }
}

int main() {
  window w = open_window("COMP1511", 500, 500);
  Game g = initialise_game(w);

  while (!window_close_requested(w)) {
    clear_screen(COLOR_WHITE);
    process_events();

    update_game(&g);

    draw_game(&g);

    refresh_screen(60);
  }

  delay(5000);
  return 0;
}