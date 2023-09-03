//prorgam to check occurence of each element in an array
#include <stdio.h>
void main()
{
    int a[25],n,i,count=0,j;
    printf("Enter limit: ");
    scanf("%d",&n);
    printf("enter element of the array: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<=i;j++)
        {
            if (a[i]==a[j])
            {
                count++;
            }
        }
    }
    printf("%d",count);

}