//prorgam to find prime numbers within a range
#include <stdio.h>
void main()
{
	int a,b,i,j;
	printf("Enter lower and upper range: ");
	scanf("%d%d",&a,&b);
	for (i=a;i<=b;i++)
	{	
		
		for (j=2;j<i;j++)
		{
			if (i%j==0)
			{	
				break;
			}
		}
	
		if (i==j)
		{
			printf("%d \n",i);
		}
	}
		
	
}
