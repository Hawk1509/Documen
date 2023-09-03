#include<stdio.h>
void main()
{
    FILE *fp;
    char c;
    fp=fopen("input","r+");
    while(c=getc(fp)!=EOF)
    {
        printf("%c",c);
    }
    fclose(fp);
}
