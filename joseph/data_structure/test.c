//Program to display linear queue
#include <stdio.h>
#define max 2
void PUSH();
void Inject();
void POP();
void Eject();
void display();
int item;
int front = -1;
int rear = -1;
int Q[max];

void PUSH()
{	
	if (front == 0 && rear == max-1 || front == rear + 1)
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
			Q[front] = item;
		}
		else if(front == max-1 )
		{
			front = 0;
			printf("Enter element: ");
			scanf("%d", &item);
			Q[front] = item;
		}
		else
		{
			printf("\nEnter element: ");
			scanf("%d",&item);
			front ++;
			Q[front]  = item;
		}
	}
}

void Inject()
{	
	if (front == 0 && rear == max-1 || front == rear + 1)
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
		else if(front != && rear == max-1 )
		{
			rear = 0;
			printf("Enter element: ");
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

void Eject()
{	
	if (front == -1 && rear == -1)
	{
		printf("\nQueue is Empty.\n");
	}
	else
	{
		if (rear = max -1)
		{
			rear = 0;
			
		}
		else if (front == rear)
		{
			front = -1;
			rear = -1;
		}
		else 
		{
			//item = Q[front];
			rear++;
			
		}
	}
}	


void POP()
{	
	if (front == -1 && rear == -1)
	{
		printf("\nQueue is Empty.\n");
	}
	else
	{
		//item = Q[front];
		if (front = max -1)
		{
			front = 0;
			
		}
		else if (front == rear)
		{
			front = -1;
			rear = -1;
		}
		else 
		{
			//item = Q[front];
			front = front + 1;
			
		}
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
		int i;
		for(i =front;i <= rear; i = (i+1)%max)
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
		printf("Menu driven choices \n1.PUSH \n2.INJECT \n3.POP \n4.EJECT \n5.DISPLAY \nEnter choice\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:PUSH();
						break;
 			case 2:Inject();
						break;
			case 3:POP();
						break;
			case 4:Eject();
						break;
			case 5:display();
						break;
			default:printf("Invalid choice\n");
						  
		}
		
		printf("Do you wish to continue? (y/n)");
	//		__fpurge(stdin);
		scanf(" %c", &ch);
	}while (ch == 'y');
	 
	}
/* 														OUTPUT
*/
