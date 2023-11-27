//program to convert infix to postfix
#include<stdio.h>
#include<string.h>
void push(char);
char pop();
int sp(char);
int cp(char);
int slen,top=-1,i=0,j=0;
char infix[100],postfix[100],stack[100],item,x;
void main()
{
	printf("Enter the infix expression \n");
	gets(infix);
	printf("The infix expression is\n");
	puts(infix);
	slen=strlen(infix);
	infix[slen]=')';
	top=top+1;
	stack[top]='(';
	while(infix[i]!='\0')
	{
		item=infix[i];
		i=i+1;
		if(item>='a' && item<='z' || item>='A' && item<='Z')
		{
			postfix[j]=item;
			j=j+1;
		}
		else if(item==')')
		{
			x=pop();
			while(x!='(')
			{
				postfix[j]=x;
				j=j+1;
				x=pop();
			}
		}
		else if( item=='+'||item=='-'||item=='*'|| item=='^'||item=='/'||item=='(' )
		{
			x=pop();
			if(cp(item)>sp(x))
			{
				push(x);
				push(item);
			}
			else if(sp(x)==cp(item))
			{
				push(x);
				push(item);
			}
			else if(sp(x)>=cp(item))
			{
				while(sp(x)>=cp(item))
				{
					postfix[j]=x;	
					j=j+1;
					x=pop();
				}
				push(x);
				push(item);
			}
		}
	}
	printf("The Postfix expression is");
	puts(postfix);
}
void push(char item1)
{ 
	top=top+1;
	stack[top]=item1;
}
char pop()
{
	x=stack[top];
	top=top-1;
	return x;
}
int sp(char z)
{ 
	if(z=='^')
	{
		return 3;
	}
	else if (z=='*'||z=='/')
	{
		return 2;
	}
	else if(z=='+'||z=='-')
	{
		return 1;
	}
	else if(z=='(')
	{
		return 0;
	}
}
int cp(char y)
{ 
	if(y=='^')
	{
		return 3;	
	}
	else if (y=='*'||y=='/')
	{
		return 2;
	}
	else if(y=='+'||y=='-')
	{
		return 1;
	}
	else if(y=='(')
	{
		return 0;
	}
}

