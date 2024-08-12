#include <stdio.h>
#include <stdlib.h>
#define Max 5

int Queue[Max];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if (rear == Max - 1)
    {
        printf("Queue is Full");
        return;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        Queue[++rear] = data;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is Empty");
        return;
    }
    else
    {
        printf("%d has been dequeued from the Queue ", Queue[front++]);
        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is Empty");
        return;
    }
    for(int i = front; i <= rear; i++ ){
        printf("%d\t",Queue[i]);
    }
}

int main(){
    enqueue(66);
    enqueue(88);
    enqueue(99);
    enqueue(44);
    enqueue(55);
    enqueue(55);
    // display();
}
