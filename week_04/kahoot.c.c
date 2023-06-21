#include <stdio.h>

int main(void) {
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int result = 0;
  for (int i = 0; i < 3; i++) {
    result += arr[i][i] * arr[i][2 - i];
  }
  printf("%d\n", result);
}
