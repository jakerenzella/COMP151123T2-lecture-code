#include <stdio.h>

#define MAX_COLS 16
#define MAX_ROWS 16

void print_crossword(char crossword[MAX_ROWS][MAX_COLS]);
void initialise_crossword(char crossword[MAX_ROWS][MAX_COLS]);

void initialise_crossword(char crossword[MAX_ROWS][MAX_COLS]) {
  int row = 0;
  while (row < MAX_ROWS) {
    int col = 0;
    while (col < MAX_COLS) {
      // at this point, we have row,col -- an element
      crossword[row][col] = 'a';
      col++;
    }
    row++;
  }
}

void print_crossword(char crossword[MAX_ROWS][MAX_COLS]) {
  int row = 0;
  while (row < MAX_ROWS) {
    int col = 0;
    while (col < MAX_COLS) {
      // at this point, we have row,col -- an element
      printf("%c ", crossword[row][col]);
      col++;
    }
    printf("\n");
    row++;
  }
}

int main(void) {
  // this sets all elements to 0
  char crossword[MAX_ROWS][MAX_COLS] = {};

  initialise_crossword(crossword);
  print_crossword(crossword);

  return 0;
}