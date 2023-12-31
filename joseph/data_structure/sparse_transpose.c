//program to display transpose of the matrix
#include <stdio.h> 
void main()
{
    int a[10][10],i,j,r,c;
    int count = 0, k = 1;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    printf("\nElements of the sparse matrix \n");
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter values of A%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if (a[i][j] != 0)
            {
                count += 1;
            }
        }
    }
    //triplet row 0 entries.
    int trp[count+1][3];
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            trp[0][0] = r;
            trp[0][1] = c;
            trp[0][2] = count;
        }
    }
    //triplet row value entries.
    printf("\nThe Triplet values are:\n");
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if (a[i][j] != 0)
            {
                trp[k][0] = i;
                trp[k][1] = j;
                trp[k][2] = a[i][j];
                k=k+1;
            }
            //printf("%d\t",trp[i][j]);
        }
        //printf("\n");
    }
    for (i=0;i<count+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",trp[i][j]);
        }
        printf("\n");
    }

	printf("\nTranspose of the matrix\n");
	int at[10][10],z = 1;
	
	at[0][0] = trp[0][1];
	at[0][1] = trp[0][0];
	at[0][2] = trp[0][2];
	for (j=0;j<c;j++)
	{
		for (i = 1;i<=trp[0][2];i++)
		{
			if (trp[i][1] == j)
			{
				at[z][0] = trp[i][1];
				at[z][1] = trp[i][0];
				at[z][2] = trp[i][2];
				z=z+1;
			}
			//printf("%d\t",at[i][j]); 
		}
		//printf("\n");    
	}
	for (i=0;i<count+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",at[i][j]);
        }
        printf("\n");
    }



}
/*
OUTPUT
Enter number of rows: 3
Enter number of columns: 4

Elements of the sparse matrix 
Enter values of A11: 0
Enter values of A12: 4
Enter values of A13: 0
Enter values of A14: 0
Enter values of A21: 0
Enter values of A22: 0
Enter values of A23: 7
Enter values of A24: 0
Enter values of A31: 6
Enter values of A32: 0
Enter values of A33: 0
Enter values of A34: 0

The Triplet values are:
3       4       3
0       1       4
1       2       7
2       0       6

Transpose of the matrix
4       3       3
0       2       6
1       0       4
2       1       7
*/









