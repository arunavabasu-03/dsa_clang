#include <stdio.h>
/* traversal */
void display(int array[], int n)
{
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

/* insertion */
void indDeletion(int array[], int size, int index){

    for (int i = index; i < size - 1; i++){ // i <= size -2 or i < size
        array[i] = array[i + 1];
    }
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 78};
    int size = 5, index = 0;
    printf("Original Array");
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1; // when we perform deletion the size is going to decrease
    printf("Modified Array");
    display(arr, size);
    return 0;
}