# include <stdio.h>

/* bubble short */
void bubbleShort(int array[],int size){
/* create a pointer */
for (int step = 0 ; step<size-1 ; ++step){
   /* swapping */
   int swapped = 0;
   for (int i = 0 ; i < size-step-1;++i){
    if (array[i]>array[i+1]){
        int temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
        swapped =  1 ;
    }
    /* no swapping means array is sorted */ 
    if (swapped==0){
        break;
    }
   }
}
}

void printArray(int array[], int size){
for (int i = 0; i < size; i++){
    /* code */
    printf("%d\n",array[i]);
}
printf("\n");
}


int main (){
    int array[5] = {5,4,3,2,1}; /* size = 5 */
    printArray(array,5);
    bubbleShort(array,5);
    printArray(array,5);

}