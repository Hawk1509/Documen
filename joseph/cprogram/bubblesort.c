//prorgam on bubble sort
#include <stdio.h>
void main()
{
	int n,i,a[34],j,t;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter elemnts in array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
			
			
