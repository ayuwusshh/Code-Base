/*
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow. Cannot push %d to the stack\n",val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created succesfully\n");
    push(sp, 98);
    push(sp, 88);
    push(sp, 78);
    push(sp, 68);
    push(sp, 58);
    push(sp, 48);
    push(sp, 38);
    push(sp, 28);
    push(sp, 18);
    push(sp, 8);
    push(sp,82);
    printf("Afrer pushing, Full: %d\n", isFull(sp));
    printf("After pushing, Empty: %d\n", isEmpty(sp));
    printf("Popped %d from the stack:",pop(sp));
    return 0;
} 
*/
#include<stdio.h>
#include<stdlib.h>
struct Stack
{
    int size;
    int top;
    int *arr;
};
int isFull(struct Stack *sp){
    if(sp->top==sp->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(struct Stack *sp){
    if(sp->top==-1){
        return 1;
    }
    return 0;
}
void push(struct Stack *sp,int data){
    if (isFull(sp))
    {
       printf("Stack full. Cannot push element to the stack.\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top]=data;
    }
}
int pop(struct Stack *sp){
    if (isEmpty(sp))
    {
       printf("Stack empty. Cannot pop element of the stack.\n");
    }
    else
    {
        int val=sp->arr[sp->top];
        sp->top--;
        return val;
    }
}
int main(){
    struct Stack *s=(struct Stack*)malloc(sizeof(struct Stack));
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    push(s,5);
    push(s,6);
    push(s,7);
    push(s,8);
    push(s,9);
    push(s,10);
    printf("P element from stack %d",pop(s));
    return 0;
}
