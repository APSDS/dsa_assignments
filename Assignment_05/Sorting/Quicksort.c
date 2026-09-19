
#include<stdio.h>

int swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int array[],int low,int high){
    int pivot = array[high];
    int i = low - 1;
    for (int j = low; j < high;j++){
        if(array[j]<=pivot){
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}
void quicksort(int array[],int low,int high){
    if (low<high){
        int pi = partition(array, low, high);
        quicksort(array, low, pi - 1);
        quicksort(array, pi + 1, high);
    }
    for (int i = 0; i < high+1; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");
}
int main()
{
    int data[7] = {6, 4, 7, 8, 1, 10, 5};
    int size = sizeof(data) / sizeof(data[0]);
    quicksort(data, 0, size - 1);
    printf("sorted array : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", data[i]);
    }
}
