#include <stdio.h>

// fib sequence
// start with a number
// 0, 1, 1, 2, 3, 5, 8, 13, 21

// n -> not the fib number, it's the # of iterations
// n -> 3
int global_n = 0;
// n -> 3
int fibonacci(int n) {
  global_n++;
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    // 2, 1
    // 1 +
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main(void) {
  int n;

  printf("Enter n: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("%d ", fibonacci(i));
  }

  printf("\n%d\n", global_n);

  return 0;
}