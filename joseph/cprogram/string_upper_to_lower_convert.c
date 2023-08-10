//program to convert upper case to lower and lower case to upper case
/*#include <stdio.h>
void main()
{
    int i=0;
    char str[10],ch,str1[10];
    printf("Enter string content: ");
    ch=getchar();
    while (ch!='\n')
    {   
        str[i]=ch;
        if (str[i]>='A' && str[i]<='Z')
        {
            str1[i]=str[i]+32;
        }
        else{
            str1[i]=str[i]-32;
        }
        i++;
        if (i>=10)
        {break;}
    }
        str1[i]='\0';
    printf("Converted string: %s",str1);
    
    
}*/
#include <stdio.h>

int main() {
    int i = 0;
    char str[10], ch, str1[10];
    
    printf("Enter string content: ");
    
    // Use a loop to read characters until a newline is encountered
    while ((ch = getchar()) != '\n') {
        str[i] = ch;
        
        // Check if the character is uppercase (ASCII values 65 to 90)
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert uppercase to lowercase by adding 32
            str1[i] = str[i] + 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase to uppercase by subtracting 32
            str1[i] = str[i] - 32;
        } else {
            // Copy characters that are not letters as-is
            str1[i] = str[i];
        }
        
        i++; // Move to the next index
    }
    
    // Null-terminate the new string
    str1[i] = '\0';
    
    // Print the converted string
    printf("Converted string: %s\n", str1);
    
    return 0;
}
