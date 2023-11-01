//Program to display linear queue
#include <stdio.h>
#define max 2
void Enqueue();
void Dequeue();
void display();
int item;
int front = -1;
int rear = -1;
int Q[max];
void Enqueue()
{	
	if (front == 0 && rear == max-1)
	{
		printf("\nQueue is full.\n");
	} 
	else 
	{
		if (front == -1 && rear == -1)
		{
			front  = 0;
			rear = 0;
			printf("\nEnter element: ");
			scanf("%d", &item);
			Q[rear] = item;
		}
		else
		{
			printf("\nEnter element: ");
			scanf("%d",&item);
			rear ++;
			Q[rear]  = item;
		}
	}
}
void Dequeue()
{	
	if (front == -1 && rear == -1)
	{
		printf("\nQueue is Empty.\n");
	} 
	else if (front == rear)
	{
		front = -1;
		rear = -1;
	}
	else 
	{
		item = Q[front];
		front = front + 1;
		
	}
}	
void display()
{
	int i = 0;
	if (front == -1 && rear == -1)
	{
		printf("\nQueue is Empty.\n");
	}
	else
	{
		i = front;
		while (i <= rear)
		{
			printf("%d\t", Q[i]);
			i++;
		}
	}
}
void main()
{
	int x;
	char ch;
	do
	{
		printf("Menu driven choices \n1.Enqueue \n2.Dequeue \n3.Display\nEnter choice\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:Enqueue();
						break;
 			case 2:Dequeue();
						break;
			case 3:display();
						break;
			default:printf("Invalid choice\n");
						  
		}
		
		printf("Do you wish to continue? (y/n)");
	//		__fpurge(stdin);
		scanf(" %c", &ch);
	}while (ch == 'y');
	 
	}

