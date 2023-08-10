//program to print sum of n numbers
#include <stdio.h>
void main()
{
	int n,i,sum;
	printf("Enter a numbers: ");
	scanf("%d", &n);
	for (i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum of %d numers are: %d",n,sum);
}
