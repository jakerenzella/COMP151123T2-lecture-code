#include <stdio.h>
#include <stdlib.h>

struct node {
    int zid;
    struct node *next;

};

struct node *create_node(int zid, struct node *next);
void print_nodes(struct node *head);
struct node *add_node_end_of_list(int zid, struct node *head);

int main(void) {
    struct node *sptr;

    sptr = NULL;
    sptr =add_node_end_of_list(5000000, sptr);
    sptr =add_node_end_of_list(5000001, sptr);
    sptr =add_node_end_of_list(5000002, sptr);
    sptr =add_node_end_of_list(5000003, sptr);
    print_nodes(sptr);
    return 0;
}

struct node *add_node_end_of_list(int zid, struct node *head) {
    if (head == NULL) {
        return create_node(zid, NULL);
    }
    struct node *p;
    p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = create_node(zid, NULL);
    return head;
}

void print_nodes(struct node *head) {
    struct node *p;
    p = head;
    while (p != NULL) {
        printf("%d\n", p->zid);
        p = p->next;
    }
}

struct node *create_node(int zid, struct node *next) {
    struct node *sptr;
    sptr = malloc(sizeof (struct node));
    sptr->zid = zid;
    sptr->next = next;
    return sptr;
}