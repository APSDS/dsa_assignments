
#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
int isfull()
{
    return top == MAX - 1;
}
int isempty(){
    return top == -1;
}


void push( int value){
    if(isfull()){
        printf("stack overflow \n");
    }
    else{
        top++;
        stack[top] = value;
        printf("pushed=%d \n", value);
    }
}

int pop(){
    if(isempty()){
        printf("no element is poppped\n");
        return -1;
    }
    else{
        int poppedval = stack[top];
        top--;
        return poppedval;
    }
}
int peek(){
    if(isempty()){
        printf("stack is empty \n");
        return -1;
    }
    return stack[top];
}
void display(){
    if(isempty()){
        int i = 0;
        printf("stack is empty\n");
        return;
    }
    printf("stack element\n");
    for (int i = top; i >= 0;i--){
        printf("%d ", stack[i]);
    }
    printf("\n");
}


int main(){
    pop();
    push(10);
    push(20);
    push(30);
    display();
    printf("popped=%d \n", pop());
    printf("top element:%d \n", peek());
    display();
    return 0;
}
