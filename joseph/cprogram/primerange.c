//program to print prime numbers within a range
#include <stdio.h>
void main()
{
	int a,b,i,j,flag=1;
	printf("Enter upper and lower range limits: ");
	scanf("%d%d",&a,&b);
	for (i=b;i<=a;i++)
	{
		for (j=0;j<=i;j++)
		{
		
			if(j%i==0)
			{
				flag=0;
				break;
			}
		}
	
	if (flag==0)
	{
		printf("%d \t",i);
	}
	}
	}
