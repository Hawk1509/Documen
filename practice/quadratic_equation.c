//program to display quadratic eqations
// d= root(b^2)-4ac
// x=(b +- d)/2a
#include <stdio.h>
#include <math.h>
void main()
{ 
    float a,b,c,d,x;
    printf("Enetr values of a,b,c: ");
    scanf("%f%f%f" &a,&b,&c);
    d= sqrt(pow(b,2)-(4*a*c));
    r1= (b+d)/(2*a);
    r2= (b-d)/(2*a);
    if (d>0)
    {
        printf("roots");
    }
    else if (r1>r2)
    {
        printf()
    }
    

}