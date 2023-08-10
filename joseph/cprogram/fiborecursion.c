//program to display fibonacci series using recursion
#include <stdio.h>
int fib(int);
void main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("%d",fib(n));
}
int fib(int a)
{
	if (a==1 || a==0)
	return a;
	else
	return fib(a-1)+fib(a-2);
}
	
