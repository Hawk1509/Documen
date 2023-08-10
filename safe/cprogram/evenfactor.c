//program to calculate the even factors of a number.
#include <stdio.h>
void main()
{
	int n,i,s;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("Factorials of %d are: ",n);
	for (i=0;i<=n;i++)
	{
		if (i%2==0 || n%i==0)
		{
			s=i;
			printf("%d \n",s);
		}
	}
}
