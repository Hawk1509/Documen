//prorgam to create a matrix
#include <stdio.h>
void main()
{
    int a[10][10],r,c,i,j,b[10][10],c[10][10],r1,c1,d[19][10],k;

    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number columns: ");
    scanf("%d",&c);

    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter elements of B%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The entered matrix is: \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter second matrix values: ");
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            printf("B%d%d",i+1;j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The second matrix is: \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            c[j][i]=a[i][j];
        }   
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("\nMultiplication of matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            d[i][j]=0;
            for (k=0;k<c1;k++)
            {
                d[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }


}