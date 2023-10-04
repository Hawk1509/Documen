//program to display stack menu driven program
#include <stdio.h>
#define max 20
int top = -1;
int a[10];
//max = 5;
void push(int c)
{	int item;
	if (top = max - 1)
	{
		printf("Stack is full");
	}	
	else
	{
		top++;
		a[top] = item;
	}
}
void pop()
{
	int item;
	if (top = -1)
	{
		printf("Empty Stack");
	}	
	else
	{
		item = a[top];
		top--;
	}
}
void disp()
{
int i;
if (top = -1)
{
	printf("Empty Stack");
}
else 
{
i = 0;
}
while (i<=top)
{
printf("%d",a[i]);
i++;
}
}

void main()
{
int a,choice;
char ch = 'y';
while(ch == 'y')
{
	printf("\nEnter choice\n1.push\n2.pop\n3.display\n");
	scanf("%d",&choice);
	printf("Enter items: ");
	scanf("%d",&a);
	//while (true)
	if (choice == 1)
	{
		push(a);
	}
	else if(choice == 2)
	{
		pop();
	}
	else if(choice == 3)
	{
		disp();
	}
	
//while (ch == 'y' || ch == "yes")
//{
	printf("\nContinue(y/n)?\n");
	scanf("%d",&ch);
}
	

}



