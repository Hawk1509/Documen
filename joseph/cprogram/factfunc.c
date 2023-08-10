//program to find factorial by user defined fuction
#include <stdio.h>
void fact();
void main()
{

	fact();
}
void fact()
{
	int a=1,i;
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	printf("%d", a);
}
