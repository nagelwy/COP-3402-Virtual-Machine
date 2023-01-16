#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void printList(struct Node* n)
{
    while (n != NULL) 
    {
        printf(" %d ", n->data);
        n = n->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    
    head = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*)malloc(sizeof(Node));
    
    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
    
    second->data = 2; // assign data to second node
    second->next = third;
    
    third->data = 3; // assign data to third node
    third->next = NULL;
    
    return 0;
}