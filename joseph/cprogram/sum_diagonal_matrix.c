//program to find the sum of the diagonal values of the matrix
#include <stdio.h>
void main()
{
	int r,c,r1,c1,a[10][10],b[10][10],i,j,s;
	printf("Enetr number of row and coloumns in 1st matrix: ");
	scanf("%d%d",&r,&c);
	printf("Enter number of rows and columns of 2nd matrix: ");
	scanf("%d%d",&r1,&c1);
	if(r==r1 && c==c1)
	{
		printf("Enter elements of A: ");
		for(i=0;i<r;i++)
		{	
			for(j=0;j<c;j++)
			{
				scanf("%d \t",&a[i][j]);
			}
		}
		printf("Enter elements of B: ");
		for(i=0;i<r1;i++)
		{	
			for(j=0;j<c1;j++)
			{
				scanf("%d \t",&b[i][j]);
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i==j)
				s=s+a[i][j];
			}
		}
	}
	else
	{printf("not possible.");}
	printf("%d",s);
	
}
