//program to sort on basis of marks and display entire student details
#include <stdio.h>
struct stud
{
    int num;
    char name[20];
    float m1,m2,m3,sum,avg;
}s[10],temp;
void main()
{
    int n,i,j;
    printf("Enter limit: ");
    scanf("%d",&n);
    printf("\nStudent Details\n");
    for (i=0;i<n;i++)
    {
        printf("Enter Rollnumber: ");
        scanf("%d",&s[i].num);
        printf("Enetr Name: ");
        scanf("%s",s[i].name);
        printf("Enter marks: ");
        scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].sum=s[i].m1+s[i].m2+s[i].m3;
        s[i].avg=s[i].sum/3;
    }
    printf("Sorted value are: \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<i;j++)
        {
            if (s[j].sum>s[j+1].sum)
            {
                temp=s[j+1];
                s[j+1]=s[j];
                s[j]=temp;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        printf("%d\t,%s\t,%f\t,%f\t,%f\t,%f\t,%f\n",s[i].num,s[i].name,s[i].m1,s[i].m2,s[i].m3,s[i].sum, s[i].avg);
    }
}