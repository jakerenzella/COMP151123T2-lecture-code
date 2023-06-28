#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int data[] = {0, 1, 2, 3, 4, 5};

  printf("%p\n", &data[0]);
  printf("%p\n", &data[1]);

  printf("%p\n", data);
  printf("%d\n", *data);

  printf("%d\n", *(data + 1));
  printf("%d\n", *(data + 2));

  return 0;
}