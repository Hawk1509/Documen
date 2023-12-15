#include<stdio.h>
#include<stdlib.h>
int item;
struct node{
    int data;
    struct node *prev,*next;
};
struct node *head,*tail,*ptr,*temp,*new;
void begin()
{
	new=(struct node*)malloc(sizeof(struct node));
	printf("enter element\n");
	scanf("%d",&item);
	new->data=item;
	new->prev=NULL;
	if(head==NULL){
		tail=new;
		head=new;
	}
	else{
		new->next=head;
		head->prev=new;
		head=new;
	}
}
void endin()
{
	new=(struct node*)malloc(sizeof(struct node));
	printf("enter element\n");
	scanf("%d",&item);
	new->data=item;
	new->next=NULL;
	new->prev=NULL;
	if(head==NULL){
		head=new;
		tail=new;
	}
	else{
		tail->next=new;
		new->prev=tail;
		tail=new;
	}
}
void posin()
{	
	int pos,i;
	new=(struct node*)malloc(sizeof(struct node));
	printf("enter position\n");
	scanf("%d",&pos);
	if(head==NULL||pos==1){
		begin();
	}
	else{
		printf("enter element\n");
		scanf("%d",&item);
		new->data=item;
		ptr=head;
		for(i=1;i<pos-1;i++){
			ptr=ptr->next;
		}
		new->prev=ptr;
		new->next=ptr->next;
		ptr->next=new;
		ptr->next->prev=new;
		if(new->next==NULL){
			tail=new;
		}
	}
}
void begout()
{
	if(head==NULL){
		printf("empty LL\n");
	}
	else{
		temp=head;
		head=head->next;
		printf("deleted %d\n",temp->data);
		head->prev=NULL;
		free(temp);
	}
}
void endout()
{
	if(head==NULL){
		printf("empty LL\n");
	}
	else{
		if(head->next==NULL){
			temp=head;
			head=NULL;
			tail=NULL;
			printf("deleted %d\n",temp->data);
			free(temp);
		}
		else{
			temp=tail;
			tail=tail->prev;
			tail->next=NULL;
			printf("deleted %d\n",temp->data);
			free(temp);
		}
	}
}
void posout()
{
	int pos,i;
	printf("enter position\n");
	scanf("%d",&pos);
	if(head==NULL||pos==1){
		begout();
	}
	else{
		ptr=head;
		for(i=1;i<pos-1;i++){
			ptr=ptr->next;
		}
		temp=ptr->next;
		ptr->next=temp->next;
		if(temp->next==NULL){
			free(temp);
			tail=ptr;
		}
		else{
			temp->next->prev=ptr;
			free(temp);
		}
		printf("deleted %d\n",temp->data);
		free(temp);
	}
}
void display()
{	
	ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void main()
{
	int c;
	do
	{
		printf("1:Insert from beginning\n2:Insert from end\n3:Insert from position\n4:Delete from beginning\n5:Delete from end\n6:Delete from position\n7:Display\n8:Exit\n");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			begin();
			break;
		case 2:
			endin();
			break;
        case 3:
            posin();
            break;
        case 4:
        	begout();
            break;
        case 5:
        	endout();
            break;
        case 6:
        	posout();
            break;
        case 7:
        	display();
            break;
        case 8:
        	break;
        }
    }while(c!=8);
}