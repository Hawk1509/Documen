//program to read element to array and createe another aray with elements divisible by 7
#include <stdio.h>
void main()
{
	int a[25],b[25],n,i;
	printf("Enetr limit:");
	scanf("%d", &n);
	printf("Enter numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		if(a[i]%7==0)
		{
			b[i]=a[i];
		}
	}
	printf("Array of numbers divisible by 7 are: %d \n",b[i]);
}
	
