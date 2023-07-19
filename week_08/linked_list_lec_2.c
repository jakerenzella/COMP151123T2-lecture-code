#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *create_node(int data, struct node *next);
void print_list(struct node *head);
struct node *insert_at_tail(int data, struct node *head);
struct node *insert_at_index(struct node *head, int index, int data);
struct node *remove_tail(struct node *head);

int main(void) {
  struct node *head = create_node(7, NULL);
  head = create_node(8, head);
  head = create_node(11, head);

  print_list(head);

  insert_at_tail(6, head);
  print_list(head);

  insert_at_index(head, 2, 42);
  print_list(head);
  // expected: 11 -> 8 -> 42 -> 7 -> 6

  remove_tail(head);
  print_list(head);
  // expected: 11 -> 8 -> 42 -> 7

  remove_tail(head);
  // expected: 11 -> 8 -> 42

  return 0;
}

// returns the HEAD of a new list in which the tail
// element is removed
struct node *remove_tail_tim_special(struct node *head) {
  struct node *curr = head;
  for (; curr->next->next != NULL; curr = curr->next);
  curr->next = NULL;
  free(curr->next);
}

struct node *remove_tail(struct node *head) {
  struct node *previous = head;
  struct node *current = head;

  while (current->next != NULL) {
    previous = current;
    current = current->next;
  }

  previous->next = NULL;
  free(current);
  return head;
}

// insert at(after) position
struct node *insert_at_index(struct node *head, int index, int data) {
  index--;
  struct node *curr = head;

  int i = 0;
  while (curr != NULL) {
    if (i == index) {
      // let's add the node
      curr->next = create_node(data, curr->next);
      return head;
    }
    // advance to the next node
    curr = curr->next;
    i++;
  }
  return head;
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
    printf("%d -> ", current_node->data);
    current_node = current_node->next;
  }
  printf("NULL\n");
  // printf("%d\n", current_node->data); // buggy
}

struct node *insert_at_tail(int data, struct node *head) {
  // traverse the linked list until we reach the last element
  struct node *current_node = head;
  while (current_node->next != NULL) {  // while we're not at the last element
    // keep moving
    current_node = current_node->next;
  }
  // current_node is pointing at the last element!
  current_node->next =
      create_node(data, NULL);  // the a new node containing int data

  return head;
}
