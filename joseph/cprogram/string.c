//program to print a string
#include <stdio.h>
void main()
{   
    int i=0;
    char ch,str[10];
    printf("Enter string: ");
    ch=getchar();
    while (ch!='\n')
    {
    str[i]=ch;
    i++;
    ch=getchar();
    }
    str[i]='\0';
    puts(str);
    printf("The entered string is : %s",str);
    putchar(str [i]);
    
}