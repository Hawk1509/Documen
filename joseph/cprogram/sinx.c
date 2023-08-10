/*program to print the value for sin x by using the formula 
sinx = x - (x^3)/3! + (x^5)/5! - (x^7)/7! + ....
*/
#include <stdio.h>
#include <math.h>
int fact(int);
int fact (int a)
{
    int result = 1,i;
    for (i=1;i<=a;i++)
    {
        result = result * i;
    }
    return result;
}
void main()

{
    int i,n,x,value;
    printf("Enter number of terms and value of x: ");
    scanf("%d%d",&n,&x);
    value = x;
    for (i=1;i<=n*2;i+2)
    {
        value = value + (pow(x,i))/fact (n);
        
    }
    printf("%d", value);
}