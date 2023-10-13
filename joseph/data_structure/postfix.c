//program to develop postfix algorithm
//int item;
#include <stdio.h>
int top = -1;
int a[10];
#define max 5
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
        item += 1;
        item = a[top];
        
    }
}
char preceed(char);
char preceed(char ch)
{
    switch(ch)
    {
        case '(':
        return 1;
        case '+':
        return 2;
        case '-':
        return 2;
        case '*':
        return 3;
        case '/':
        return 3;
        case '^':
        return 4;
        default:
        return -1; 
    }
}
void main()
{
    char item;
    printf("Enter Expression: ");
    while(item != '\0')
    {
        gets(item);
    }
    while(item != '\0')
    {
        if (item == '(')
        {
            push();
        }
        else if (item == alpha)
    }
    

}