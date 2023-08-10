//prorgam to find product of 2 matrix
#include <stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,r1,r2,c1,c2,k,multi[10][10];
    printf("Enetr number of rows and columns for the 1st matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter number row and columns 2nd matrix: ");
    scanf("%d%d",&r2,&c2);

    if (r1!=c2)
    {
        printf("not possible.");
    }
    else
    {
        printf("\nEnter elements of 1st matrix\n");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                printf("Enetr value of a%d%d \n",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }

        printf("\nEnter elements of 2nd matrix\n");
        for (i=0;i<r2;i++)
        {
            for (j=0;j<c2;j++)
            {
                printf("Enetr value of b%d%d \n",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
        }

        for (i=0;i<r1;i++)
        {
            for (j=0;j<c2;j++)
            {   
                multi[i][j]=0;
                for (k=0;k<c1;k++)
                {
                    multi[i][j]+=a[i][k]*b[k][j];   
                }
            }
        }

        for (i=0;i<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                printf("%d\t",multi[i][j]);
            }
            printf("\n");
        }
    }
}