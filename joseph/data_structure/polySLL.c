//program to perform Polynomial Addition using singly linked list
#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int c, e;
	struct node * link;
};
struct node *new, *pheader = NULL, *qheader = NULL, *rheader = NULL, *ptr1, *ptr2, *ptr3;
void main()
{
	int coef,expr,n,i,m;
	//1st polynomial values
	printf("\nFRIST POLYNOMIAL VALUES\n");
	printf("ENTER LIMIT: ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter coefficient and expression values %d term: ",i+1);
		scanf("%d",&coef);
		scanf("%d",&expr);
		new = (struct node*)malloc(sizeof(struct node));
		ptr1 -> c = coef;
		ptr1 -> e = expr;
		ptr1 -> link = NULL;
		
		for(i=0;i<n;i++)
		{
			printf("%dx^%d+",ptr1->c,ptr1->e);
			//ptr1 = ptr1 -> link;
		}
	}

	//2nd polynomial values
	printf("\nSECOND POLYNOMIAL VALUES\n");
	printf("ENTER LIMIT: ");
	scanf("%d",&m);
	for(i=0; i<m; i++)
	{
		printf("Enter coefficient and expression values %d term: ",i+1);
		scanf("%d ",&coef);
		scanf("%d",&expr);
		
	}
	ptr2 = (struct node*)malloc(sizeof(struct node));
	ptr2 -> c = coef;
	ptr2 -> e = expr;
	ptr2 -> link = NULL;
		
	while(ptr1 != NULL && ptr2 != NULL)
	{
		if(ptr1 -> e == ptr2-> e)
		{
			new = (struct node*)malloc(sizeof(struct node));
			new -> c = ptr1 -> c + ptr2 -> c;
			new -> e = ptr1 -> e;
			new -> link = NULL;
			if(rheader == NULL)
			{
				rheader = ptr3 = NULL;
			}
			else
			{
				ptr3 -> link = new;
				ptr3 = new;
			}
			ptr1 = ptr1 -> link;
			ptr2 = ptr2 -> link;
			}
		
		else if(ptr1 -> e > ptr2-> e)
		{
			new = (struct node*)malloc(sizeof(struct node));
			new -> c = ptr1 -> c;
			new -> e = ptr1 -> e;
			new -> link = NULL;
			if(rheader == NULL)
			{
				rheader = ptr3 = NULL;
			}
			else
			{
				ptr3 -> link = new;
				ptr3 = new;
			}
			ptr1 = ptr1 -> link;
		}
		else if(ptr1 -> e < ptr2-> e)
		{
			new = (struct node*)malloc(sizeof(struct node));
			new -> c = ptr2 -> c;
			new -> e = ptr2 -> e;
			new -> link = NULL;
			if(rheader == NULL)
			{
				rheader = ptr3 = NULL;
			}
			else
			{
				ptr3 -> link = new;
				ptr3 = new;
			}
			ptr2 = ptr2 -> link;
		}
		while(ptr1 != NULL)
		{
			new = (struct node*)malloc(sizeof(struct node));
			new -> c = ptr1 -> c;
			new -> e = ptr1 -> e;
			new -> link = NULL;
			if(rheader == NULL)
			{
				rheader = ptr3 = NULL;
			}
			else
			{
				ptr3 -> link = new;
				ptr3 = new;
			}
			ptr1 = ptr1 -> link;
		}
		
		while(ptr2 != NULL)
		{
			new = (struct node*)malloc(sizeof(struct node));
			new -> c = ptr2 -> c;
			new -> e = ptr2 -> e;
			new -> link = NULL;
			if(rheader == NULL)
			{
				rheader = ptr3 = NULL;
			}
			else
			{
				ptr3 -> link = new;
				ptr3 = new;
			}
			ptr2 = ptr2 -> link;
		}	
			} 
		}	
	

