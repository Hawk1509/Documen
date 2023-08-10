//program to find the sin and cosine value
#include <stdio.h>
#include <math.h>
void main()
{
    int n,ch,k=1,i,j,fact=1;
    float x,v,sum=0;
    printf("\nEnter choice\n 1.sine series \n 2.cosine series \n");
    scanf("%d",&ch);
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("enter value of x: ");
    scanf("%f",&x);
    x=(x*3.14)/180;
    printf("Value of x= %f",x);
    switch (ch)
    {
        case 1: for(i=1;i<=2*n;i=i+2)
                {
                    v=pow(x,i)*k;
                    k=k*-1;
                    for (j=1;j<=i;j++)
                    {
                        fact=fact*j;

                    }
                sum=sum+(v/fact);
                }
                printf("%f",sum);
                break;
        case 2: for(i=0;i<=2*n;i=i+2)
                {
                    v=pow(x,i)*k;
                    k=k*-1;
                    for (j=1;j<= i;j++)
                    {
                        fact=fact*j;

                    }
                sum=sum+(v/fact);
                }
                printf("%f",sum); 
                break;      
    }
    
}