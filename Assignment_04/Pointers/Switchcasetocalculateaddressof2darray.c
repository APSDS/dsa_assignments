#include <stdio.h>

int main() {
  
    int base_address = 1000; 
    int data_size = sizeof(int); 
    
    int total_rows = 3;
    int total_cols = 4;

    
    int i = 1;
    int j = 2; 
    
    int choice;
    int calculated_address = 0;

    printf("2D Array Specifications:\n");
    printf("Base Address: %d | Total Rows: %d | Total Cols: %d\n", base_address, total_rows, total_cols);
    printf("Finding address for index [%d][%d]\n\n", i, j);

    printf("Select Storage Order:\n");
    printf("1. Row-Major Order (RMO)\n");
    printf("2. Column-Major Order (CMO)\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    
    switch (choice) {
        case 1:
          
            calculated_address = base_address + data_size * (i * total_cols + j);
            printf("\n[Row-Major Order] Address: %d\n", calculated_address);
            break;

        case 2:
      
            calculated_address = base_address + data_size * (j * total_rows + i);
            printf("\n[Column-Major Order] Address: %d\n", calculated_address);
            break;

        default:
            printf("\nInvalid choice! Please select 1 or 2.\n");
            break;
    }

    return 0;
}
