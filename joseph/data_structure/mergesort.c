#include<stdio.h>
int a[10];
void ms(int[],int,int);
void merge(int[],int,int,int);
void main()
{
     int n,a[10],i,j;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nUnsorted Array: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    ms(a,1,n);
    printf("\nSorted Array: ");
        for(i=1;i<=n;i++)
        {
            printf("%d ",a[i]);
        }
}
void ms(int a[],int low,int high)
{
    if(low<high)
    {
       
       int mid=(low+high)/2;
       ms(a,low,mid);
       ms(a,mid+1,high);
      merge(a,low,mid,high);
    }
}
void merge(int a[],int low,int mid,int high)
{
    int i=low;
    int j=mid+1;
    int k=low;
    int b[10];
    while(i<=mid&&j<=high)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;k++;
        }
        else
        {
            b[k]=a[j];
            j++;k++;
        }
    }
    if(i>mid)
    {
        while(j<=high)
        {
            b[k]=a[j];
            j++;k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;k++;
        }
    }
    for(k=low;k<=high;k++)
    {
        a[k]=b[k];
    }
    return;
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
Sorted Array: 1 2 3 4 5 
*/
