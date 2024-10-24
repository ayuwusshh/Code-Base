#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
};
void traverse(struct Node *head){
struct Node *ptr=head;
do{
    printf("Elements are: %d\n",ptr->data);
    ptr=ptr->next;
}while (ptr!=head);
}
int main(){
    struct Node *head=(struct Node*)malloc(sizeof(struct Node));
    struct Node *second=(struct Node*)malloc(sizeof(struct Node));
    struct Node *third=(struct Node*)malloc(sizeof(struct Node));
    struct Node *fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=41;
    third->next=fourth;
    fourth->data=66;
    fourth->next=head;
    traverse(head);
    return 0;
}