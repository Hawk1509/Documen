//prorgam to display prefix from infix
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define size 10
int top=-1;
char s[size];
int pr(char op);
void push(char op);
char pop();
void main()
{
	char inf[20],pre[20],infrev[20],prerev[20],item,x;
	int l,i,j=0,k=0;
	printf("Enter an infix expression:");
	gets(inf);
	l=strlen(inf);
	for(i=l-1;i>=0;i--,k++)
	{
		if(inf[i]=='(')
		{ 	
			infrev[k]=')';
		}
		else if(inf[i]==')')
		{
			infrev[k]='(';
		}
		else
		{
			infrev[k]=inf[i];
		}	
	}	
	infrev[k]=')';
	infrev[k+1]='\0';
	push('(');
	item=infrev[0];
	i=0;
	while(item!='\0')
	{
		if(item=='(')
		{
			push(item);
		}
		else if(isalpha(item))
		{
			prerev[j]=item;
			j++;
		}
		else if(item==')')
		{
			while(s[top]!='(')
			{
				x=pop();
				prerev[j]=x;
				j++;
			}
			pop();
		}
		else if(item=='+'||item=='-'||item=='*'||item=='/'||item=='^')
		{
			if(pr(s[top])>=pr(item))
			{
				if(s[top]=='^' && item=='^')
				{
					push(item);
				}
				else
				{
					while(pr(s[top])>=pr(item))
					{
						x=pop();
						prerev[j]=x;
						j++;
					}
					push(item);
				}
			}
			else
			{
				push(item);
			}
		}
		i++;
		item=infrev[i];
	}
	prerev[j]='\0';
	for(i=j-1,k=0;i>=0;i--,k++)
	{
		pre[k]=prerev[i];	
	}	
	pre[k]='\0';
	printf("Resultant prefix expression:");
	puts(pre);
}
int pr(char op)
{
	switch(op)
	{
		case '+':
		case '-':
			return 1;
			break;
		case '*':
		case '/': 
			return 2;
			break;
		case '^': 
			return 3;
			break;
		default:
			return -1;		
			break;
	}
}
void push(char x)
{
	top++;
	s[top]=x;
	
}
char pop()
{
	int x;
	x=s[top];
	top--;	
	return x;	
}

/*Output
Enter an infix expression:(a+b)*c-d+f
Resultant prefix expression:-*+abc+df
*/
