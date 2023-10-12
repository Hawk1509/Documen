//program to develop postfix algorithm
//int item;
#include <stdio.h>
int top = -1;
int a[10];
#define max 5;
void push();
void pop();
void display();
char item, pstfx;
void push()
{
    if (top == max - 1)
    {
        printf("Stack is full");
    }
    else
    {
        top += 1;
        a[top] = item;
    }
    
}
void pop()
{
    if (top == -1)
    {
        printf("Empty stack");
    }
    else
    {
        
    }
}
