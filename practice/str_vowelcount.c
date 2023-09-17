//program to count number of vowel and consonants
#include<stdio.h>
void main()
{
    int vowcount=0,concount=0,n,i;
    char str;
    printf("limit:");
    scanf("%d",&n);
    i=getchar()
    for (i=0;i!="\0";i++)
    {
        getchar(str[]);
        if (str[]=='a'||str[]=='e'||str[]=='i'||str[]=='o'||str[]=='u')
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