#include <stdio.h>
void main()
{
    FILE *fp;
    char c;
    fp=fopen("try","w");
    while(c=getchar()!='\n')
    {
        //putc(c,fp);
        printf("%c",c);
    }
    fclose(fp);
}