// Our big linked list program that performs
// a number of operations on linked lists

// Sasha Lecture 13: Linked Lists

#include <stdio.h>
#include <stdlib.h> //Include this library for malloc and free functions

// First define a node in a linked list
// A node consists of some data (of type int) and also a pointer 
// (so the address of) the next node in the linked list
// So if I want a pointer to point to an int
// int *pointer = 
// struct node *pointer 
struct node {
    int data;
    struct node *next;
};

// Some functions to support our linked list manipulation
//create_node will make us a new node
struct node *create_node(int data, struct node *next);
//print_node will print out all the nodes of the linked list 
void print_nodes(struct node *head);
//add_node_end_of_list will append a node to the end of the list
struct node *add_node_end_of_list(int data, struct node *head);

int main(void) {
    struct node *head = NULL;

    head = add_node_end_of_list(3, head);
    head = add_node_end_of_list(5, head);
    head = add_node_end_of_list(13, head);
    
    print_nodes(sptr);
    return 0;
}

struct node *add_node_end_of_list(int data, struct node *head) {
    if (head == NULL) {
        return create_node(data, NULL);
    }
    struct node *current;
    current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = create_node(data, NULL);
    return head;
}

void print_nodes(struct node *head) {
    struct node *p;
    p = head;
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}

struct node *create_node(int data, struct node *next) {
    struct node *sptr;
    sptr = malloc(sizeof (struct node));
    sptr->data = data;
    sptr->next = next;
    return sptr;
}