#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data, struct node *next);
void print_list(struct node *head);
struct node *insert_at_tail(int data, struct node *head);

int main(void) {

    struct node *head = create_node(7, NULL);
    head = create_node(8, head);
    head = create_node(11, head);

    print_list(head);

    insert_at_tail(6, head);

    print_list(head);

    return 0;
}

struct node *create_node(int data, struct node *next) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = next; 

    return new_node;
}

// prints a list
void print_list(struct node *head) {
    printf("The linked list is:\n");
    struct node *current_node = head;
    // loop until the end of the list
    while (current_node != NULL) {
        // print out the element
        printf("%d\n", current_node->data);
        current_node = current_node->next;
    }
    // printf("%d\n", current_node->data); // buggy
}

struct node *insert_at_tail(int data, struct node *head) {
    // traverse the linked list until we reach the last element
    struct node *current_node = head;
    while (current_node->next != NULL) { // while we're not at the last element
        // keep moving
        current_node = current_node->next;
    }
    // current_node is pointing at the last element!
    current_node->next = create_node(data, NULL); // the a new node containing int data

    return head;
}
