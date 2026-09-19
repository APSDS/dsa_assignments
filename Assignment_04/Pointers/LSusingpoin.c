#include <stdio.h>
int linearSearchPointers(int *ptr, int size, int target) {
    for (int i = 0; i < size; i++) {
        // ptr[i] is the pointer shorthand for *(ptr + i)
        if (ptr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {5, 12, 8, 23, 42, 17, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 42;

    
    int result = linearSearchPointers(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index: %d\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
