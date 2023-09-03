#include <stdio.h>
void main()
{
    int i,j,n=4;
    for (i=1;i<=n;i++)
    {
        for (j=4;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}