//prorgam to perform binary search
#include <stdio.h>
void binary()
{
	int n,i,a[10],low,high,mid,k;
	printf("Enter limit:" );
	scanf("%d",&n);
	printf("Enter values of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("Entr elemnt to be searched: ");
	scanf("%d",&k);
	
	low=0;
	high=n-1;
	while (low<high)
	{
		mid=(low+high)/2;
		if (k==a[mid])
		{
			printf("Element at %d",mid);
			break;
		}
		else if(k<a[mid]) 
		{
			high=mid-1;
		}
		else 
		{
			low = mid+1;
		}
	}
	if (low > high)
	{
		printf("Element not found.");
	}
}
//program to perform linear search
void linear()
{
	int n,i,a[20],k;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Enter elements of the array: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	printf("Enter element to be searched: ");
	scanf("%d",&k);
	i=0;
	while (i<n)
	{
		if(a[i]==k)
		{
			printf("Element at %d",i);
			break;
		}
		else
		{
			i=i+1;
		}
		
	}
	if (i==n)
	{
	printf("not valid")
	;}
}
void main()
{
	int ch;
	do
	{
		printf("\n1.Binary Search\n2.Linear Search\nEnter Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: binary();
					break;
			case 2: linear();
					break;
			default:printf("Invalid choice\n");
					break;
		}
	}
	while(ch == 'y');
}

