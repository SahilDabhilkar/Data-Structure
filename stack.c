//
//  stack.c
//  College 
//
//  Created by Sahil Dabhilkar on 25/08/22.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stack[5];
int top;
int max_size=5;
int i;
bool isEmpty(void);
int pop(void);
int peek(void);
int push(int Element);
bool isFull(void);
int main()
{
    top=-1;
    
    push(5);
    push(10);
    push(15);
    push(20);
    push(56);
    
    isEmpty();
    pop();
    for (i=0; i<max_size; i++) {
        printf("Stack is :%d\n",stack[i]);
    }
    peek();
    
    return 0;
}


bool isFull()
{
    if (top==max_size-1) {
        return true;
    }
    else
    {
        return false;
    }
}

int push(int element)
{
    
    if (isFull()) {
        printf("Stack is Full");
    }
    else
    {
        top++;
        stack[top]=element;
        printf("Pushed :%d\n",stack[top]);
        
    }
    
    return 0;
}
bool isEmpty()
{
    if (top==-1) {
        return true;
    }
    return false;
}

int pop()
{
    if (isEmpty()) {
        printf("Cann,t perforn pop function");
    }
    else
    {
    printf("Popped :%d\n",stack[top]);
    stack[top]=0;
    top--;
    }
    return 0;
}
int peek()
{
    printf("Stack peek :%d\n",stack[top]);
    return 0;
}


 
