/*
[Insert between]
ptr->next = p -> next ;
p -> next = ptr ;
`[Insert at the end]`
p ->next = ptr;
ptr-> next = NULL ;
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
    while (ptr != NULL)
    {
        printf(" Element ; %d\n", ptr->data);
        ptr = ptr->next; /* it is going to point next node */
    }
}

/* insertion at first */
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node)); /* new node */
    ptr->next = head;
    ptr->data = data;
    return ptr; /* ptr is going to be head  */
}
/* insert at between */
struct Node *insertAtBetween(struct Node *head, int data, int index)
{
    /* index = 2 >> index-1 = 1 >> p = 2 now it is going t
    be 3 */
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node)); /* new node */
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {                /* run  until the condition is not satisfying */
        p = p->next; /* p is going to `2` */
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
/* insert at the end  */

struct Node *insertAtEnd(struct Node *head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node)); /* new node */
    struct Node *p = head;
    ptr->data = data; /* setting the data */
    while (p->next!= NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node *insertAfterNode(struct Node *head, struct Node *previousNode,int data){
    /* index = 2 >> index-1 = 1 >> p = 2 now it is going t
    be 3 */
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node)); /* new node */
    ptr->data = data; /* setting the data */
    ptr-> next = previousNode->next;
    previousNode -> next = ptr;
    return head;
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
    // head = insertAtFirst(head,56);
    // head = insertAtBetween(head, 56, 1);
    head = insertAtFirst(head,56);
    // head = insertAfterNode(head, second, 56);
    printf("Modified Linked List: \n");
    linkedListTraversal(head);
    return 0;
}
