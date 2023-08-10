//program to convert from upper to lower if upper and vice versa
#include <stdio.h>
char convertor(char);
void main()
{
	char n;
	printf("Enter character: ");
	scanf("%c",&n);
	printf("%c",convertor(n));
}
char convertor(char n)
{
	if (n<122&& n>97)
	{
		n=n-32;
	}
	else
	{
		n=n+32;
	}
	return n;
}
