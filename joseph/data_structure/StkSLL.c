//prorgam to perfrom operations on stack using singly linked list
#include <stdio.h>
#include <stdlib.h>
int item;
struct node
{
    int data;
    struct node *link;
};
struct node *new,*header = NULL,*temp,*ptr;
void PUSH()
{
    new = (struct node*)malloc(1*sizeof(struct node*));
    printf("Enter element to be inserted: ");
    scanf("%d",&item);
    new -> data = item;
    new -> link = NULL;
    if (new == NULL)
    {
        printf("FULL\n");
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
void POP()
{
    if(header == NULL)
    {
        printf("EMPTY\n");
    }
    else
    {
        temp = header;
        header=header -> link;
        free(temp);
    }
}
void Display()
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
        printf("\n1.PUSH\n2.POP\n3.Display\n\nEnter choice: ");
        scanf(" %c",&c);
        switch(c)
        {
            case '1': PUSH();
                        break;
            case '2': POP();
                        break;
            case '3':Display();
                        break;
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c",&ch);
    }
    while (ch == 'y');
}
/*                                                          OUTPUT

1.PUSH
2.POP
3.Display

Enter choice: 1
Enter element to be inserted: 34

Do you want to continue? (y/n): y

1.PUSH
2.POP
3.Display

Enter choice: 1
Enter element to be inserted: 565

Do you want to continue? (y/n): y

1.PUSH
2.POP
3.Display

Enter choice: 1 
Enter element to be inserted: 578654

Do you want to continue? (y/n): y

1.PUSH
2.POP
3.Display

Enter choice: 2

Do you want to continue? (y/n): y

1.PUSH
2.POP
3.Display

Enter choice: 3
565     34
Do you want to continue? (y/n): n
*/