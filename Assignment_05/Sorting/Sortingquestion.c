/* Take an array of 10 elements randomly unsorted, implement the sorting which checks two adjacent element
and swaps them if required and perform that sorting for one external loop iteration Then take that intermidiate
array passing to a sorting function which performs worst When array is sorted. */
// First it will be bubble sort 
// then after Sorting the array for one whole Outer iteration put Swap flag
// If swap== 1
// call quicksort function ( cause it works worse when array is sorted ) and Sost the rest of the array .
#include <stdio.h>
int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

    void quicksort(int array[], int low, int high)
    {
        if (low < high)
        {
            int pi = partition(array, low, high);
            quicksort(array, low, pi - 1);
            quicksort(array, pi + 1, high);
        }
    }
void bubblesort(int array[], int size)
    {
        for (int step = 0; step < size - 1; step++)
        {
            int swap = 0;
            for (int i = 0; i < size - step - 1; ++i)
            {
                if (array[i] > array[i + 1])
                {
                    int temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                    swap = 1;
                }
                if (swap == 1)
                {
                    quicksort(array, 0, size - 1);
                }
            }
        }
    }
    int main()
    {
        int data[7] = {6, 4, 7, 8, 1, 10, 5};
        int size = sizeof(data) / sizeof(data[0]);
        bubblesort(data, size);
        printf("sorted array : \n");
        for (int i = 0; i < size; i++)
        {
            printf("%d", data[i]);
        }
    }
