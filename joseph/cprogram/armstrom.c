//program to check if the numbers are armstrom
#include <stdio.h>
void main()
{
	int n,r=0,c,b,a;
	printf("Enter number: ");
	scanf("%d",&n);
	c=n;
	while (n!=0)
	{
		a=n%10;
		b=a*a*a;
		r=r+b;
		n=n/10;
	}
	//printf("%d",r);
	if (c==r)
	printf("armstrom");
	else
	printf("not armstrom");
}
		
