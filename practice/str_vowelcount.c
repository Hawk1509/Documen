//program to count number of vowel and consonants
#include<stdio.h>
void main()
{
    int vowcount=0,concount=0,n,i;
    char str;
    printf("limit:");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        gets(str[i]);
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowcount++;
        } 
        else{
            concount++;
        }
    }
    printf("Vowel: ",vowcount);
    printf("Consonats: ",concount);
}