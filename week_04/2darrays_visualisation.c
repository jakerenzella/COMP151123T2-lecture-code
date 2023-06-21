#include <stdio.h>
#include <unistd.h>

void draw_grid(int grid[5][5]) {
  int i = 0;
  while (i < 5) {
    int j = 0;
    while (j < 5) {
      printf("%d ", grid[i][j]);
      // sleep for 2 seconds
      j++;
    }
    printf("\n");
    i++;
  }
  printf("\033[2J");
  sleep(1);
}

void visualise_grid_iteration(int grid[5][5]) {
  int i = 0;
  while (i < 5) {
    int j = 0;
    while (j < 5) {
      grid[i][j] = grid[i][j] + 1;
      draw_grid(grid);
      j++;
    }
    printf("\n");
    i++;
  }
}

void initialise_grid(int grid[5][5]) {
  int row = 0;
  while (row < 5) {
    int col = 0;
    while (col < 5) {
      grid[row][col] = 5;
      col++;
    }
    row++;
  }
}

int main(void) {
  // clear the terminal;
  printf("\033[2J");

  int grid[5][5];
  initialise_grid(grid);
  draw_grid(grid);
  visualise_grid_iteration(grid);

  return 0;
}