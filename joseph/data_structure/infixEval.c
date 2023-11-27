//infix evaluation
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define max 20
void push(char,char[]);
int pop(char[]);
int priority(char);
char str[50];
char infix[50];
char stack[50];
char postfix[50];
int top=-1;
int compute(char,char,char);
void main()
{
	char item,op,x;
	float value=0,result,y,z,t;
	int i=0,len,j;
	printf("enter the infix expression\n");
	scanf("%s",str);
	len=strlen(str);
	str[len]=')';
	str[len+1]='\0';
	j=0;
	i=0;
	item=str[0];
	push('(',infix);
		while(item!='\0')
		{
			if(item=='(')
				push(item,infix);
			else if(isalpha(item))
			{
				postfix[j]=item;
				j++;

			}
			else if(item==')')
			{
				while (infix[top]!='(')
				{
					x=pop(infix);
					postfix[j]=x;
					j++;
					
				}
				x=pop(infix);
					
			}
			else if(isalpha(item)==0)
			{
				if(priority(infix[top])>=priority(item))
				{
					if(infix[top]=='^'&& item=='^')
					{
						push(item,infix);
					}
					else
					{
						while(priority(infix[top])>=priority(item))
						{
							x=pop(infix);
							postfix[j]=x;
							j++;
						}
					    push(item,infix);
					}
				}
				else
				{
					push(item,infix);
				}
			}
			i++;
			item=str[i];
		}
	postfix[j]='\0';
	printf("\ndisplaying the postfix\n");
	puts(postfix);
	//evaluation
	i=0;
	item=postfix[0];
	while(item!='\0')
	{
		if(isalpha(item))
		{
			printf("Enter the value of %c",item);
			scanf("%f",&value);
			push(value,stack);
		}
		else
		{
			op=item;
			z=pop(stack);
			y=pop(stack);
			t=compute(y,z,op);
			push(t,stack);
		}
		i++;
		item=postfix[i];
	}
	result=pop(stack);
	printf("value is\n");
	printf("%f",result);
}
void push(char item,char a[])
{
	if(top!=max-1)
	{
		
		top+=1;
		a[top]=item;
	}
}
int pop(char a[])
{
	char p;
	if(top!=-1)
	{
	    p=a[top];
		top-=1;
	}
	return p;
}
int priority(char a)
{
	int p;
	switch(a)
	{
		case '^': p=3;
				  break;
		case '*': p=2;
				  break;
		case '/': p=2;
				  break;
		case '+': p=1;
				  break;
		case '-': p=1;
				  break;
		case '(': p=0;
				  break;
		default : ;
	}
	return p;
}
int compute(char x,char y,char op)
{
	float result;
	if(op=='+')
		result=x+y;
	else if(op=='-')
		result=x-y;
	else if(op=='*')
		result=x*y;
	else if(op=='^')
		result=pow(x,y);
	else if(op=='/')
		result=x/y;
	return result;
}