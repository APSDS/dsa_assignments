#include <stdio.h>


void bidirectionalSelectionSort(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int min_idx = start;
        int max_idx = start;

        
        for (int i = start + 1; i <= end; i++) {
            if (arr[i] < arr[min_idx]) {
                min_idx = i;
            }
            if (arr[i] > arr[max_idx]) {
                max_idx = i;
            }
        }

        
        int temp1 = arr[start];
        arr[start] = arr[min_idx];
        arr[min_idx] = temp1;

        if (max_idx == start) {
            max_idx = min_idx;
        }

        
        int temp2 = arr[end];
        arr[end] = arr[max_idx];
        arr[max_idx] = temp2;

        
        start++;
        end--;
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {42, 12, 8, 23, 3, 50, 17};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    bidirectionalSelectionSort(arr, size);

    printf("Sorted array:   ");
    printArray(arr, size);

    return 0;
}
