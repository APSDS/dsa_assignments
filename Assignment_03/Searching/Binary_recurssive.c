#include <stdio.h>


int binarysearchrecursive(int arr[], int low, int high, int target) {
    
    if (low > high) {
        return -1;
    
    int mid = low + (high - low) / 2;

    
    if (arr[mid] == target) {
        return mid;
    }

    if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, high, target);
    }
  
    return binarySearchRecursive(arr, low, mid - 1, target);
}

int main() {
    
    int arr[] = {3, 5, 8, 12, 17, 23, 42};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 17;
    int result = binarysearchrecursive(arr, 0, size - 1, target);

    if (result != -1) {
        printf("Element %d found at index: %d\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
