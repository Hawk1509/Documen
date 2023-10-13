//prorgam to display postfix
#include <stdio.h>
#define max 5
void push(char);
char pop();
void preceed();
char a[10];
int top = -1;
void push(char p)
{
    if (a[top] == max - 1)
    {
        printf("Stack is full");
    }
    else
    {
        top += 1;
        a[top] = p;
    }
}
char pop()
{
    if (top == -1)
    {
        printf("Stack is Empty");
    }
    else
    {
        char del = a[top];
        del -= 1;
        return del;
    }
}
void preceed(char s)
{
    switch(s)
    {
        case '+':
        case '-':
        return 1;
        case '*':
        case '/':
        return 2;
        case '^':
        return 3;
        default:
        return -1;
    }
}
void main()
{
    char item[10];
    printf("Enter expression: ");
    gets (item);
    while(item != '\0')
    {
        if (item == '(')
        {
            push('(');
        }
        else if (item == )
    }
}
