//program to delete element from array 
#include <stdio.h>
void main()
{
	int n,a[25],i,e,index,flag=1;
	printf("Enter limit: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be deleted: ");
	scanf("%d",&e);
	for (i=0;i<n;i++)
	{
		if (a[i]==e)
		{	
			flag=0;
			break;
		}
	}
	if (flag=1)
	{
		printf("420error not found!");
	}
	else
	{
		index=a[i];
	}
	for(i=index;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	printf("New array is: ");
	for (i=0;i<n-1;i++)
	{
		printf("%d \t",a[i]);
	}
}
