//prorgam to perform Selection sort
#include <stdio.h>
void swap(int *a,int *n)
{
    int temp;
    temp = *a;
    *a = *n;
    *n = temp;
}
void main()
{
    int i,n,j,min;
    int a[10];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for (i = 0;i<n;i++)
    {
        printf("Enter element at the %d position: ",i+1);
        scanf("%d", &a[i]);
    }
    for (i = 0;i<n-1;i++)
    {
        min = i;
        for(j = i + 1;j<n;j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            swap(&a[i],&a[min]);
        }
    }
    printf("The Sorted Data is:\n");
    for (i = 0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
}
/*
OUTPUT
Enter number of elements: 4
Enter element at the 1 position: 7
Enter element at the 2 position: 5
Enter element at the 3 position: 2
Enter element at the 4 position: 9
The Sorted Data is:
2 5 7 9
*/