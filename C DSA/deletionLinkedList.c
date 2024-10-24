#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
};
void traverse(struct Node *ptr){
while (ptr!=NULL)
{
        printf("Elements are: %d\n",ptr->data);
    ptr=ptr->next;
}
}
struct Node* deleteAtFirst(struct Node* head){
     struct Node *ptr=head;
     head=head->next;
     free(ptr);
     return head;
}
struct Node* deleteAtIndex(struct Node* head,int index){
    struct Node* p=head;
    struct Node* q=head->next;
   for(int i=0;i<index-1;i++)
    {
        q=q->next;
        p=p->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
struct Node* deleteAtLast(struct Node* head){
    struct Node* p=head;
    struct Node* q=head->next;
    while(q->next!=NULL){
        q=q->next;
        p=p->next;
    }
    p->next=NULL;
    free(q);
    return head;
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
    fourth->next=NULL;
    printf("Before Deletion:\n");
    traverse(head);
   // printf("\n After Deletion at First:\n");
   // head=deleteAtFirst(head);
  //  traverse(head);
   // printf("\n After Deletion at Index:\n");
   // head=deleteAtIndex(head,2);
  //  traverse(head);
  printf("\n After Deletion at Last:\n");
  head=deleteAtLast(head);
  traverse(head);
    return 0;
}