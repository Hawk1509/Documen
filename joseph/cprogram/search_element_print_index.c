//program to search element and print the index
#include <stdio.h>
void main()
{
    int a[25],i,index,n,num;
    printf("Enter a limit: ");
    scanf("%d",&n);
    printf("Enter elements of the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number to be searched: ");
    scanf("%d",&num);
    for (i=0;i<=n;i++)
    {
        if (num == a[i])
        {
            index=i;
            break;
        }
    }
    printf("%d",index);
}