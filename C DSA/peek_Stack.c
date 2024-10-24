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
        printf("Stack overflow. Cannot push %d to the stack\n.", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow.\n");
        return -1;
    }
    else
    {
       int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack *s,int i){
    int IndArr=s->top -i + 1;
    if(IndArr<0){
        printf("Not a valid position for a stack\n");
        return -1;
    }
    else
    {
        return s->arr[IndArr];
    }   
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Stack has been created successfully\n");
    push(s,1);
    push(s,11);
    push(s,21);
    push(s,31);
    push(s,41);
    push(s,51);
    push(s,61);
    push(s,71);
    push(s,81);
    push(s,91);
    push(s,100);
    printf("Afrer pushing, Full: %d\n", isFull(s));
    printf("After pushing, Empty: %d\n", isEmpty(s));
   printf("Popped %d from the stack\n:",pop(s));
    for (int  j = 0; j <= s->top + 1; j++)
    {
        printf("The element at position %d is %d\n ",j,(peek(s,j)));
    }
    return 0;
}