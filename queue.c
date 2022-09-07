//
//  queue.c
//  collage
//
//  Created by Sahil Dabhilkar on 28/08/22.
//

#include <stdio.h>
#include <stdbool.h>


int a[10];
int max_size=10;
int front =-1;
int rear=-1;
int i;
int num;

int enqueue(int element);
int viewqueue(void);
int isFull(void);
int isEmpty(void);
int getFront(void);
int getRear(void);
int dequeue(void);
int main()
{
    front=-1;
    rear=-1;
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    enqueue(25);
    enqueue(30);
    enqueue(35);
    enqueue(40);
    enqueue(45);
    enqueue(50);
    viewqueue();
    dequeue();
    viewqueue();
    return 0;
}
int enqueue(int element)
{
    if (isFull()) {
        printf("The Queue is Full \n");
    }
    else
    {
        if (front==-1) {
            front=0;
        }
        rear=rear+1;
        a[rear]=element;
        printf("Enqueued :%d\n",a[rear]);
    }
    return 0;
}
int isFull()
{
    if (rear==max_size-1) {
        return true;
    }
    return false;
}
int viewqueue()
{
    for (i=0; i<max_size; i++) {
        printf("Queue =%d\n",a[i]);
    }
    return 0;
}
int getFront()
{
    printf("Front Queue is :%d\n",a[front]);
    return 0;
}
int getRear()
{
    printf("Rear Queue is :%d\n",a[rear]);
    return 0;
}
int dequeue()
{
    printf("Enter the elemnt you want to delete :");
    scanf("%d",&num);
    for (i=num-1; i<max_size-1; i++) {
        a[i]=a[i+1];
    }
    max_size--;
    return 0;
}






