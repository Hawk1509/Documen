//program to merge two arrays
#include <stdio.h>
void main()
{
	int n,a[25],b[25],i,c[35];
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter elements of 1st array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter elements of 2nd array: ");
	for (i=0;i<n;i++)
	{
		scanf("%d", &b[i]);
	}
/*	for (i=0;i<n;i++)
	{
		if(a[i]==n-1)
		{
			b[i]=a[i];
		}
	}
	for (i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}	
}
*/
