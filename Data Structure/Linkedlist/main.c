/* NULL -> END OF THE LINKEDLIST
traversal --> O(n)
*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; /* it is going to point `node` type data structure */
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL){

        printf(' Element ; %d\n', ptr->data);
        ptr = ptr->next; /* it is going to point next node */
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    /* Allocating memory in the heap */
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    /* link first and second node */
    head->data = 7;
    head->next = second;

    /* link second and third node */
    second->data = 11;
    second->next = third;

    /* Terminate program */
    third->data = 66;
    third->next = NULL;

    linkedListTraversal(head);
    return 0;
}