#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x){
    if (top == MAX - 1){
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x ;

}
int pop(){
    if (top == -1){
        printf("Stack underflow \n");
        return -1;
    }
    return stack[top--];
}

int peek(){
    if (top == -1){
        printf("Stack is Empty\n");
        return -1;
    }
    return stack[top];
}

int isEmpty(){
    return top == -1;
}
void display(){
    if (top == -1){
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack elements : ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int main(){
    push(5);
    push(3);
    push(2);
    push(1);
    display();
    printf("Top Element of the Stack is : %d\n", peek());
    printf("Popped Element is : %d\n", pop());
    printf("Popped Element is : %d\n", pop());
    
    display();
    if (isEmpty()){
        printf("The Stack is as Empty as your bank balance :)\n");
    }else{
        printf("The stack is not Empty\n");
    }
    return 0;
    
}
