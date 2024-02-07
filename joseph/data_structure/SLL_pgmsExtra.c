#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * link;
}*new, *header = NULL, *ptr,*ptr1,*ptra = NULL,*ptrb = NULL,*ptrz = NULL;
void sum()
{
    int n;
    printf("Enter number of terms to be inserted: ");
    scanf("%d", &n);
    int i = 0;
    while (i < n)
    {
        int item; 
        printf("Enetr item to be inserted: ");
        scanf("%d", &item);
        new = (struct node *)malloc(sizeof(struct node));
        new -> data = item;
        new -> link = NULL;
        if (header == NULL )
        {
            header = new;
        }
        else
        {
            ptr = header;
            while(ptr -> link != NULL)
            {
                ptr = ptr -> link;
            }
            ptr -> link = new;
        }
        i++;
    }
    int nSum = 0,pSum = 0;
    ptr = header;
    while(ptr != NULL)
    {
        if(ptr -> data > 0)    
        {
            pSum += ptr -> data;
        }
        else    
        {
            nSum += ptr -> data;
        }
        ptr = ptr -> link;
    }
    ptr = header;
    printf("The Singly linked list is:\n");
    while(ptr != NULL)
    {
        printf("%d\t",ptr -> data);
        ptr = ptr -> link;
    }
    printf("\n");
    printf("Sum of Postive Number: %d\nSum of Negative Numbers: %d\n",pSum,nSum);
}
void delMid()
{
    int x;
    int c = 0;
    ptr = header;
    while(ptr != NULL)
    {
        c++;
        ptr1 = ptr;
        ptr = ptr -> link; 
    }
    x = c/2;
    int i = 0;
    if(c == 0|| c == 1)
    {
        free(header);
        header = NULL;
    }
    else{
        ptr = header;
        for(i = 0; i < x - 1; i++)
        {
            ptr1 = ptr;
            ptr = ptr -> link;
        }
        ptr1 -> link = ptr -> link;
        ptr -> link = NULL;
        free(ptr);
        }
    ptr = header;
    printf("The Singly linked list is:\n");
    while(ptr != NULL)
    {
        printf("%d\t",ptr -> data);
        ptr = ptr -> link;
    }
    printf("\n");
}
void swap()
{
    ptr = header;
    printf("The Singly linked list is:\n");
    while(ptr != NULL)
    {
        printf("%d\t",ptr -> data);
        ptr = ptr -> link;
    }
    printf("\n");
    int a,b;
    printf("Enter elements to be swapped: ");
    scanf("%d%d",&a,&b);
    if(header == NULL)
    {
        printf("Empty list\n");
    }
    ptr = header;
    while( ptr != NULL)
    {
        if (ptr -> data == a)
            ptra = ptr;
        else if(ptr -> data == b)
        {
            ptrb = ptr;
        }
        ptr = ptr -> link;
    }
    int temp;
    if(ptra != NULL && ptrb != NULL)
    {
        temp = ptra -> data;
        ptra -> data = ptrb -> data;
        ptrb -> data = temp;
        printf("Swapping complete\nThe singly linked is\n");
            ptr = header;
    printf("The Singly linked list is:\n");
    while(ptr != NULL)
    {
        printf("%d\t",ptr -> data);
        ptr = ptr -> link;
    }
    printf("\n");
    }
    
}
void main()
{
    int c = 0;
    char ch;
    do
    {//hi
        printf("1.Sum of +ve & -ve\n2.Delete middle element\n3.swap two numbers\n4.Exit(0)\nEnter choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1: sum();
                    break;
            case 2: delMid();
                    break;
            case 3: swap();
                    break;
        }
        printf("Wish to continue? ");
        scanf("%s", &ch);
    }
    while(ch == 'y');
}

 