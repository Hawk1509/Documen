//program to calulate sum of diagonals of matrix
#include <stdio.h>
void main()
{
    int a[10][10],i,j,r,c,sum;
    
    printf("Enter rows and column");
    scanf("%d%d",&r,&c);
    
    printf("\nEnter values of the matrix\n");
    for (i=0;i<r;++i)
        for (j=0;j<c;++j)
        {   
            printf("Enter value of a%d%d:", i+1,j+1);
            scanf("%d",&a[i][j]);
        } 

    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("Sum of diagonals: %d",sum);
}


    


