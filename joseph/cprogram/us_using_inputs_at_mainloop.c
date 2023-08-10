//program to take input at the main loop and display fuction output factorial
#include <stdio.h>
int fact(int);
void main()
{
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("%d",fact(n));
}
int fact(int a)
{
	int i,c=1;
	for (i=1;i<=a;i++)
	{
		c=c*i;
	}
		return c;
	
}
