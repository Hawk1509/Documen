//program to perform Polynomial Addition using singly linked list
#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int c, e;
	struct node * link;
};
struct node *new, *pheader = NULL, *qheader = NULL, *rheader = NULL, *ptr1 = NULL, *ptr2 = NULL, *ptr3;

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
	    new -> c = coef;
		new -> e = expr;
		new -> link = NULL;
        if (pheader == NULL)
        {
            ptr1 = pheader = new;
        }
        else
        {
                ptr1 -> link = new;
                ptr1 = new;
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
	new = (struct node *)malloc(sizeof(struct node));
	new -> c = coef;
	new -> e = expr;
	new -> link = NULL;
    if (qheader == NULL)
    {
        ptr2 = qheader = new;
    }
    else
    {
        ptr2 -> link = new;
        ptr2 = new;
    }
		
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
				rheader = ptr3 = new;
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
				rheader = ptr3 = new;
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
				rheader = ptr3 = new;
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
				rheader = ptr3 = new;
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
				rheader = ptr3 = new;
			}
			else
			{
				ptr3 -> link = new;
				ptr3 = new;
			}
			ptr2 = ptr2 -> link;
		}	
	} 
    while(rheader != NULL)
    {
        printf("%dx^%d+",rheader -> c,rheader -> e);
        rheader = rheader -> link;
    }
    if(rheader != NULL)
    printf("%dx^%d",rheader -> c,rheader -> e);

        
}	
	