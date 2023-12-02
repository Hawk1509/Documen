//program to display stack menu driven program
#include <stdio.h>
void push();
void pop();
void disp();
#define max 3
int top = -1;
int a[3];
void push()
{	int item;
	if (top == max - 1)
	{
		printf("\nStack is full\n");
	}	
	else
	{
		top++;
		printf("\nEnter values:\n");
		scanf("%d",&item);
		a[top] = item;
	}
}
void pop()
{
	int item;
	if (top == -1)
	{
		printf("\nEmpty Stack\n");
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
if (top == -1)
{
	printf("\nEmpty Stack\n");
}
else 
{
i = 0;
}
while (i<=top)
{
printf("%d\t",a[i]);
i++;
}
}

void main()
{
char ch;
int choice;
do
{
	int a;
	printf("1.push\n2.pop\n3.display\nEnter choice\n");
	scanf("%d",&choice);
	//while (true)
	switch(choice)
	{
	case 1:
	
		push();
		break;
	
	case 2:
	
		pop();
		break;
	
	case 3:
	
		disp();
		break;
	default:
	printf("\nInvalid\n");
	break;
	}
printf("\nContinue?\n");
scanf(" %c",&ch);
}
while (ch == 'y');
}
/*OUTPUT
1.push
2.pop
3.display
Enter choice
1

Enter values:
10

Continue?
y
1.push
2.pop
3.display
Enter choice
1

Enter values:
20

Continue?
y
1.push
2.pop
3.display
Enter choice
1

Enter values:
30

Continue?
y
1.push
2.pop
3.display
Enter choice
3
10      20      30
Continue?
y
1.push
2.pop
3.display
Enter choice
2

Continue?
y
1.push
2.pop
3.display
Enter choice
3
10      20
Continue?
y
1.push
2.pop
3.display
Enter choice
2

Continue?
y
1.push
2.pop
3.display
Enter choice
^C
❯ ./a.out
1.push
2.pop
3.display
Enter choice
1 

Enter values:
10

Continue?
y
1.push
2.pop
3.display
Enter choice
1

Enter values:
20

Continue?
y
1.push
2.pop
3.display
Enter choice
3
10      20
Continue?
y
1.push
2.pop
3.display
Enter choice
2

Continue?
y
1.push
2.pop
3.display
Enter choice
3
10
Continue?
y
1.push
2.pop
3.display
Enter choice
2

Continue?
y
1.push
2.pop
3.display
Enter choice
3

Empty Stack

Continue?
y
1.push
2.pop
3.display
Enter choice
2

Empty Stack

Continue?
n
*/
