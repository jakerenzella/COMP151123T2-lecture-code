#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int ben;
    ben = 56;
    int *tom; // int * - int pointer variable
    tom = &ben; // where ben live -- address of ben
    *tom = 8; // dereferencing
    printf("%d\n", ben); // 8
    *tom = 45;
    printf("%d\n", ben);
    *tom = 26;
    printf("%d\n", ben);
    printf("%d\n", *tom); // 56, 26

    int sofia = 100;
    tom = &sofia;
    printf("------\n");
    printf("%d\n", sofia);
    printf("%d\n", *tom);

    return 0;
}