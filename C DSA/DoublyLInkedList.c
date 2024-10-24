#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* prev;
    struct Node* next; 
};
void traverseStr(struct Node* head){
    struct Node* p=head;
    while (p!=NULL)
    {
        printf("Elements are:%d\n",p->data);
        p=p->next;
    }
}
void traverseRev(struct Node* head){
    struct Node* p=head;
    while (p!=NULL && p->next!=NULL)
    {
        p=p->next;
    }
     while (p!=NULL)
    {
        printf("Elements are:%d\n",p->data);
        p=p->prev;
    }
}
struct Node* insertAtFisrt(struct Node* head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    ptr->prev=NULL;
    if (head!=NULL)
    {
        head->prev=ptr;
    }
    return ptr;
}
struct Node* insertAtIndex(struct Node* head, int data, int index) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (head == NULL || index <= 0) {
        newNode->prev = NULL;
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        return newNode;
    }
    struct Node* current = head;
    int i = 1;
    while (i < index && current->next != NULL) {
        current = current->next;
        i++;
    }
    newNode->prev = current;
    newNode->next = current->next;
    if (current->next != NULL) {
        current->next->prev = newNode;
    }
    current->next = newNode;
    return head;
}
int main(){
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=5;
    head->prev=NULL;
    head->next=second;
    second->data=6;
    second->prev=head;
    second->next=third;
    third->data=7;
    third->prev=second;
    third->next=fourth;
    fourth->data=8;
    fourth->prev=third;
    fourth->next=NULL;
    printf("\nAfter insertion at First:\n");
    head=insertAtFisrt(head,4);
    traverseStr(head);
    printf("\n");
    traverseRev(head);
    printf("\nAfter insertion at Index:\n");
    head=insertAtIndex(head,88,2);
    traverseStr(head);
    printf("\n");
    traverseRev(head);
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct Node
{
    int data;
    struct Node* prev;
    struct Node* next; 
};

// Function to traverse and print the list in straight order
void traverseForward(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("Element is: %d\n", current->data);
        current = current->next;
    }
}

// Function to traverse and print the list in reverse order
void traverseReverse(struct Node* head) {
    struct Node* current = head;

    // Move to the last node
    while (current != NULL && current->next != NULL) {
        current = current->next;
    }

    // Traverse in reverse order
    while (current != NULL) {
        printf("Element is: %d\n", current->data);
        current = current->prev;
    }
}

int main() {
    // Create nodes
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    // Assign data and link nodes
    head->data = 5;
    head->prev = NULL;
    head->next = second;

    second->data = 6;
    second->prev = head;
    second->next = third;

    third->data = 7;
    third->prev = second;
    third->next = fourth;

    fourth->data = 8;
    fourth->prev = third;
    fourth->next = NULL;

    // Traverse and print in straight order
    printf("Printing in straight order:\n");
    traverseForward(head);

    // Traverse and print in reverse order
    printf("\nPrinting in reverse order:\n");
    traverseReverse(head);

    // Free allocated memory
    free(head);
    free(second);
    free(third);
    free(fourth);
    return 0;
}
*/