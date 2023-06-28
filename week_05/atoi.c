#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 10

int main(void) {
  // define a string
  char input[MAX_STR];

  // read into the string
  printf("Enter your age: ");
  fgets(input, MAX_STR, stdin); // input -> ['5', '0', '\0']

  //takes a string, converts it to an integer
  double age = atof(input);

  printf("%lf\n", age);

  return 0;
}