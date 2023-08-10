//program to print sum of 1st n natural numbers by using a function
#include <stdio.h>
int sum(int);
void main()
{
	int n;
	printf("Enter a limit: ");
	scanf("%d" ,&n);
	printf("%d",sum(n));
}
int sum(int a)
{
	int i,b;
	for (i=0;i<=a;i++)
	{
		b=b+i;
	}
	return b;
}
	
	
