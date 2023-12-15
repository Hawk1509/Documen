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
		else if(front !=0 && rear == max-1 )
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

void Dequeue()
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
		
		printf("\nDo you wish to continue? (y/n)");
		scanf(" %c", &ch);
	}while (ch == 'y');
	 
	}
/* 														OUTPUT
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
1

Enter element: 100
Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
1

Enter element: 500
Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
3
100	500	
Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
2
Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
3
500	
Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
1

Enter element: 300
Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
3
500	300	
Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
2
Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
3
300	
Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
1

Enter element: 800
Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
3
300	800	
Do you wish to continue? (y/n)n
*/