//program to display permutations of a given input
#include <stdio.h>
int permu(int);
void main()
{
	int n,r,val_n,val_r,x,val_diff,result;
	printf("Inputs of n, r: ");
	scanf("%d%d",&n,&r);
	val_n=permu(n);
	val_r=permu(r);
	x=n-r;
	val_diff=permu(x);
	result=(val_n)/(val_r * val_diff);
	printf("result= %d",result);
}
int permu(int a)
{
	int b,i;
	for (i=1;i<=a;i++)
	{	
		b=b*i;
	}
	printf("%d",b);
}
	
