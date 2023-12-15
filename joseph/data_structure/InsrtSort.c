//program to perform insertion sort
#include <stdio.h>
void main()
{
    int i,n,temp,j;
    int a[10];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for (i = 0;i < n;i++)
    {
        printf("Enter element at %d: ",i + 1);
        scanf("%d", &a[i]);    
    }
    for (i = 1;i < n;i++)
    {
        temp = a[i];
        j = i - 1;
        while( j >= 0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    printf("The sorted data is: ");
    for (j = 0;j<n;j++)
    {
        printf("%d ", a[j]);
    }
    printf("\n");
}
/*
OUTPUT
Enter number of elements: 5
Enter array elements: Enter element at 1: 8
Enter element at 2: 2
Enter element at 3: 9
Enter element at 4: 3
Enter element at 5: 22
The sorted data is: 2 3 8 9 22 
*/