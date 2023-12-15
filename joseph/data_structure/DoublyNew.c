



#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *llink;
	struct node *rlink;
};

struct node *header=NULL;
struct node *tail=NULL;
struct node *ptr=NULL;
struct node *new=NULL;
struct node *temp=NULL;


void infront();
void inlast();
void inkey();
void delfront();
void dellast();
void delkey();
void display();
void revdisplay();


void infront(){
	int n;
	new=(struct node *)malloc(sizeof (struct node));
	printf("Enter the element to be inserted:");
	scanf("%d",&n);
	if (new==NULL)
	{
		printf("Insertion not possible!!");	
	}	
	else
	{
		if (header==NULL)
		{
			new->data=n;
			new->llink=NULL;
			new->rlink=NULL;
			header=new;
			tail=new;
		}
		else
		{
			new->data=n;
			new->llink=NULL;
			new->rlink=NULL;
			new->rlink=header;			
			header->llink=new;
			header=new;
		}
	}

}

void inlast(){
	int n;
	new=(struct node *)malloc(sizeof (struct node));
	printf("Enter the element to be inserted:");
	scanf("%d",&n);
	if (new==NULL)
	{
		printf("Insertion not possible!!");	
	}	
	else
	{
		if (header==NULL)
		{
			new->data=n;
			new->llink=NULL;
			new->rlink=NULL;
			header=new;
			tail=new;
		}
		else{
		/*
			ptr=header;
			while(ptr->rlink!=NULL)
			{
				ptr=ptr->rlink;
			}
			ptr->rlink=new;
			new->data=n;
			new->llink=ptr;
			new->rlink=NULL;
			*/
			ptr=tail;
			ptr->rlink=new;
			new->data=n;
			new->llink=ptr;
			new->rlink=NULL;
			tail=new;
		}
	}
}

void inkey(){
	int n,key;
	new=(struct node *)malloc(sizeof (struct node));
	printf("Enter the element after which the key is to be insertedto be inserted:");
	scanf("%d",&n);
	printf("Enter the key value:");
	scanf("%d",&key);
	if (new==NULL)
	{
		printf("Insertion not possible!!");	
	}	
	else
	{
		if (header==NULL&&tail==NULL)
		{
			new->data=n;
			new->llink=NULL;
			new->rlink=NULL;
			header=new;
			tail=new;
		}
		else{
		ptr=header;
		while(ptr->data!=key&&ptr->rlink!=NULL)
		{
			ptr=ptr->rlink;
		}
		if(ptr->data==key&&ptr->rlink==NULL)
			{
				ptr->rlink=new;
				new->data=n;
				new->llink=ptr;
				new->rlink=NULL;
				tail=new;
			}
		else
		{
			if(ptr->data==key)
			{
				temp=ptr->rlink;
				ptr->rlink=new;
				new->data=n;
				new->llink=ptr;
				new->rlink=temp;
				temp->llink=new;
			}
			else
			{
				printf("Key value no found!!\n");
			}
		}
		}
	}
	
}

void delfront(){
	if(header==NULL)
	{
		printf("Linked list is empty!!\n");
	}
	else
	{
		if(header->rlink==NULL)
		{
			ptr=header;
			header=NULL;
			tail=NULL;
			printf("Deleted item is: %d\n",ptr->data);
			free(ptr);
		}
		else
		{
			ptr=header;
			header=header->rlink;
			header->llink=NULL;
			printf("Deleted item is: %d\n",ptr->data);
			free(ptr);
		}
	}
}
void dellast(){
	if(header==NULL)
	{
		printf("Linked list is empty!!\n");
	}
	else
	{
		if(header->rlink==NULL)
		{
			ptr=header;
			header=NULL;
			tail=NULL;
			printf("Deleted item is: %d\n",ptr->data);
			free(ptr);
		}
		else
		{
			/*ptr=header;
			while(ptr->rlink!=NULL)
			{
				ptr=ptr->rlink;
			}
			ptr->llink->rlink=NULL;
			printf("Deleted item is: %d\n",ptr->data);
			free(ptr);*/
			ptr=tail;
			tail=ptr->llink;
			printf("Deleted item is: %d\n",ptr->data);
			free(ptr);
		}
	}
}
void delkey(){
	if(header==NULL)
	{
		printf("Linked list is empty!!\n");
	}
	else
	{
		int key;
		printf("Enter the key value: ");
		scanf("%d",&key);
		if(header->rlink==NULL)
		{	
			if(header->data==key)
			{
				ptr=header;
				header=NULL;
				tail=NULL;
				printf("Deleted item is: %d\n",ptr->data);
				free(ptr);
			}
			else{
				printf("Element nod found!!\n");
			}
		}
		else
		{
			ptr=header;
			while(ptr->data!=key&&ptr->rlink!=NULL)
			{
				ptr=ptr->rlink;
			}
			if(ptr->data==key&&ptr->rlink==NULL)
			{
				ptr->llink->rlink=NULL;
				tail=ptr->llink;
				printf("Deleted item: %d\n",key);
				free(ptr);
			}
			else
			{
				if(ptr->data=key)
				{
					if(ptr==header)
					{
						header=ptr->rlink;
						header->llink=NULL;
						tail->rlink=header;	
						printf("Deleted item: %d\n",key);
						free(ptr);
					}
					else{
						ptr->llink->rlink=ptr->rlink;
						ptr->rlink->llink=ptr->llink;
						printf("Deleted item: %d\n",key);
						free(ptr);
					}
				}
				else
				{
					printf("%d not found. Deletion not possible!!\n");
				}
			}
		}
	}
}

void display(){
	if(header==NULL)
	{
		printf("Linked list empty!!\n");
	}
	else
	{
		ptr=header;
		while(ptr!=tail)
		{
			printf(" %d ",ptr->data);
			ptr=ptr->rlink;
		}
		printf(" %d \n",ptr->data);
	}
}
void revdisplay(){
		if(header==NULL&&tail==NULL)
	{
		printf("Linked list empty!!\n");
	}
	else
	{
		ptr=tail;
		while(ptr->llink!=NULL)
		{
			printf(" %d ",ptr->data);
			ptr=ptr->llink;
		}
		printf(" %d \n",ptr->data);
	}
}


void main()
{
	int n;
	do{
		printf("1.Insertion at front\n2.Insertion at end\n3.Insertion after a key value\n4.Deletion at front\n5.Deletion at end\n6.Deletion after a key value\n7.Display\n8.Reverse Display\n");
		printf("Enter your choice:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				infront();
				break;
			case 2:
				inlast();
				break;
			case 3:
				inkey();
				break;
			case 4:
				delfront();
				break;
			case 5:
			 	dellast();
			 	break;
			 case 6:
			 	delkey();
			 	break;
			 case 7:
			 	display();
			 	break;
			 case 8:
			 	revdisplay();
			 	break;
			 case 9:
			 	printf("Exiting...");
			 	break;
			 default:
			 	printf("Invalid Entry:");
			 	break;
		}
	}while(n!=9);
}
