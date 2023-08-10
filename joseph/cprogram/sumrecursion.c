//prorgam to find the sum of 1st n natural numbers using recursion
#include <stdio.h>
int sum(int);
void main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("%d",sum(n));
}
int sum (int a)
{
	if (a==1)
	return 1;
	else
	return a+sum(a-1);
}
