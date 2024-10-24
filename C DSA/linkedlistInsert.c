/*
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
}//
struct Node* insertAtFirst(struct Node *head,int data){
  struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
  ptr->next=head;
  ptr->data=data;
  return ptr;
}
struct Node* insertAtIndex(struct Node *head,int data,int index){
 struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
 ptr->data=data;
 struct Node *p=head;
 int i=0;
 while (i!=index-1)
 {
  p=p->next;
  i++;
}
ptr->next=p->next;
p->next=ptr;
return head;
}
struct Node* insertAtLast(struct Node *head,int data){
  struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
  ptr->data=data;
  struct Node* p=head;
  while (p->next!=NULL)
  {
    p=p->next;
  }
  p->next=ptr;
  ptr->next=NULL;
  return head;
}
struct Node* insertAfterNode(struct Node* head,struct Node* prevNode,int data){
  struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
  ptr->data=data;
  ptr->next=prevNode->next;
  prevNode->next=ptr;
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
    printf("\nBefore insertion:\n");
    traverse(head);
    printf("\nAfter insertion at first:\n");
    head=insertAtFirst(head,4);
    traverse(head);
    printf("\nAfter insertion at index:\n");
    head=insertAtIndex(head,69,3);
    traverse(head);
    printf("\nAfter insertion at last:\n");
    head=insertAtLast(head,38);
    traverse(head);
    printf("\nInsertion after Node:\n");
    head=insertAfterNode(head,second,100);
    traverse(head);
      return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node* next;
};
void traverse(struct Node* ptr){
  while (ptr!=NULL)
  {
    printf("\nElements are :%d",ptr->data);
    ptr=ptr->next;
  }
}
struct Node* insertAtFirst(struct Node* head,int data){
   struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
   ptr->next=head;
   ptr->data=data;
}
struct Node* insertAtIndex(struct Node* head,int data,int index){
  struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
  ptr->data=data;
  struct Node *p=head;
  int i=0;
  while(i != index-1){
    p=p->next;
    i++;
  }
  ptr->next=p->next;
  p->next=ptr;
  return head;
}
struct Node* insertAtLast(struct Node* head,int data){
struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
  ptr->data=data;
  struct Node* p=head;
  int i=0;
  while(p->next != NULL){
    p=p->next;
  }
  p->next=ptr;
  ptr->next=NULL;
  return head;
}

int main(){
  struct Node* head=(struct Node*)malloc(sizeof(struct Node));
  struct Node* second=(struct Node*)malloc(sizeof(struct Node));
  struct Node* third=(struct Node*)malloc(sizeof(struct Node));
  struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
  struct Node* fifth=(struct Node*)malloc(sizeof(struct Node));
  head->data=7;
  head->next=second;
  second->data=8;
  second->next=third;
  third->data=10;
  third->next=fourth;
  fourth->data=11;
  fourth->next=fifth;
  fifth->data=12;
  fifth->next=NULL;
  printf("\nBefore insertion:\n");
  traverse(head);
  printf("\nAfter insertion at First:\n");
  head=insertAtFirst(head,6);
  traverse(head);
  printf("\nAfter insertion at Index:\n");
  head=insertAtIndex(head,9,3);
  traverse(head);
  printf("\nAfter insertion at Last:\n");
  head=insertAtLast(head,13);
  traverse(head);
  return 0;
}
