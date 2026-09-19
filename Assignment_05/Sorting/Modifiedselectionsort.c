#include <stdio.h>

// Function to perform Bidirectional Selection Sort
void bidirectionalSelectionSort(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int min_idx = start;
        int max_idx = start;

        // 1. Find both the minimum and maximum elements in the array
        for (int i = start + 1; i <= end; i++) {
            if (arr[i] < arr[min_idx]) {
                min_idx = i;
            }
            if (arr[i] > arr[max_idx]) {
                max_idx = i;
            }
        }

        // 2. Swap the minimum element with the start element
        int temp1 = arr[start];
        arr[start] = arr[min_idx];
        arr[min_idx] = temp1;

        // CRUCIAL CHECK: If the maximum element was at 'start', its new position
        // is now at 'min_idx' because of the swap we just completed.
        if (max_idx == start) {
            max_idx = min_idx;
        }

        // 3. Swap the maximum element with the end element
        int temp2 = arr[end];
        arr[end] = arr[max_idx];
        arr[max_idx] = temp2;

        // 4. Move the boundaries inward
        start++;
        end--;
    }
}

// Helper function to print the array
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
