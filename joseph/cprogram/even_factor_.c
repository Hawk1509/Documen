//program to find the even factors of a given number
#include <stdio.h>
void main()
{
int n,i;
printf("Enter number: ");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
    if(n%i==0)
    {
        printf("%d \n",i);
    }
}
}