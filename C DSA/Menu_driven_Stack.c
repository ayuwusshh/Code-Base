/*#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int stack_arr[MAX];
int top = -1;

void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();
void display();

int main()
{
        int choice,item;
        while(1)
        {
                printf("\n1.Push\n");
                printf("2.Pop\n");
                printf("3.Display the top element\n");
                printf("4.Display all stack elements\n");
                printf("5.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1 :
                        printf("\nEnter the item to be pushed : ");
                        scanf("%d",&item);
                        push(item);
                        break;
                 case 2:
                        item = pop();
                        printf("\nPopped item is : %d\n",item );
                        break;
                 case 3:
                        printf("\nItem at the top is : %d\n", peek() );
                        break;
                 case 4:
                        display();
                        break;
                 case 5:
                        exit(1);
                 default:
                        printf("\nWrong choice\n");
                }
        }

        return 0;

}

void push(int item)
{
        if( isFull() )
        {
                printf("\nStack Overflow\n");
                return;
        }
        top = top+1;
        stack_arr[top] = item;
}

int pop()
{
        int item;
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        item = stack_arr[top];
        top = top-1;
        return item;
}

int peek()
{
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        return stack_arr[top];
}

int isEmpty()
{
        if( top == -1 )
                return 1;
        else
                return 0;
}

int isFull()
{
        if( top == MAX-1 )
                return 1;
        else
                return 0;
}

void display()
{
        int i;
        if( isEmpty() )
        {
                printf("\nStack is empty\n");
                return;
        }
    printf("\nStack elements :\n\n");
        for(i=top;i>=0;i--)
                printf(" %d\n", stack_arr[i] );
        printf("\n");
}
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow.\n");
    }
    ptr->top++;
    ptr->arr[ptr->top] = val;
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow.\n");
        return -1;
    }
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
}
int peek(struct stack *s, int i)
{
    int IndArr = s->top - i + 1;
    if (IndArr < 0)
    {
        printf("Not a valid position for a stack\n");
        return -1;
    }
    else
    {
        return s->arr[IndArr];
    }
}
void display(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Elements in the stack:\n");
        for (int i = 0; i <= ptr->top; i++)
        {
            printf("%d\n", ptr->arr[i]);
        }
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    int choice, value;
    while (1)
    {
        printf("\n1.Push\n");
        printf("2.Pop:\n");
        printf("3.Display top element:\n");
        printf("4.Display all elements:\n");
        printf("5.Quit\n");
        printf("Enter a choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter an item to be pushed:");
            scanf("%d", &value);
            push(s, value);
            break;

        case 2:
            value = pop(s);
            if (value != -1)
            {
                printf("Popped element is:%d\n ", value);
            }
            break;

        case 3:
            printf("Enter the position to be picked:");
            scanf("%d", &value);
            int lmao = peek(s, value);
            if (lmao != -1)
            {
                printf("Element at position %d  is: %d\n", value, lmao);
            }
            break;

        case 4:
            display(s);
            break;
        case 5:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
            break;
        }
    }
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int size;
    int top;
    int *arr;
};
int isFull(struct Stack *sp)
{
    if (sp->top == sp->size - 1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct Stack *sp)
{
    if (sp->top == -1)
    {
        return 1;
    }
    return 0;
}
void push(struct Stack *sp, int data)
{
    if (isFull(sp))
    {
        printf("Stack full. Cannot push element to the stack.\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = data;
    }
}
int pop(struct Stack *sp)
{
    if (isEmpty(sp))
    {
        printf("Stack empty. Cannot pop element of the stack.\n");
        return -1;
    }
    else
    {
        int val = sp->arr[sp->top];
        sp->top--;
        return val;
    }
}
int peek(struct Stack *sp, int i)
{
    int IndArr = sp->top - i + 1;
    if (IndArr < 0)
    {
        printf("Invalid position.");
    }
    else
    {
        return sp->arr[IndArr];
    }
}
void display(struct Stack *sp)
{
    if (isEmpty(sp))
    {
        printf("Stack empty.\n");
    }
    else
    {
        printf("Elements of stack are\n");
        for (int i = 0; i <= sp->top; i++)
        {
            printf("%d\n", sp->arr[i]);
        }
    }
}
int main()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    int choice, value;
    while (1)
    {
        printf("\n1.Push.\n");
        printf("2.Pop.\n");
        printf("3.Display the first element.\n");
        printf("4.Display all the elements.\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the item to be pushed: ");
            scanf("%d", &value);
            push(s, value);
            break;
        case 2:
            value = pop(s);
            if (value != -1)
            {
                printf("Popped element is :%d", value);
            }
            break;
        case 3:
            printf("Enter the position to be picked: ");
            scanf("%d", &value);
            int z = peek(s, value);
            if (z != -1)
            {
                printf("Element as Position %d is %d\n", value, z);
            }
            break;
        case 4:
            display(s);
            break;
        case 5:
            printf("Exiting the program.");
            break;
        default:
        printf("Invalid choice.Please enter a valid choice.");
        break; 
        }
    }
    return 0;
}
