//prorgam to purnt the fibonacci series for a given numebr
#include <stdio.h>
void main()
{
	int a=0,b=1,i,c,n;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("%d\t %d\t", a,b);
	for (i=0;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d \t",c);
	}
}
