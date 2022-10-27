/* Abstract Data Type */
#include <stdio.h>
#include <stdlib.h>
struct myArray
{
    int total_size;
    int used_size;
    int *ptr; /*it is pointing to the first element of the array in the memory[heap]*/
};
void createArray(struct myArray *a, int tSize, int uSize)
{

    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // /* creating heap memory */
    // (*a).ptr = (int *)malloc(tSize * sizeof(int));

    a->total_size = tSize;
    a->used_size = uSize;
    /* creating heap memory */
    a->ptr = (int *)malloc(tSize * sizeof(int));
    /* allocate a heap memory [after every function call stack will be erased ] */
}
/* show the values inside the array */
void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}
/* setting value */
void setValue(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter the %dth element: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
int main()
{

    struct myArray marks;
    createArray(&marks, 10, 2); /* passing address of the structure &marks[address] :: (*a)[value]*/

    setValue(&marks);
    show(&marks);
    return 0;
}
