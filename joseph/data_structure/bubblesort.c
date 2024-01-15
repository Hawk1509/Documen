#include <stdio.h>
void main()
{
     int n,a[10],i,j,k,temp;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nUnsorted Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
           
        }
        printf("\n Array after pass %d : ",i+1);
            for(k=0;k<n;k++)
            {
                printf("%d ",a[k]);
            }
    }
    printf("\nSorted Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

/*
Enter no of elements:5
Enter elements:
3
1
4
5
2

Unsorted Array: 3 1 4 5 2 
 Array after pass 1 : 1 3 4 2 5 
 Array after pass 2 : 1 3 2 4 5 
 Array after pass 3 : 1 2 3 4 5 
 Array after pass 4 : 1 2 3 4 5 
Sorted Array: 1 2 3 4 5 
*/
