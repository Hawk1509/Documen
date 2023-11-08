//program to display linear queue using singly linked list
#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int data;
	struct node* link;
};
struct node *new, *front = NULL, *rear = NULL, *ptr;
int item;
void enqueue()
{
	new = (struct node*)malloc(1 * sizeof(struct node));
	if (new == NULL)
	{
		printf("INSERTION NOT POSSIBLE.\n");
	}
	else
	{
		printf("Enter Item to be inserted: \n");
		scanf("%d",&item);
		new -> data = item;
		new -> link = NULL;
		if (front == NULL && rear == NULL)
		{
			front = rear = new;	
		}
		else
		{
			rear -> link = new;
			rear = new;
		}
	}
}
void dequeue()
{
	if (front == NULL && rear == NULL)
	{
		printf("EMPTY QUEUE\n");
	}
	else
	{
		if (front == rear)
		{
			front = NULL;
			rear = NULL;
			printf("EMPTY QUEUE\n");	
		}
		else
		{
		
			ptr = front;
			front = ptr -> link;
		}
	}
}
void display()
{
	int i;
	if(front == NULL && rear == NULL)
	{
		printf("EMPTY QUEUE\n");
	}
	else
	{
		ptr = front;
	while (ptr -> link != NULL)
	{
		item = ptr -> data;
		printf("%d \t",item);
		ptr = ptr -> link;
	}
	printf("%d\t\n",ptr -> data);
	}
	
}
void main()
{
	int c;
	char ch = 'y';
	do
	{
		printf("\n1.ENQUEUE \n2.DEQUEUE \n3.DISPLAY\nENTER CHOICE: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1: enqueue();
						break;
			case 2: dequeue();
						break;
			case 3: display();
						break;
			default: 
						printf("INVALID CHOICE.\n");
						break;
						
		}
		printf("DO YOU WANT TO CONTINUE(y/n): \n");
		scanf(" %c",&ch);
	}
		while (ch == 'y');		
}
/* 
1.ENQUEUE 
2.DEQUEUE 
3.DISPLAY
ENTER CHOICE: 1
Enter Item to be inserted: 
2
DO YOU WANT TO CONTINUE(y/n): 
y

1.ENQUEUE 
2.DEQUEUE 
3.DISPLAY
ENTER CHOICE: 1
Enter Item to be inserted: 
77
DO YOU WANT TO CONTINUE(y/n): 
y

1.ENQUEUE 
2.DEQUEUE 
3.DISPLAY
ENTER CHOICE: 1
Enter Item to be inserted: 
999
DO YOU WANT TO CONTINUE(y/n): 
y

1.ENQUEUE 
2.DEQUEUE 
3.DISPLAY
ENTER CHOICE: 3
2 	77 	999	
DO YOU WANT TO CONTINUE(y/n): 
y

1.ENQUEUE 
2.DEQUEUE 
3.DISPLAY
ENTER CHOICE: 2
DO YOU WANT TO CONTINUE(y/n): 
y

1.ENQUEUE 
2.DEQUEUE 
3.DISPLAY
ENTER CHOICE: 2
DO YOU WANT TO CONTINUE(y/n): 
y

1.ENQUEUE 
2.DEQUEUE 
3.DISPLAY
ENTER CHOICE: 2
EMPTY QUEUE
DO YOU WANT TO CONTINUE(y/n): 
y

1.ENQUEUE 
2.DEQUEUE 
3.DISPLAY
ENTER CHOICE: 2
EMPTY QUEUE
DO YOU WANT TO CONTINUE(y/n): 
n
*/
