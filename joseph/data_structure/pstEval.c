//postfix evaluation
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int top=-1;
char s[15];
void push(char);
char pop();
int pr(char);

void main()
{
	char str[20],res[20],x,y,q;
	int z,i=0,el=0;
	printf("Enter the infix expression: ");
	scanf("%s",str);
	z=strlen(str);
	str[z]=')';
	str[z+1]='\0';
	push('(');
	x=str[el];
	while(x!='\0')
	{
		if(x=='(')
		{
			push('(');
		}
		else if(isalpha(x)!=0)
		{
			res[i]=x;
			i++;
		}
		else if(x==')')
		{
			while(s[top]!='(')
			{
				y=pop();
				res[i]=y;
				i++;
			}
			q=pop();
		}
		else if(isalpha(x)==0)
		{
			if (pr(s[top])>=pr(x))
			{
				if(s[top]=='^'&&x=='^')
				{
					push(x);
				}
				else
				{
					while(pr(s[top])>=pr(x))
					{
						y=pop();
						res[i]=y;
						i++;
					}
				}
			}
			else
			{
				push(x);
			}
			
		}
		el++;
		x=str[el];
		
	}
	res[i]='\0';
	printf("The resultant postfix expression is %s\n",res);
	
}

void push(char item)
{
	top=top+1;
	s[top]=item;
}

char pop()
{	
	char item;
	item=s[top];
	top=top-1;
	return item;
}


int pr(char c)
{
	if(c=='('||c==')')
	{
		return 0;
	}
	else if(c=='+'||c=='-')
	{
		return 1;
	}
	else if(c=='*'||c=='/')
	{
		return 2;
	}
	else if(c=='^')
	{
		return 3;
	}

}

