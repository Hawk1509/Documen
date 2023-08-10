//program to find the largest elemest in an array
#include <stdio.h>
void main()
{
	int n,i,a[35],b;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter elements of array: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&n);
	}
	for (i=0;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	printf("%d",a[0]);
}
			
