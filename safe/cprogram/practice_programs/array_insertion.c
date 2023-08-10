//menu driven prorgam for array insertion,deletion ,search merge sort
#include <stdio.h>
void main()
{
	int a[10],ch,num,p,index,b[10],i,t,n,x,j;
	printf("Enetr choice between 1-5 \n 1.Insertion \n 2.Deletion \n 3.Search \n 4.Merge \n 5.Sort \n");
	scanf("%d",&ch);
	printf("Enter limit");
	scanf("%d",&n);
	printf("Enetr elements: ");
	for (i=0;i<n;i++)
	{scanf("%d", &a[10]);}
	
	switch (ch)
	{
		case 1: printf("enetr element to be inserted and it postion: ");
			scanf("%d%d",&num, &p);
			index=p-1;
			for (i=index; i<=n;i++)
			{
				if (a[i]==index)
				{	t=a[i+1];
					a[i+1]=a[i];
					a[i]=num;
				}
			}
			for (i=0;i<=n;i++)
			{
			printf("%d",a[i]);
			}
			break;
		case 2: printf("enetr element to be deleted and it postion: ");
			scanf("%d%d",&num, &p);
			index=p-1;
			for (i=index; i<n;i++)
			{
				if (a[i]==index)
				{	
					a[i]=a[i+1];
					
				}
			}
			for (i=0;i<n-1;i++)
			{
			printf("%d",a[i]);
			}break;
		case 3: printf("enetr element to be searched: ");
			scanf("%d",&num);
			//index=p-1;
			for (i=0; i<n;i++)
			{
				if (a[i]==num)
				{	
					break;
					
				}
			}
			/*for (i=0;i<n-1;i++)
			{
			printf("%d",a[i]);
			}*/
			printf("%d",i);
			break;
		case 4: printf("limit:");
			scanf("%d",&x);
			printf("enetr element 2nd array: ");
			for (i=0;i<x;i++)
			{
			scanf("%d",&b[i]);}
			for (i=0; i<n;i++)
			{
				if (a[i]==n-1)
				{	
					a[i]=b[i];
				}
			}
			for (i=0;i<=n;i++)
			{
			printf("%d",a[i]);
			}break;
		case 5:for (i=0; i<n;i++)
			{	
				for (j=0;j<=i;j++)
				{
				if (a[j]>a[j+1])
				{	t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}}
			}
			for (i=0;i<n;i++)
			{
			printf("%d",a[i]);
			}break;
		default :
		printf("invalid choice");
		break;
		}
		}
					
					
