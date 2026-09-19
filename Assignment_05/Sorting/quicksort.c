#include<stdio.h>

void swap(int array[],int a,int b)
{
    int temp=array[a];
    array[a]=array[b];
    array[b]=temp;
}

int partition(int array[],int low,int high)
{
    int pivot=array[high];
    int i=low-1;

    for(int j=low;j<high;j++)
    {
        if(array[j]<=pivot)
        {
            i++;
            swap(array,i,j);
        }
    }

    swap(array,i+1,high);
    return i+1;
}

void quicksort(int array[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(array,low,high);
        quicksort(array,low,pi-1);
        quicksort(array,pi+1,high);
    }
}

int main()
{
    int data[] = {4,5,7,9,11,3,8,2,6};

    quicksort(data,0,8);

    for(int i=0;i<9;i++)
    {
        printf("%d ",data[i]);
    }

    return 0;
}