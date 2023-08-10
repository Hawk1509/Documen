//program to create and display student details by using a structure
#include <stdio.h>
struct stud 
{
    int number;
    char name[20];
    float m1,m2,m3, sum, avg;
}s[20];
void main()
{
    int n,i;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {   
        printf("Enetr roll number: ");
        scanf("%d",&s[i].number);
        printf("Enetr Name: ");
        scanf("%s",s[i].name);
        printf("Enter marks: ");
        scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].sum= s[i].m1+s[i].m2+s[i].m3;
        s[i].avg=s[i].sum / 3 ;
    }
    printf("\nStudent Details are: \n");
    printf("Roll number         Name        M1          M2          M3          Total           Average\n");
    for (i=0;i<n;i++)
    {
        
        printf("%d\t\t%s\t\t%f%f%f%f%f\n",s[i].number,s[i].name,s[i].m1,s[i].m2,s[i].m3,s[i].sum,s[i].avg);
    }
    
}

