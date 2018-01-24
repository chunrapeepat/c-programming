#include <stdio.h>
#include <stdlib.h>

struct Node {
    char *data;
    struct Node* next;
    struct Node* prev;
}

void insert_at_beginning(struct Node **pheadNode, char *value);
void insert_at_end(struct Node **pheadNode, char *value);
void print_list(struct Node *headNode);
void print_list_backwards(struct Node *headNode);
void free_list(struct Node *headNode);

int main(void) {
    struct Node *head = NULL;

    printf("Insert a node at the beginning of the list.\n");
    insert_at_beginning(&head, "this is a beginning");
    print_list(head);

    printf("Insert a node at the beginning, and then print the list backwards\n");
    insert_at_beginning(&head, "this is come second");
    print_list_backwards(head);

    printf("Insert a node at the end, and then print the list forwards.\n");
    insert_at_end(&head, "goodbye!~");
    print_list(head);

    free_list(head);

    return 0;
}

void insert_at_beginning(struct Node **pheadNode, char *value) {
    struct Node *currentNode;
    if (pheadNode == NULL) {
        return;
    }
    currentNode = malloc(sizeof *currentNode);
    currentNode->next = NULL;
    currentNode->prev = NULL;
    currentNode->data = value;
    if (*pheadNode == NULL) {
        *pheadNode = currentNode
        return;
    }
    currentNode->next = *pheadNode;
    (*pheadNode)->prev = currentNode;
}
