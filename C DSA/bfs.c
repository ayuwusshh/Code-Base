/*
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
    q.size=400;
    q.r=q.f=0;
    q.arr=(int*)malloc(q.size*sizeof(int));

    int i=0;
    int visited[6]={0,0,0,0,0,0};
    int a[6][6]={
        {0,1,0,1,0,0},
        {1,0,1,0,0,0},
        {0,1,0,1,1,0},
        {1,0,1,0,1,0},
        {0,0,1,1,0,1},
        {0,0,0,0,1,0},
    };
   printf("%d ",i);
   visited[i]=1;
   enqueue(&q,i);
    while (!isEmpty(&q))
    {
        int node=dequeue(&q);
        for (int j = 0; j < 6; j++)
        {
            if (a[node][j]==1 && visited[j]==0)
            {
             printf("%d ",j);
             visited[j]=1;
             enqueue(&q,j);
        }
    }
}
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int size;
    int r;
    int f;
    int *arr;
};
int isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct Queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct Queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is full.\n");
    }
    q->r = q->r + 1;
    q->arr[q->r] = val;
}
int dequeue(struct Queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct Queue q;
    q.size = 400;
    q.r = q.f = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    int i = 0;
    int visited[6] = {0, 0, 0, 0, 0, 0};
    int a[6][6] = {
        {0, 1, 0, 1, 0, 0},
        {1, 0, 1, 0, 0, 0},
        {0, 1, 0, 1, 1, 0},
        {1, 0, 1, 0, 1, 0},
        {0, 0, 1, 1, 0, 1},
        {0, 0, 0, 0, 1, 0},
    };
    printf("%d ", i);
    visited[i] = 1;
    enqueue(&q, i);
    while (!isEmpty(&q))
    {
        int node = dequeue(&q);
        for (int j = 0; j < 6; j++)
        {
            if (a[node][j] == 1 && visited[j] == 0)
            {
                printf("%d ", j);
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
    }

    return 0;
}