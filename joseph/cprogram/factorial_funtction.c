//program to display factorial by using a function
#include <stdio.h>
void factorial();
void main()
{
    int a;
    factorial (a);
}
void factorial (int n)
{
    int result=1,i;
    printf("Enter number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        result= result*i;
    }
    printf("Factorial of %d is %d.",n,result);
}