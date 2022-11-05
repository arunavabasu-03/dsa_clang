#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

/* 
if we do not pass address ; we need to get the values as a function argument
*/


/* isEmpty */
int isEmpty(struct stack *ptr){
    if (ptr->top == -1){

        return 1; // return 1 means true
    }
    else{
        return 0; // return 0 means false
    }
}

/* isFull */
int isFull(struct stack *ptr){
    if (ptr->top == ptr->size - 1){

        return 1;
    }
    else{
        return 0;
    }
}

/* push */
/* pop */







int main()
{
    /* creating stack */
    /*
    struct stack s;
    s.size = 80 ;
    s.top = -1 ;
    s. arr =  (int *) malloc(s.size * sizeof(int));
    */
    struct stack *s;
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc((s->size * sizeof(int))+1);

  // Pushing an element manually
    s->arr[0] = 7;
    s->top++;
    
    
    if (isEmpty(s)){
        /* code */
        printf("Stack is empty");
    }else{
        printf("Stack is not empty");
    };

    return 0;
};