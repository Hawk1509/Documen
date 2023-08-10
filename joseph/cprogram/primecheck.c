//program to check if a number is prime number or not
#include <stdio.h>
void main()
{
	int n,i=0,flag=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
		else 
		{
			flag=1;
			break;
		}
	}
	if (flag==0)
	{
		printf("Not prime number");
	}
	else 
	{
		printf("Prime number.");
	}
}
