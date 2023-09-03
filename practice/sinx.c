#include <stdio.h>
int pali(int);
void main()
{
    int n,d;
    printf("Enter number: ");
    scanf("%d",&n);
    d=pali(n);
    if (d==n)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not plaindorme.");
    }
}
int pali(int a)
{
    int b,c,d=0,i;
    while (a!=0)
    {
    b=a%10;
    a=a/10;
    d=(d*10)+b;
    }
    return d;
}