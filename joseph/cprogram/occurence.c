//program to find the number of occurence
#include <stdio.h>
void main()
{
	int n,a[25],count=0,i,x;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter elements in the array: ");
	for (i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	printf("Enter element to be counted: ");
	scanf("%d",&x);
	for (i=0;i<n;i++)
	{	
		if(a[i]==x)
		{	
			count=count+1;
		}
	}
	printf("%d is present %d times.",x,count);
}
		
