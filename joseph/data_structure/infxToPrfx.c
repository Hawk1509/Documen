//prorgam to display prefix from infix
#include<stdio.h>
#include<string.h>
void push(char);
char pop();
int sp(char);
int cp(char);
int len,top=-1,i=0,j=0;
char infix[50],infixrev[50],stack[50],item[50],x;
void main()
{
	printf("Enter the infix expression \n");
	gets(item);
	printf("The infix expression is\n");
	puts(item);
	len=strlen(item);
	//item[len]=')';
	top=top+1;
	//stack[top]='(';
	i = 0;
	while(item[i] != '\0')
	{
		infix[i] = item[i];
		i = i + 1;
	}
	
	for (i=len-1;i>=0;i--)
	{
		if(infix[i] == '(')
		{
			infixrev[j] == ')';
		} 
		else if(infix[i] == ')')
		{
			infixrev[j] == '(';
		}
		else 
		{
			infixrev[j] = infix[i];
			j++;
		}
	}
	infixrev[j] = '\0';
	printf("\nReverse\n");
	puts(infixrev);
	for (j=0;j>=len-1;j++)
	{
		if(infixrev[j] == '(');
		{
			infix[j] = ')';
		}
		else if(infixrev[j] >= 'a' && infixrev[j] <= 'z' || infixrev[j] >= 'A' && infixrev[j] <= 'Z')
		{
			infix[j] = infixrev[j];
			j = j + 1;
		}
		else if(infixrev[j] == ')')
		{
			x = pop();
			while(x != '(')
			{
				infix[j] = x;
				j = j + 1;
				x = pop();

			}
		}
		else if( infixrev == '+'|| infixrev == '-'|| infixrev == '*'|| infixrev == '^' || infixrev == '/'|| infixrev == '(' )
		{
			x=pop();
			if(cp(infixrev)>sp(x))
			{
				push(x);
				push(infixrev);
			}
			else if(sp(x)==cp(infixrev))
			{
				push(x);
				push(infixrev);
			}
			else if(sp(x)>=cp(infixrev))
			{
				while(sp(x)>=cp(infixrev))	
				{
					infix[j]=x;
					j=j+1;
					x=pop();
				}
				push(x);
				push(infixrev);
			}
		}
	}
	printf("Prefix expression\n");
	puts(infix);
}}
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
