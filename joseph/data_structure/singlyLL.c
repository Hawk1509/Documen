//program to perform menu driven operations on singly linked list
#include <stdio.h>
#include <stdlib.h>
int item;
struct node
{
    int data;
    struct node *link;
};
struct node *new,*header = NULL,*temp,*ptr;
void begin()
{
    new = (struct node*)malloc(1*sizeof(struct node*));
    printf("Enter element to be inserted: ");
    scanf("%d",&item);
    new -> data = item;
    new -> link = NULL;
    if (new == NULL)
    {
        printf("insertion  not possible\n");
    }
    else
    {
        if (header == NULL)
        {
            header = new;
        }
        else
        {
            new -> link = header;
            header = new;
        }
    }
}
void ending()
{
    new = (struct node *)malloc(sizeof(struct node*));
    printf("Enter item to be inserted: ");
    scanf("%d",&item);
    new -> data = item;
    new -> link = NULL;
    if (new == NULL)
    {
        printf("insertion  not possible\n");
    }
    else
    {
        if (header == NULL)
            {
                header = new;
            }
        else
        {
            ptr = header;
            while (ptr -> link != NULL)
            {
                ptr = ptr -> link;
            }
            ptr -> link = new;

        }
    }
}
void inKey()
{
    int key;
    new = (struct node *)malloc(sizeof(struct node*));
    printf("Enter item to be inserted: ");
    scanf("%d",&item);
    new -> data = item;
    new -> link = NULL;
    if (new == NULL)
    {
        printf("Insertion  not possible\n");
    }
    else
    {
        printf("Enter the key: ");
        scanf("%d",&key);
        ptr = header;
        while(ptr -> data != key && ptr -> link != NULL)
        {
            ptr = ptr -> link;
        }
        if(ptr -> data == key)
        {
            if (header == NULL)
            {
                header = new;
            }
            else
            {
                new -> link = ptr -> link;
                ptr -> link = new;
                
            }
        }
        else
        {
            printf("\nElement key not found\n");
        }  
    }
}
void begDel()
{
    if(header == NULL)
    {
        printf("Deletion not possible\n");
    }
    else
    {
        temp = header;
        header=header -> link;
        free(temp);
    }
}
void endDel()
{
    if(header == NULL)
    {
        printf("list is empty");
    }
    else
    {
        if (header -> link == NULL)
        {
            temp = header;
            header = NULL;
            free(temp);
        }
        else
        {
            temp = header;
            while(temp -> link != NULL)
            {
                ptr = temp;
                temp = temp -> link;
            }
            ptr -> link = NULL;
            free(temp);   
        }
    }
}
void delKey()
{
    int key;
    if(header == NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        temp = header;
        printf("Enter Key to Deleted: ");
        scanf("%d",&key);
        while(temp -> data != key && temp -> link != NULL)
        {
            temp = temp -> link;
        }
        if(temp -> data == key)
        {
            if (header -> link == NULL)
            {
                header = NULL;
                free(temp);
            }
            else
            {
               
                //while(temp -> data != key)
                    //ptr = temp;
                    //temp = temp -> link;
                //}
                ptr -> link = temp -> link;
                free(temp);
            }   
        }
        else
        {
            printf("\nKey not found\n");
        }
    }
}
void disp()
{
    ptr = header;
    while (ptr -> link != NULL)
    {
        printf("%d\t",ptr -> data);
        ptr = ptr -> link;
    }
    printf("%d\t",ptr -> data);
}

void main()
{
    char ch,c;
    
    do
    {
        printf("\n1.Insert element at the start\n2.Insert Element at the end\n3.Insert Element at key\n4.Display\n5.Delete Element from the beginning\n6.Delete Element from the end\n7.Delete Element by the key\n\nEnter choice: ");
        scanf(" %c",&c);
        switch(c)
        {
            case '1': begin();
                        break;
            case '4': disp();
                        break;
            case '2': ending();
                        break;
            case '3': inKey();
                        break;
            case '5': begDel();
                        break;
            case '6': endDel();
                        break;
            case '7': delKey();
                        break;
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c",&ch);
    }
    while (ch == 'y');
}
/*                                                          OUTPUT

1.Insert element at the start
2.Insert Element at the end
3.Insert Element at key
4.Display
5.Delete Element from the beginning
6.Delete Element from the end
7.Delete Element by the key

Enter choice: 1 
Enter element to be inserted: 10

Do you want to continue? (y/n): y

1.Insert element at the start
2.Insert Element at the end
3.Insert Element at key
4.Display
5.Delete Element from the beginning
6.Delete Element from the end
7.Delete Element by the key

Enter choice: 1
Enter element to be inserted: 20

Do you want to continue? (y/n): y

1.Insert element at the start
2.Insert Element at the end
3.Insert Element at key
4.Display
5.Delete Element from the beginning
6.Delete Element from the end
7.Delete Element by the key

Enter choice: 3
Enter item to be inserted: 40
Enter the key: 20

Do you want to continue? (y/n): y

1.Insert element at the start
2.Insert Element at the end
3.Insert Element at key
4.Display
5.Delete Element from the beginning
6.Delete Element from the end
7.Delete Element by the key

Enter choice: 4
20      40      10
Do you want to continue? (y/n): y

1.Insert element at the start
2.Insert Element at the end
3.Insert Element at key
4.Display
5.Delete Element from the beginning
6.Delete Element from the end
7.Delete Element by the key

Enter choice: 5

Do you want to continue? (y/n): y

1.Insert element at the start
2.Insert Element at the end
3.Insert Element at key
4.Display
5.Delete Element from the beginning
6.Delete Element from the end
7.Delete Element by the key

Enter choice: 4
40      10
Do you want to continue? (y/n): n
*/
