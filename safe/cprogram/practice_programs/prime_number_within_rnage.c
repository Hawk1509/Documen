//prorgam to print prime number withun a range
#include <stdio.h>
void main()
{
	int a,b,i,j;
	printf("Enetr numebrs: ");
	scanf("%d%d",&a,&b);
	for (i=a;i<b;i++)
	{
		for (j=2;j<=i;j++)
		{
			if (i%j==0)
			break;
		}
		if (i==j)
		{
			printf ("%d",j);
		}
	}
}
	
