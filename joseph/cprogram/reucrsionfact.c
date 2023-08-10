//prorgam to find find factorail of function by using recursion
#include <stdio.h>
int factorial (int);
void main()
{
	int n,i;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("%d",factorial(n));
}
int factorial (int a)
{ 
	if (a==1)
	{
		return 1;
	}
	else
	{
		return a*factorial(a-1);
	}
}

	
