/*
#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct Queue *q){
if(q->r==q->size-1){
    return 1;
}
return 0;
}
int isEmpty(struct Queue *q){
if(q->r==q->f){
    return 1;
}
return 0;
}
void enqueue(struct Queue *q,int val){
    if(isFull(q)){
        printf("Queue is full.");
    }
    else
    {
        q->r=q->r+1;
        q->arr[q->r]=val;
    }
}
int dequeue(struct Queue *q){
    int a=-1;
    if(isEmpty(q))
    {
        printf("Stack is empty.");
    }
    else
    {
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}
int main(){
    struct Queue q;
    q.size=10;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,12);
    enqueue(&q,15);
    enqueue(&q,15);
    printf("%d\n",dequeue(&q));
    printf("%d\n",dequeue(&q));
    if(isEmpty(&q))
    {
        printf("Stack is empty.");
    }
    if(isFull(&q)){ 
        printf("Stack is full.");
    }
}
#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int size;
    int r;
    int f;
    int *arr;
};
int isFull(struct Queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(struct Queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
void enqueue(struct Queue *q,int val){
    if(isFull(q)){
        printf("Queue is full.\n");
    }
    q->r=q->r+1;
    q->arr[q->r]=val;
}
int dequeue(struct Queue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("Queue is empty\n");
    }
   else
   {
     q->f++;
    a=q->arr[q->f];
   }
   return a;
}
int main(){
    struct Queue q;
    q.size=10;
    q.r=q.f=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,7);
    enqueue(&q,8);
    enqueue(&q,9);
    enqueue(&q,10);
    printf("%d\n",dequeue(&q));
    printf("%d\n",dequeue(&q));
    if(isEmpty(&q)){
        printf("Queue is empty.");
    }
     if(isFull(&q)){ 
        printf("Stack is full.");
    }
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int r,f;
    int *arr;
};
int isFull(struct Queue *q){
    if (q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct Queue *q){
    if (q->r==q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct Queue *q,int val){
    if(isFull(q)){
        printf("Queue is full. Cannot enqueue element.\n");
    }
    q->r=q->r+1;
    q->arr[q->r]=val;
}
int dequeue(struct Queue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("Queue is empty. Cannot dequeue element.\n");
    }
    else
    {
    q->f++;
    a=q->arr[q->f];
    }
    return a;
}

int main(){
    struct Queue q;
    q.size=10;
    q.r=q.f=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,6);
    enqueue(&q,7);
    enqueue(&q,8);
    enqueue(&q,9);
    printf("%d dequeued \n",dequeue(&q));
    printf("%d dequeued \n",dequeue(&q));
      if(isEmpty(&q)){
        printf("Queue is empty.");
    }
     if(isFull(&q)){ 
        printf("Stack is full.");
    }

    return 0;
}