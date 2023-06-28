#include <stdio.h>

// a program that takes two args
int main(int argc, char *argv[]) {
  printf("there are %d arguments\n", argc);

  int i = 0;
  while (i < argc) {
    printf("argument %d is: ", i);
    fputs(argv[i], stdout);
    printf("\n");
    i++;
  }

  return 0;
}