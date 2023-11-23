//program to display doubly linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node*rlink;
	struct node*llink;
};
struct node * new,*header = NULL,*rlink = NULL,*llink = NULL,*ptr1,*ptr2,*ptr;
int item;
void inbeg()
{
	//insertion using front
	new = (struct node*)malloc(1*sizeof(struct node));
	if (new == NULL)
	printf("insertion not possible\n");
	else
	{
		printf("Enter element: ");
		scanf("%d",&item);
		new -> rlink = NULL;
		new -> llink = NULL;
		new -> data = item;
		if (header == NULL)
		{
			header = new;
		}
		else
		{
			new -> rlink = header;
			header -> llink = new;
			header = new;			
		}
	}
}
void inEnd()
{
	//isertion at the end
	if (new == NULL)
	{
	printf("Insertion not possible\n");
	}
	else
	{
		new = (struct node*)malloc(1*sizeof(struct node));
		printf("Enter element: ");
		scanf("%d",&item);
		new -> rlink = NULL;
		new -> llink = NULL;
		new -> data = item;
		if (header == NULL)
		{
			header = new;
		}
		else
		{
			ptr = header;
			while (ptr -> rlink!= NULL)
			{
				ptr = ptr -> rlink;
			}
			ptr -> rlink = new;
			new -> llink = ptr;
		}
	}
}
void inKey()
{
int k;
	if (new == NULL)
	{
		printf("Insertion not possible\n");
	}
	else
	{
		new = (struct node*)malloc(1*sizeof(struct node));
		if (header == NULL)
		{
			header = new;
		}
		else
		{
			printf("Enter element after which new element shoudl be inserted: ");
			scanf("%d",&k);
		printf("Enter element: ");
		scanf("%d",&item);
		new -> rlink = NULL;
		new -> llink = NULL;
		new -> data = item;
		ptr = header;
		while (ptr -> data != k)
		{
			ptr = ptr -> rlink;
		}
		new -> llink = ptr;
		new -> rlink = ptr -> rlink;
		ptr -> rlink = new;				
		}
	}
}
void delBeg()
{
	if (header == NULL)
	{
		printf("Empty list\n");
	}
	else
	{
		ptr = header;
		header = ptr -> rlink;
		ptr -> rlink = NULL;
		free(ptr);
		
	}	
}
void delEnd()
{
	if (header == NULL)
	{
		printf("Empty List\n");
	}
	else
	{
		ptr = header;
		if (ptr -> rlink == NULL) // single element
		{
			header = NULL;
			free(ptr);
		}
		else
		{
			while (ptr -> rlink != NULL)
			{
				ptr = ptr -> rlink;
			}
			ptr -> llink -> rlink = NULL;
			free(ptr);
		}
	}
}
void delKey()
{
	int k;
	if (header == NULL)
	{
		printf("Empty List\n");
	}
	else
	{
		ptr = header;
		if (ptr -> rlink == NULL) // single element
		{
			header = NULL;
			free(ptr);
		}
		else
		{
			
			printf("Enter element to be deleted: ");
			scanf("%d",&k);
			while(ptr -> data != k)
			{
				ptr = ptr -> rlink;
			}
			/*if (ptr == header)
			{
				header = header -> rlink;
				header -> llink = NULL;
				free(ptr);
			}*/
			if(ptr -> data == k && ptr -> rlink == NULL) //deletion at the end element
			{
				delEnd();
			}
			else if (ptr -> data == k && ptr -> llink == NULL)
			{
				delBeg();
			}
			else
			{
				ptr1 = ptr -> llink;
				ptr1->rlink = ptr -> rlink;
				ptr -> rlink = NULL;
				ptr -> llink = NULL;
				free(ptr);
			}
		}
	}
}
//display
void disp()
{
	ptr = header;
	while (ptr -> rlink != NULL)
	{
		printf("%d\t",ptr -> data);
		ptr = ptr -> rlink;
	}
	printf("%d\n",ptr -> data);
}	
void main()
{
	char ch = 'y';
	int c;
	do
	{
		printf("1.INSERT AT FRONT\n2.INSERT AT END\n3.INSERT AFTER KEY VALUE\n4.DELETION AT FRONT\n5.DELETION AT END\n6.DELETION OF THE KEY VALUE\n7.DISPLAY\nENTER CHOICE: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1: inbeg();
					break;
			case 2: inEnd();
					break;
			case 3: inKey();
					break;
			case 4: delBeg();
					break;
			case 5: delEnd();
					break;
			case 6: delKey();
					break; 
			case 7: disp();
					break;
			default: printf("invalid choice\n");
		}
		printf("do you wish to continue(y/n)? ");
		scanf(" %c",&ch);
	}
	while (ch == 'y');
}	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
