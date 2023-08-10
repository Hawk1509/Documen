//program to make a calculator using switch and do while
#include <stdio.h>
void main()
{
	int n,a,b,
	do
	{
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);
		printf("Enter any number between 1 and 4 to perform the following operations: \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n");
		scanf("%d" , &n);
	}
	while(c=='y') 
	{
	switch(n)
	{
		case 1:
		printf("result: ",a+b);
		break;
		case 2:
		printf("result: ",a-b);
		break;
		case 3:
		printf("result: ",a*b);
		break;
		case 4:
		printf("result: ",a/b);
		break;
		default:  
		printf("Imvalid choice");
		break;
	}
	}
	}
		 
