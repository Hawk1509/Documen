#include<stdio.h>
int a[10];
void maxheap(int[],int,int);
void main()
{
     int n,a[10],i,j,temp;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int x=n;
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
    for(i=n/2;i>0;i--)
    {
        maxheap(a,n,i);
    }
    for(i=n;i>0;i--)
    {
        temp=a[i];
        a[i]=a[1];
        a[1]=temp;
        n--;
        if(n>1)
        {
            maxheap(a,n,1);
        }
    }
    printf("\nSorted Array: ");
        for(i=1;i<=x;i++)
        {
            printf("%d ",a[i]);
        }
}
void maxheap(int a[],int n,int i)
{
   int large=i;
   int l=2*i;
   int r=2*i+1;
   if(l<=n)
   {
       if(a[l]>a[large])
       {
           large=l;
       }
   }
   if(r<=n)
   {
       if(a[r]>a[large])
       {
           large=r;
       }
   }
   if(large!=i)
   {
       int temp=a[large];
       a[large]=a[i];
       a[i]=temp;
       if(large<=(n/2))
       {
           maxheap(a,n,large);
       }
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
