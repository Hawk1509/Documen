//program to perfrom Quick Sort
#include <stdio.h>
void swap(int *a,int *n)
{
    int temp;
    temp = *a;
    *a = *n;
    *n = temp;
}
void QS(int a[], int low, int up)
{
	int p,i,j;
	if (low < up)
	{
		p = a[low];
		i = low;
		j = up;
		while (i < j)
		{
			while (a[i] <= p)
			{
				i++;	
			}
			while (a[j] >= p)
			{
				j--;
			}
			if (i < j)
			{
				swap(&a[i], &a[j]);
			}
		}
		swap(&a[low], &a[j]);
		QS(a,low,j-1);
		QS(a,j+1,up);
	}
}
void main()
{
	int n,lower,upper,i;
	int a[10];
	printf("Enter number of elements:\n");
	scanf("%d", &n);
	for(i = 0; i < n;i++)
	{
		printf("Enter element at position %d: ",i+1);
		scanf("%d" ,&a[i]);
	}
	lower = 0;	
	upper = n - 1;
	QS(a,lower,upper);
	printf("Sorted data is: ");
    for(i = 0; i < n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
/*
OUTPUT
Enter number of elements:
4
Enter element at position 1: 5
Enter element at position 2: 9
Enter element at position 3: 1
Enter element at position 4: 8
Sorted data is: 1 5 8 9 
*/
