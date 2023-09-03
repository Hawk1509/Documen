//program to find the largest number by using ternary conditions
#include <stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter values of A, B, C: ");
    scanf("%d%d%d", &a,&b,&c);
    d= (a>b?a>c?a:c:b>c?b:c);
    printf("%d", d);
}