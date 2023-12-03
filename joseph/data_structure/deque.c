//Program to display double ended queue
#include <stdio.h>
#define max 3
void PUSH();
void Inject(int);
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
		else if(front == 0 )
		{
			front = max-1 ;
			printf("Enter element: ");
			scanf("%d", &item);
			Q[front] = item;
		}
		else
		{
			printf("\nEnter element: ");
			scanf("%d",&item);
			front--;
			Q[front]  = item;
		}
	}
}

void Inject(int item)
{	
	if (rear == max-1)
	{
		printf("\nQueue is full.\n");
	} 
	else 
	{
		if (front == -1 && rear == -1)
		{
			front  = 0;
			rear = 0;
			Q[rear] = item;
		}
		else if(front !=0 && rear == max-1 )
		{
			rear = 0;
			Q[rear] = item;
		}
		else
		{
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
		if (front == rear)
		{
			front = -1;
			rear = -1;
		}
		else if (rear == 0)
		{
			rear = max-1;
			
		}
		else 
		{
			//item = Q[front];
			rear--;
			
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
		if (front == max -1)
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
		for(i =front;i != rear; i = (i+1)%max)
		{
			printf("%d\t", Q[i]);
		}
		printf("%d\n",Q[i]);
		
	}
}
void main()
{
	int x,n;
	char ch;
	do
	{
		printf("Menu driven choices \n1.PUSH \n2.INJECT \n3.POP \n4.EJECT \n5.DISPLAY \nEnter choice\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:PUSH();
						break;
 			case 2:	printf("Enter element to be inserted: \n");
 						scanf("%d",&n);
 						Inject(n);
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
/* 	
OUTPUT
Menu driven choices 
1.PUSH 
2.INJECT 
3.POP 
4.EJECT 
5.DISPLAY 
Enter choice
1

Enter element: 10
Do you wish to continue? (y/n)y
Menu driven choices 
1.PUSH 
2.INJECT 
3.POP 
4.EJECT 
5.DISPLAY 
Enter choice
2
Enter element to be inserted: 
20
Do you wish to continue? (y/n)y
Menu driven choices 
1.PUSH 
2.INJECT 
3.POP 
4.EJECT 
5.DISPLAY 
Enter choice
2
Enter element to be inserted: 
30
Do you wish to continue? (y/n)y
Menu driven choices 
1.PUSH 
2.INJECT 
3.POP 
4.EJECT 
5.DISPLAY 
Enter choice
5
10      20      30
Do you wish to continue? (y/n)y
Menu driven choices 
1.PUSH 
2.INJECT 
3.POP 
4.EJECT 
5.DISPLAY 
Enter choice
3
Do you wish to continue? (y/n)y
Menu driven choices 
1.PUSH 
2.INJECT 
3.POP 
4.EJECT 
5.DISPLAY 
Enter choice
5
20      30
Do you wish to continue? (y/n)y
Menu driven choices 
1.PUSH 
2.INJECT 
3.POP 
4.EJECT 
5.DISPLAY 
Enter choice
4
Do you wish to continue? (y/n)y
Menu driven choices 
1.PUSH 
2.INJECT 
3.POP 
4.EJECT 
5.DISPLAY 
Enter choice
5
20
Do you wish to continue? (y/n)y
Menu driven choices 
1.PUSH 
2.INJECT 
3.POP 
4.EJECT 
5.DISPLAY 
Enter choice
3
Do you wish to continue? (y/n)y
Menu driven choices 
1.PUSH 
2.INJECT 
3.POP 
4.EJECT 
5.DISPLAY 
Enter choice
5

Queue is Empty.
Do you wish to continue? (y/n)y
Menu driven choices 
1.PUSH 
2.INJECT 
3.POP 
4.EJECT 
5.DISPLAY 
Enter choice
3

Queue is Empty.
Do you wish to continue? (y/n)n
*/
