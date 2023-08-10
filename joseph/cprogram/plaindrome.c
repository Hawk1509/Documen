//program to check if palindrome or not
#include <stdio.h>
int pali(int);
void main()
{
	int n,b;
	printf("Enter number: ");
	scanf("%d", &n);
	n=pali(n);
	if (b==n)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}
int pali(int a)
{
	int i,b,c;
	while (a!=0)
	{
		b=a%10;
		c=(c*10)+b;
		a=a/10;
		
	}
	return c;
}

