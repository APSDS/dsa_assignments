
#include <stdio.h>

void traverse(int *p, int size)
{
    int i;

    printf("after traversing:");

    for(i = 0; i < size; i++)
    {
        printf("%d", *(p + i));
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    traverse(arr, 5);

    return 0;
}
