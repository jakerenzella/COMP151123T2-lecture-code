#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (strcmp(argv[1], argv[2]) == 0) {
        printf("same same\n");
    } else {
        printf("different\n");
    }
    printf("%s#\n", argv[1]);
    printf("%s#\n", argv[2]);
}