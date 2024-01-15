#include<stdio.h>
#include<stdlib.h>
int a[10],b[10],c[10][10],f=-1,r=-1,top=-1,item,i,j,w,n,visited[10];
int dequeue()
{
	int x;
	if(f==r)
	{
	f=-1;
	r=-1;
	}
	else
	{
		x=a[f];
		f++;
	}
	return x;
}
void enqueue(int s)
{
	if(f==-1&&r==-1)
	{
		f=0;
		r=0;
		a[r]=s;
	}
	else
	{
		r++;
		a[r]=s;
	}
}
void push(int item)
{
	top++;
	b[top]=item;
}
void pop()
{
	int x;
	x=b[top];
	top--;
}
void bfs(int s)
{
	int y;
	for(y=1;y<=n;y++)
	{
		visited[y]=0;
	}
	enqueue(s);
	while(f!=-1&&r!=-1)
	{
		w=dequeue();
		if(visited[w]==0){
		visited[w]=1;
		printf("%d\t",w);
		}
		for(y=1;y<=n;y++)
		{
			if(c[w][y]=1 && visited[y]==0)
			{
				enqueue(y);
			}
		}
	}
}
void dfs(int s)
{
	int y,flag=0;
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
	}
	push(s);
	printf("%d\t",s);
	visited[s]=1;
	while(top!=-1)
	{
		flag=0;
		w=b[top];
		for(i=0;i<=n;i++)
		{
			if(c[w][i]==1 && visited[i]==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			push(i);
			visited[i]=1;
			printf("%d\t",i);
		}
		else
		{
			pop();
		}
	}
}
void main()
{
	int s,ch;
	char sw;
	printf("Enter the number of vertices\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("enter 1 if node %d is adjacent to node %d.Else enter 0:",i,j);
			scanf("%d",&c[i][j]);
		}
	}
	printf("Matrix is \n");
	{
		for(i=1;i<=n;i++)
		{
			for(j=0;j<=n;j++)
			{
				printf("%d",c[i][j]);
			}
			printf("\n");
		}
	}
	printf("enter the starting node:\n");
	scanf("%d",&s);
	do
	{
	printf("enter your choice\n1.BFS\n2.DFS\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : bfs(s);
					break;
		case 2 : dfs(s);
					break;
		default : 
					break;
	}
	printf("\ndo you want to continue :(y/n)\n");
	scanf(" %c",&sw);
	}while(sw=='y');
}
/*
OUTPUT
Enter the number of vertices
4
enter 1 if node 1 is adjacent to node 1.Else enter 0:1
enter 1 if node 1 is adjacent to node 2.Else enter 0:0
enter 1 if node 1 is adjacent to node 3.Else enter 0:1
enter 1 if node 1 is adjacent to node 4.Else enter 0:1
enter 1 if node 2 is adjacent to node 1.Else enter 0:1
enter 1 if node 2 is adjacent to node 2.Else enter 0:1
enter 1 if node 2 is adjacent to node 3.Else enter 0:1
enter 1 if node 2 is adjacent to node 4.Else enter 0:1
enter 1 if node 3 is adjacent to node 1.Else enter 0:1
enter 1 if node 3 is adjacent to node 2.Else enter 0:1
enter 1 if node 3 is adjacent to node 3.Else enter 0:1
enter 1 if node 3 is adjacent to node 4.Else enter 0:1
enter 1 if node 4 is adjacent to node 1.Else enter 0:
1
enter 1 if node 4 is adjacent to node 2.Else enter 0:1
enter 1 if node 4 is adjacent to node 3.Else enter 0:1
enter 1 if node 4 is adjacent to node 4.Else enter 0:0
Matrix is 
01011
01111
01111
01110
enter the starting node:
1
enter your choice
1.BFS
2.DFS
1
1       2       3       4
do you want to continue :(y/n)
y
enter your choice
1.BFS
2.DFS
2
1       2       3       4
do you want to continue :(y/n)
n
*/
