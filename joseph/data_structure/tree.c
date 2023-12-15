//program to create tree
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
};
struct node *new,*root = NULL,*lchild,*rchild,*ptr,*ptr1,*ptr2;
int flag = 0,item,a;
void insert()
{
	new = (struct node*)malloc(1*sizeof(struct node));
	printf("enter element to be inserted: ");
	scanf("%d",&item);
	new -> data = item;
	new -> lchild = NULL;
	new -> rchild = NULL;
	ptr = root;
	while (ptr != NULL)
	{
		if (item < ptr -> data) 
		{
			ptr1 = ptr;
			ptr = ptr -> lchild;
		}
		else if (item > ptr -> data)
		{
			ptr1 = ptr;
			ptr = ptr -> rchild;
		}
		else if (item == ptr -> data)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("Element is present\n");
	}
	else
	{
		if (root == NULL)
		{
			root = new;
		}
		else if (ptr1 -> data < item)
		{
			ptr1 -> rchild = new;
		}
		else 
		{
			ptr1 -> lchild = new;
		}
	}
}
	
 void inorder( struct node *ptr)
{
	if (ptr == NULL)
	{
		return;
	}
	else
	{
		inorder(ptr -> lchild);
		printf("%d\t",ptr -> data);
		inorder(ptr -> rchild);
	}
} 
struct node *succ(struct node *ptr)
{
	ptr2 = ptr -> rchild;
	if (ptr2 != NULL)
	{
		while(ptr2 -> lchild != NULL)
		{
			ptr2 = ptr2 -> lchild;
		}
	}
	return ptr2;
}
void del()
{
	ptr = root;
	int flag = 0;
	printf("enter element to be deleted: ");
	scanf("%d",&item);
	while (ptr != NULL && flag == 0)
	{
		if (item < ptr -> data) 
		{
			ptr1 = ptr;
			ptr = ptr -> lchild;
		}
		else if (item > ptr -> data)
		{
			ptr1 = ptr;
			ptr = ptr -> rchild;
		}
		else if (item == ptr -> data)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("Element is not present.\n");
	}
	else 
	{
		if(ptr -> lchild == NULL && ptr -> rchild == NULL)
		{
			if (ptr1 -> lchild == ptr)
			{
				ptr1 -> lchild = NULL;
			}
			else
			{
				ptr1 -> rchild = NULL;
			}
			free(ptr);
		}
		else if(ptr -> lchild != NULL && ptr -> rchild == NULL || ptr -> lchild == NULL && ptr -> rchild != NULL) 
		{
			if(ptr1 -> lchild == ptr)
			{
				if(ptr -> lchild != NULL)
				{
					ptr1 -> lchild = ptr -> lchild;
				}
				else
				{
					ptr1 -> rchild = ptr -> rchild;
				}
				free(ptr);
			}
			else if(ptr1 -> rchild == ptr)
			{
				if(ptr -> rchild != NULL)
				{
					ptr1 -> lchild = ptr -> lchild;
				}
				else
				{
					ptr1 -> rchild = ptr -> rchild;
				}
				free(ptr);
			}
			

		}
		
		else if (ptr -> rchild != NULL && ptr -> lchild != NULL)
		{
			ptr2 = succ(ptr);
			a = ptr2 -> data;
			ptr -> data = a;
			del(a);
			free(ptr);
		}
	}
}
void main()
{
	int ch;
	char c;
	do
	{
		printf("\n1.Insertion\n2.Deletion\n3.Display\nEnter choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: insert();
				break;
			case 2: del();
				break;
			case 3: inorder(root);
				break;
		}
		printf("\nContinue(y/n)? ");
		scanf(" %c",&c);
	}
	while (c == 'y');
}
			
		
	
	
	