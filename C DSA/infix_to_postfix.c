#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int stackTop(struct stack *s)
{
    return s->arr[s->top];
}

int isFull(struct stack *sp)
{
    return sp->top == sp->size - 1;
}

int isEmpty(struct stack *sp)
{
    return sp->top == -1;
}

void push(struct stack *sp, char val)
{
    if (isFull(sp))
    {
        printf("Overflow.\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = val;
    }
}

char pop(struct stack *sp)
{
    if (isEmpty(sp))
    {
        printf("Underflow.\n");
        return '\0'; // Return a default value or handle underflow appropriately
    }
    else
    {
        char a = sp->arr[sp->top];
        sp->top--;
        return a;
    }
}

int precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

char *infixToPostfix(char *infix)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++, i++;
        }
        else
        {
            if (isEmpty(s) || precedence(infix[i]) > precedence(stackTop(s)))
                push(s, infix[i]);
            else
            {
                postfix[j] = pop(s);
                j++;
            }
            i++;
        }
    }

    while (!isEmpty(s))
    {
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char input[50];
    printf("Enter infix expression: ");
    scanf("%s", input);
    printf("Postfix is %s\n", infixToPostfix(input));

    return 0;
}
