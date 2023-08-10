//program to copy one string to another
#include <stdio.h>
void main()
{
    int i;
    char ch,str[10],str1[10];

    printf("Enter values of the string: ");
    ch=getchar();
    for ( i = 0; ch!='\n'; i++)
    {
        str[i]=ch;
        ch=getchar();
    }
    //str[i]='\0';
    //printf("\ncopied string elements \n");
    for (i=0;str[i]!='\0';i++)
    {
        str1[i]=str[i];
    }

    str1[i]='\0';

    puts(str1);
    
}