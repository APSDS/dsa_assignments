#include <stdio.h>
#define SIZE 5
void enqueue(int);
void dequeue();
void display();
int item[SIZE], front = -1, rear = -1;

int main()
{
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    display();
    dequeue();
    dequeue();
    display();
    return 0;
}
void enqueue(int value){
    if(rear==SIZE-1){
        printf("full\n");
    }
    else{
        if(front==-1){
            front = 0;
        }
        rear++;
        item[rear] = value;
        printf("inserted=%d \n", value);
        }
}
void dequeue(){
    if(front==-1){
        printf("empty\n");
    }
    else{
        printf("deleted=%d \n", item[front]);
        front++;
        if(front>rear){
            front, rear = - 1;
        }
    }
}
void display(){
    if(rear==-1){
        printf("empty \n");
    }
    else{
        int i;
        printf("empty \n");
        for (i = front; i <= rear;i++){
            printf("%d ", item[i]);
        }
        printf("\n");
    }
}

