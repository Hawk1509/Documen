//program to find reverse of number
#include <stdio.h>
void main()
{
    int n,a,r=0;
    printf("Enter number to be reversed: ");
    scanf("%d",&n);
    while (n!=0)
    {
        a=n%10;
        n=n/10;
        r=(r*10)+a;
    }
    printf("%d", r);

}