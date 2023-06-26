#include <stdio.h>
#include <string.h>

#define MAX_COLS 8
#define MAX_ROWS 8

#define MAX_WORD_LENGTH 10

enum word_direction { VERTICAL, HORIZONAL };

void print_crossword(char crossword[MAX_ROWS][MAX_COLS]);
void initialise_crossword(char crossword[MAX_ROWS][MAX_COLS]);

int can_insert_word(char crossword[MAX_ROWS][MAX_COLS],
                    char word[MAX_WORD_LENGTH], int row_to_place,
                    int col_to_place) {
  int word_len = strlen(word);
  if (row_to_place < 0 || col_to_place < 0) {
    return 0;
  }
  if (MAX_COLS - col_to_place < word_len) {
    return 0;
  }

  return 1;
}

void insert_word(char crossword[MAX_ROWS][MAX_COLS], char word[MAX_WORD_LENGTH],
                 int row_to_place, int col_to_place,
                 enum word_direction direction) {
  // start at row_to_place, col_to_place and loop across the row adding each
  // letter
  if (can_insert_word(crossword, word, row_to_place, col_to_place)) {
    // let's add it...
    int i = 0;
    int j = 0;
    while (word[i + j] != '\0') {
      crossword[row_to_place + j][col_to_place + i] = word[i + j];
      if (direction == HORIZONAL) {
        i++;
      } else {
        j++;
      }
    }
  }
}

void initialise_crossword(char crossword[MAX_ROWS][MAX_COLS]) {
  int row = 0;
  while (row < MAX_ROWS) {
    int col = 0;
    while (col < MAX_COLS) {
      // at this point, we have row,col -- an element
      crossword[row][col] = '.';
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
  char crossword[MAX_ROWS][MAX_COLS];

  initialise_crossword(crossword);
  insert_word(crossword, "cat", 1, 1, HORIZONAL);
  insert_word(crossword, "xavier", 1, 1, VERTICAL);
  //   insert_word(crossword, "xavier", 3, 2);
  //   insert_word(crossword, "xavier", 3, -1);
  print_crossword(crossword);

  return 0;
}