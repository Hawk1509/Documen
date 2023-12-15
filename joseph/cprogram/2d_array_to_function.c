//program to pass 2 dimetsional arrays to functions
#include <stdio.h>
void display(int[][10],int m,int n);
void main()
{
    int a[10][10],i,j,r,c;
    printf("Enter number rows and columns: ");
    scanf("%d%d", &r,&c);
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    display(a,r,c);
}
void display(int a[][10],int m,int c)
{
    int i,j;
    for (i=0;i<m;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d", a[i][j]);

        }
        printf("\n");
    }
}