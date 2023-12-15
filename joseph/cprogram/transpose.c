#include <stdio.h>
void main()
{
    int a[20][20],i,j,r,c,b[i][j];
    printf("Enter number rows and columns: ");
    scanf("%d%d", &r,&c);
    printf("\n values of the matrix \n");
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {   
            printf("Enter values of the matrix A%d%d: ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("\n Transpose of the matrix A \n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("%d ", b[i][j]);
            if(j==c-1)
            {
                printf("\n\n");
            }
        }
        
        
    }
    
}