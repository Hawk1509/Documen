//program to display average using arrays
#include <stdio.h>
void main()
{
	int n,i,a[25],sum,avg;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Enter elements of the array: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		avg=sum/n;
	}
	printf("%d",avg);
}
