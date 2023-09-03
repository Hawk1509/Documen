//program to develop calclator using switch
#include <stdio.h>
void main()
{   
    char n;
    printf("Enetr : ");
    scanf("%c",&n);
    switch (n)
    {
    case 'a':
    case 'o':
    case 'e':
    case 'i':
    printf("Result: vowel");
    break;
    
    
    
    default:
    printf("not vowoel");
    }

}