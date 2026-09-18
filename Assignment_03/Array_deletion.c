#include <stdio.h>

int delete_at_index(int arr[], int size, int delete_index){
    if (delete_index < 0 || delete_index >= size) {
        printf("Error: Invalid index.\n");
        return size; 
    }

    
    for (int i = delete_index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    
    return size - 1;
}


void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;                        
    int index_to_delete = 2;             

    printf("Original array: ");
    print_array(arr, size);

    
    size = delete_at_index(arr, size, index_to_delete);

    printf("Array after deletion: ");
    print_array(arr, size);

    return 0;
}
