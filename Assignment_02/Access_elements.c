#include <stdio.h>
#include <stdbool.h>

int main() {
    int array1D[] = {10, 20, 30, 40, 50};
    int size1D = sizeof(array1D) / sizeof(array1D[0]);

    int matrix2D[3][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };
    int rows = 3, cols = 4;
    int target1D = 30;
    int target2D = 7;
    
    bool found1D = false;
    bool found2D = false;


    printf("=== Searching in 1D Array for %d ===\n", target1D);
    for (int i = 0; i < size1D; i++) {
        if (array1D[i] == target1D) {
            printf("Found %d at index [%d]\n", target1D, i);
            found1D = true;
            break; 
        }
    }
    if (found1D) {
        printf("%d was not found in the 1D array.\n", target1D);
    }
    printf("\n");

    
    printf("=== Searching in 2D Array for %d ===\n", target2D);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix2D[i][j] == target2D) {
                printf("Found %d at coordinates: Row [%d], Column [%d]\n", target2D, i, j);
                found2D = true;
                break; 
            }
        }
    }
    if (found2D) {
        printf("%d was not found in the 2D array.\n", target2D);
    }

    return 0;
}
