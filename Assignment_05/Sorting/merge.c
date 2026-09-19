#include<stdio.h>

void merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],M[n2];

    for(int i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }

    for(int j=0;j<n2;j++)
    {
        M[j]=arr[m+1+j];
    }

    int i,j,k;
    i=0;
    j=0;
    k=l;

    while(i<n1&&j<n2)
    {
        if(L[i]<=M[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=M[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k]=M[j];
        j++;
        k++;
    }
}

void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
         merge(arr,l,m,r);
    }
}

int main()
{
    int data[] = {4,5,7,9,1,3,8,2,6};
    int n = sizeof(data)/sizeof(data[0]);

    mergesort(data,0,n-1);

    printf("Sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }

    return 0;
}