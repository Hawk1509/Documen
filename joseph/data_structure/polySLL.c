/*
Program to perform polynomial addition using linked list.
@author Joseph Paul,Roll no:41
*/
#include<stdio.h>
#include<stdlib.h>
struct poly
{
	int c,e;
	struct poly *link;
};
struct poly *header,*pheader=NULL,*qheader=NULL,*rheader=NULL,*ptr,*ptr1,*ptr2,*ptr3,*new;
struct poly* getnode();
void main()
{
	int i,n1,n2,x,y;
	printf("Enter details of first polynomial:");
	printf("\nEnter no.of terms:");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		printf("Enter coefficient of term %d:",i+1);
		scanf("%d",&x);
		printf("Enter exponent of term %d:",i+1);
		scanf("%d",&y);
		new=getnode();
		new->c=x;
		new->e=y;
		new->link=NULL;
		if(pheader==NULL)
		{
			pheader=new;
		}
		else
		{
			ptr=pheader;
			while(ptr->link!=NULL)
			{
				ptr=ptr->link;
			}
			ptr->link=new;
		}
	}
	printf("Entered polynomial:");
	ptr=pheader;
	printf("%dx^%d",ptr->c,ptr->e);
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
		if((ptr->c)>0)	
		{
			printf("+%dx^%d",ptr->c,ptr->e);
		}
		else
		{
			printf("%dx^%d",ptr->c,ptr->e);
		}	
	}
	printf("\nEnter details of second polynomial:");
	printf("\nEnter no.of terms:");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		printf("Enter coefficient of term %d:",i+1);
		scanf("%d",&x);
		printf("Enter exponent of term %d:",i+1);
		scanf("%d",&y);
		new=getnode();
		new->c=x;
		new->e=y;
		new->link=NULL;
		if(qheader==NULL)
		{
			qheader=new;
		}
		else
		{
			ptr=qheader;
			while(ptr->link!=NULL)
			{
				ptr=ptr->link;
			}
			ptr->link=new;
		}
	}
	printf("Entered polynomial:");
	ptr=qheader;
	printf("%dx^%d",ptr->c,ptr->e);
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
		if((ptr->c)>0)	
		{
			printf("+%dx^%d",ptr->c,ptr->e);
		}
		else
		{
			printf("%dx^%d",ptr->c,ptr->e);
		}	
	}
	ptr1=pheader,ptr2=qheader,ptr3=rheader=NULL;
	while(ptr1!=NULL && ptr2!=NULL)
	{
		if(ptr1->e==ptr2->e)
		{
			new=getnode();
			new->c=ptr1->c+ptr2->c;
			new->e=ptr1->e;
			new->link=NULL;
			if(rheader==NULL)
			{
				rheader=ptr3=new;
			}
			else
			{
				ptr3->link=new;
				ptr3=new;
			}
			ptr1=ptr1->link;
			ptr2=ptr2->link;	
		}
		else if((ptr1->e)>(ptr2->e))
		{
			new=getnode();
			new->c=ptr1->c;
			new->e=ptr1->e;
			new->link=NULL;
			if(rheader==NULL)
			{
				rheader=ptr3=new;
			}
			else
			{
				ptr3->link=new;
				ptr3=new;
			}
			ptr1=ptr1->link;	
		}
		else if((ptr1->e)<(ptr2->e))
		{
			new=getnode();
			new->c=ptr2->c;
			new->e=ptr2->e;
			new->link=NULL;
			if(rheader==NULL)
			{
				rheader=ptr3=new;
			}
			else
			{
				ptr3->link=new;
				ptr3=new;
			}
			ptr2=ptr2->link;	
		}
	}
	while(ptr1!=NULL)
	{
		new=getnode();
		new->c=ptr1->c;
		new->e=ptr1->e;
		new->link=NULL;
		if(rheader==NULL)
		{
			rheader=ptr3=new;
		}
		else
		{
			ptr3->link=new;
			ptr3=new;
		}
		ptr1=ptr1->link;	
	}
	while(ptr2!=NULL)
	{
		new=getnode();
		new->c=ptr2->c;
		new->e=ptr2->e;
		new->link=NULL;
		if(rheader==NULL)
		{
			rheader=ptr3=new;
		}
		else
		{
			ptr3->link=new;
			ptr3=new;
		}
		ptr2=ptr2->link;	
	}
	printf("\nResultant polynomial:");
	ptr=rheader;
	printf("%dx^%d",ptr->c,ptr->e);
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
		if((ptr->c)>0)	
		{
			printf("+%dx^%d",ptr->c,ptr->e);
		}
		else
		{
			printf("%dx^%d",ptr->c,ptr->e);
		}	
	}
}
struct poly* getnode()
{
	struct poly *a=(struct poly*)malloc(sizeof(struct poly));
	return a;
}

/*Output
Enter details of first polynomial:
Enter no.of terms:4
Enter coefficient of term 1:5
Enter exponent of term 1:3
Enter coefficient of term 2:7
Enter exponent of term 2:2
Enter coefficient of term 3:6
Enter exponent of term 3:1
Enter coefficient of term 4:3
Enter exponent of term 4:0
Entered polynomial:5x^3+7x^2+6x^1+3x^0
Enter details of second polynomial:
Enter no.of terms:3
Enter coefficient of term 1:4
Enter exponent of term 1:4
Enter coefficient of term 2:3
Enter exponent of term 2:3
Enter coefficient of term 3:2
Enter exponent of term 3:1
Entered polynomial:4x^4+3x^3+2x^1
Resultant polynomial:4x^4+8x^3+7x^2+8x^1+3x^0
*/

