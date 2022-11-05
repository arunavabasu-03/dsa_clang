#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

/*
if we do not pass address ; we need to get the values as a function argument
*/

/* isEmpty */
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {

        return 1; // return 1 means true
    }
    else
    {
        return 0; // return 0 means false
    }
}
/* isFull */
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

/* push */
void push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("StackOverFlow !! cannot push %d to the stack  \n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
};

/* pop */
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        /* code */
        printf("Stack under flow !! cannot be poped\n");
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
};

/* peck */
int peck(struct stack *ptr, int i)
{
    if (ptr->top - i + 1 < 0)
    {
        printf("Invalid position");
    }
    else
    {
        return ptr->arr[ptr->top - i - 1];
    }
}

int main()
{
    /* creating stack */
    /*
    struct stack s;
    s.size = 80 ;
    s.top = -1 ;
    s. arr =  (int *) malloc(s.size * sizeof(int));
    */
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    pop(sp);

    return 0;
};