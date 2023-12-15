//Program to display linear queue
#include <stdio.h>
#define max 5
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
		
		printf("\nDo you wish to continue? (y/n)");
		scanf(" %c", &ch);
	}while (ch == 'y');
	 
	}
    /*
    OUTPUT
    Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
1

Enter element: 10

Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
1

Enter element: 20

Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
1

Enter element: 30

Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
3
10      20      30
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
20      30
Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
2

Do you wish to continue? (y/n)
y
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

Queue is Empty.

Do you wish to continue? (y/n)y
Menu driven choices 
1.Enqueue 
2.Dequeue 
3.Display
Enter choice
2

Queue is Empty.

Do you wish to continue? (y/n)n
*/