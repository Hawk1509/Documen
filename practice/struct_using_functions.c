//program to create structure and print and read using functions
#include <stdio.h>
struct details
{
    char name[20];
    float price,total;
    int quantity;
}s[20];
struct details read()
{   struct details s;
    printf("Name:");
    scanf("%s",s.name);
    printf("price");
    scanf("%f",&s.price);
    printf("Quantity: ");
    scanf("%d",&s.quantity);
    printf("Total: %f",s.price*s.quantity); 
}
void print(struct details s)
{
    printf("\nName\t\tPrice\t\tQuantity\t\tTotal\n");
    printf("%s\t\t%f\t\t%d\n",s.name,s.price,s.quantity);
}
void main()
{
    struct details s;
    s=read();
    print(s);
}