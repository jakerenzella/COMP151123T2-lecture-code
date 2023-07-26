#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50

typedef struct student {
  char name[MAX_LEN];
  double WAM;
  struct student *best_friend;
} Student;

struct node {
  Student data;
  struct node *next;
};

struct node *create_node(struct node *next, char name[MAX_LEN],
                         Student *friend, double WAM);
void print_list(struct node *head);
struct node *insert_at_tail(struct student, struct node *head);
struct node *insert_at_index(struct node *head, int index, struct student);
struct node *remove_tail(struct node *head);
struct node *delete_at_index(struct node *head, int index);
struct node *reverse(struct node *head);

// reverse_ll
// order
// struct as the data

// for you at home
int len_of_ll(struct node *head);

int main(void) {
  // struct student create_student

  struct node *head = create_node(NULL, "Smit", NULL, 100.1);
  head = create_node(head, "Shayyan", &(head->data), 100.1);
  head = create_node(head, "Xavier", &(head->data), 100.1);

  print_list(head);

  // insert_at_tail(6, head);
  // print_list(head);

  // insert_at_index(head, 2, 42);
  // print_list(head);
  // expected: 11 -> 8 -> 42 -> 7 -> 6

  // head = remove_tail(head);
  // print_list(head);
  // expected: 11 -> 8 -> 42 -> 7

  // head = remove_tail(head);
  // print_list(head);
  // expected: 11 -> 8 -> 42

  head = reverse(head);
  print_list(head);
  // expected: 42 -> 8 -> 11

  head = delete_at_index(head, 0);
  print_list(head);
  // expected: 8 -> 42

  head = delete_at_index(head, 1);
  print_list(head);
  // expected: 8

  head = reverse(head);
  print_list(head);
  // expected: 8

  head = reverse(NULL);
  print_list(head);

  return 0;
}

struct node *reverse(struct node *head) {
  struct node *curr = head;
  struct node *prev = NULL;
  struct node *next = NULL;

  while (curr != NULL) {
    next = curr->next;
    curr->next = prev;

    // iterating
    prev = curr;
    curr = next;
  }

  return prev;
}

struct student create_student(char name[MAX_LEN], struct student *friend,
                              double WAM) {
  struct student new_student;

  strcpy(new_student.name, name);
  new_student.WAM = WAM;
  new_student.best_friend = friend;

  return new_student;
}

// returns the HEAD of a new list in which the tail
// element is removed
struct node *remove_tail_tim_special(struct node *head) {
  struct node *curr = head;
  for (; curr->next->next != NULL; curr = curr->next)
    ;
  curr->next = NULL;
  free(curr->next);
  return head;
}

struct node *delete_at_index(struct node *head, int index) {
  struct node *curr = head;
  struct node *previous = NULL;

  int i = 0;

  while (curr != NULL) {
    if (index == i) {
      if (previous == NULL) {
        // we are at the first element (0)
        struct node *result = curr->next;
        free(curr);
        return result;
      }
      // we can delete curr node
      // and connect previous to curr's next.
      previous->next = curr->next;
      free(curr);
      return head;
    }

    previous = curr;
    curr = curr->next;
    i++;
  }
  return head;
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
struct node *insert_at_index(struct node *head, int index, struct student student) {
  index--;
  struct node *curr = head;

  int i = 0;
  while (curr != NULL) {
    if (i == index) {
      // let's add the node
      // curr->next = create_node(data, curr->next);
      return head;
    }
    // advance to the next node
    curr = curr->next;
    i++;
  }
  return head;
}

struct node *create_node(struct node *next, char name[MAX_LEN],
                         struct student *friend, double WAM) {
  // put a node on the heap
  struct node *new_node = malloc(sizeof(struct node));

  // initialise the struct
  new_node->data = create_student(name, friend, WAM);

  // hook up the linked list
  new_node->next = next;

  return new_node;
}

void print_student(struct student *to_print) {
  fputs(to_print->name, stdout);
  printf("\nWAM: %lf\n", to_print->WAM);

  if (to_print->best_friend != NULL) {
    printf("Best friend: ");
    fputs(to_print->best_friend->name, stdout);
  } else {
    printf(":(, why don't you try ICPC?");
  }
  printf("\n------------\n");
}

// prints a list
void print_list(struct node *head) {
  printf("The linked list is:\n");
  struct node *current_node = head;
  // loop until the end of the list
  while (current_node != NULL) {
    // print out the element
    print_student(&(current_node->data));
    current_node = current_node->next;
  }
  printf("NULL\n");
}

struct node *insert_at_tail(struct student student, struct node *head) {
  // traverse the linked list until we reach the last element
  struct node *current_node = head;
  while (current_node->next != NULL) {  // while we're not at the last element
    // keep moving
    current_node = current_node->next;
  }
  // current_node is pointing at the last element!
  // current_node->next =
      // create_node(data, NULL);  // the a new node containing struct student

  return head;
}
// 