#include <stdio.h>

int main(void) {
  // a normal int variable
  int my_integer = 5;
  int my_second_integer = 15;

  // a pointer to an int
  int *pointer_to_my_int = &my_integer;
  pointer_to_my_int = &my_second_integer;

  printf("%d\n", my_integer);

  // we can change the value at the value of pointer_to_my_int
  *pointer_to_my_int = 10;
  my_integer = 10;

  printf("%d\n", my_integer);

  return 0;
}