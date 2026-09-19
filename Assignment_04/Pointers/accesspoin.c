#include<stdio.h>
int main(){
     int arr[10]={10,20,30,40,50,60,70,80,90};
     int ptr*=arr;
     int ind;
     printf("enter the index which you want to print");
     scanf("%d" &ind) ;
     if(ind>0 && ind<10){
            printf("%d",*(ptr+ind));
     }
     else{
            printf("index not found");
     }
     return 0;
}
