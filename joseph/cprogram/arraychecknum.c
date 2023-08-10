//program to check if 5 is present in an array
#include <stdio.h>
void main()
{
	int n,x[25],a,i;
	printf("Enter a limit: ");
	scanf("%d",&n);
	printf("Enter values of array: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		if(x[i]==5)
		{
			printf("present");
			break;
		}
		
	}
}
		
