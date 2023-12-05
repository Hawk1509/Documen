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
	char c = 'y';
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
		printf("\nDo you wish to Continue(y/n)? ");
		scanf(" %c",&c);
	}
	while(c == 'y');
}
/*
OUTPUT

1.Binary Search
2.Linear Search
Enter Choice: 1
Enter limit:4
Enter values of the array: 1
3
5
6
Entr elemnt to be searched: 5
Element at 2
Do you wish to Continue(y/n)? y

1.Binary Search
2.Linear Search
Enter Choice: 2
Enter limit: 4
Enter elements of the array: 1
3
4
5
Enter element to be searched: 4
Element at 2
Do you wish to Continue(y/n)? n
*/
