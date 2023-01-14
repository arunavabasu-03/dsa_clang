#include <stdio.h>

struct Node{
    int data;
    struct Node * next;
};

int isEmpty(struct Node* ptr){
    if (ptr==NULL){
        return 1;
    }else{
        return 0;
    }

}
int isFull(struct Node* ptr){
     struct Node* n = (struct Node*)malloc(sizeof(struct Node));
     if (n==NULL){
        return 1; 
        /* if it is not allocating memory dynamically means memory is FULL */
     }else{
        return 0;
     }
    
}

struct Node *push (struct Node *ptr , int x){
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));
    if (isFull(ptr)){
        return "Stack Overflow";
    }
    else {
        n->data = x;
        n ->next = ptr ; /* setting n the next to the previous top  */
        ptr = n ; /* setting the new top  */
    }
}


int main (){
    struct Node * top = NULL ;
    

    return 0;
}