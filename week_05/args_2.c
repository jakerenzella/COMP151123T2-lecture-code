#include <stdio.h>
#include <stdlib.h>

// a program that takes two args (program name is argv[0])
// an int -> the # of times to repeat (the int is argv[1])
// a str -> the thing to repeat (the str is argv[2])
int main(int argc, char *argv[]) {
  printf("there are %d arguments\n", argc);

  // convert argv[1] into an actual int from a char[]
  int n = atoi(argv[1]);

  int i = 0;
  while (i < n) {
    // argv[2] is the third argument into the program
    fputs(argv[2], stdout);
    i++;
  }

  printf("%d\n", n);
  return 0;
}
