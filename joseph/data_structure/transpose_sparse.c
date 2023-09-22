//program to diplay th traspose of the triplet matrix
//program to input a sparse matrix and display a triplet matrix
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
    
    trp[0][0] = r;
    trp[0][1] = c;
    trp[0][2] = count;
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
        printf("\n");
    }
    for (i=0;i<count+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",trp[i][j]);
        }
        printf("\n");
    }

    //transpose of the triplet matrix
    printf("\nTranspose values of the matrix are:\n");
    int at[10][10];
    at[0][0] = a[0][1];
    at[0][1] = a[0][0];
    at[0][2] = a[0][2];
    for (j=0;j<c;j++)
    {
        for(i=1;i<a[0][2];i++)
        {
            if (a[i][1] == j)
            {
                at[0][0] = a[i][1];
                at[0][1] = a[i][0];
                at[0][2] = a[i][2];
            }
        }
    }
    for (i=0;i<r;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",at[i][j]);
        }
        printf("\n");
    }
}