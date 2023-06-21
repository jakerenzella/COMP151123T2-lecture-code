#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void remove_newline(char string_to_edit[]) {
    string_to_edit[strlen(string_to_edit)-1] = '\0';
}

int main(void) {

    char first_name[MAX_LEN];
    char last_name[MAX_LEN];

    printf("Enter first name: ");
    fgets(first_name, MAX_LEN, stdin);
    //replace the newline with a space
    // first_name[strlen(first_name)-1] = ' ';

    printf("Enter last name: ");
    fgets(last_name, MAX_LEN, stdin);

    char full_name[MAX_LEN];
    
    strcpy(full_name, strcat(first_name, last_name));

    printf("%d\n", strcmp(first_name, last_name));

    fputs(full_name, stdout);
    return 0;
}