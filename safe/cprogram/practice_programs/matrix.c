//program for matrix aditiom
#include <stdio.h>
void main()
{
int a[10][10],b[10][10],i,j,r,c,s[10][10];
printf("row and cloumn of matrix: ");
scanf("%d%d",&r,&c);

printf(" \n Enter elemetns 1st matirx \n ");
for (i=0;i<r;++i)
	for (j=0;j<c;++j)
	{	
		printf("Enetr elements a%d%d: ",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
	printf(" \n Enter elemetns 2nd matirx \n");
for (i=0;i<r;++i)
	for (j=0;j<c;++j)
	{	printf("Enetr elements b%d%d: ",i+1,j+1);
		scanf("%d",&b[i][j]);
	}

	// adding two matrices
for (i = 0; i < r; ++i)
{
	for (j = 0; j < c; ++j)
	{
		s[i][j] = a[i][j] + b[i][j];
     	}	
}

  // printing the result
printf("\nSum of two matrices: \n");
for (i = 0; i < r; ++i)
{
	for (j = 0; j < c; ++j) 
	{
		printf("%d   ", s[i][j]);
      		if (j == c - 1) 
      		{
        		printf("\n\n");
      		}
    	}
}
	/*
	printf("sum = ");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d",s[i][j]);
		}
		printf("\n");
	}*/
}

	
