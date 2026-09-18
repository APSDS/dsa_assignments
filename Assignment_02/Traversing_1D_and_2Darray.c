#include <stdio.h>

void traverse1D(int arr[], int size) {
    printf("--- 1D Array Traversal ---\n");
    for (int i = 0; i < size; i++) {
        printf("Element at index [%d]: %d\n", i, arr[i]);
    }
    printf("\n");
}

void traverse2D(int matrix[3][4], int rows, int cols) {
    printf("--- 2D Array Traversal ---\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    
    int array1D[] = {10, 20, 30, 40, 50};
    int size1D = sizeof(array1D) / sizeof(array1D[0]);

    
    int matrix2D[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    
    traverse1D(array1D, size1D);
    traverse2D(matrix2D, 3, 4);

    return 0;
}
