#include <stdio.h>
/* traversal */
void display(int array[], int n){
    for (int i = 0; i < n; i++){
        printf("%d\n", array[i]);
    }
    printf("\n");
}

/* insertion */
int indInsertion(int array[], int size, int element, int capacity, int index)
{
    if (size >= capacity){
        return -1;
    }
    for (int i = 0; i >= index; i--){

        array[i] = array[i + 1];
    }
    array[index] = element; /* element that is going to be inserted */
    return 1;
}

int main()
{
    int arr[100] = {1, 2, 6, 78};
    int size = 5, element = 45, index = 1;
    /* creating an array  */
    display(arr, 4);
    indInsertion(arr, size, element, 100, index);
    return 0;
}