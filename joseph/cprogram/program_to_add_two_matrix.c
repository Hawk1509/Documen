//program to add two matrix
#include <stdio.h>
void main()
{
	int n,a[10][10],b[10][10],d[10][10],r,r2,c,c2,i,j;
	printf("Enter number of rows and columns of the 1st matrix: ");
	scanf("%d%d",&r,&c);
	printf("Enter number of rows and columns of 2nd matrix: ");
	scanf("%d%d",&r2,&c2);
	if (r==r2 && c==c2)
	{
		printf("Enter elements of 1st matrix: ");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d \t",&a[i][j]);
			}
		}
		printf("Enter elements of 2nd matrix: ");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d \t",&b[i][j]);
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				d[i][j]=a[i][j]+b[i][j];
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d",d[i][j]);
			}
		printf("\n");
		}
	}
	else
		printf("not valid" );
			
}
		
