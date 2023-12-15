#include <stdio.h>  
#include <string.h> 
#include <ctype.h> 
#include <math.h> 
int top=-1,to=-1; 
char s[15],j[5]; 
void push(char); 
int compute(int,int,char); 
char pop(); 
int popint(); 
int pr(char); 
void pushint(int); 
void main() 
{ 
    char str[20],res[20],x,y,q,item,op; 
    int z,i=0,el=0,val,t,Result; 
    printf("Enter the infix expression: "); 
    scanf("%s",str); 
    z=strlen(str); 
    str[z]=')'; 
    str[z+1]='\0'; 
    push('('); 
    x=str[el]; 
    while(x!='\0') 
    { 
        if(x=='(') 
        { 
            push('('); 
        } 
        else if(isalpha(x)!=0) 
        { 
            res[i]=x; 
            i++; 
        } 
        else if(x==')') 
        { 
            while(s[top]!='(') 
            { 
                y=pop(); 
            res[i]=y; 
            i++; 
            } 
            q=pop(); 
        } 
        else if(isalpha(x)==0) 
        { 
            if (pr(s[top])>=pr(x)) 
            { 
                if(s[top]=='^'&&x=='^') 
                { 
                    push(x); 
                } 
                else 
                { 
                    while(pr(s[top])>=pr(x)) 
                    { 
                        y=pop(); 
                        res[i]=y; 
                        i++; 
                    } 
                } 
            } 
            else 
            { 
                push(x); 
            } 
        } 
        el++; 
        x=str[el];     
    } 
    res[i]='\0'; 
    printf("The resultant postfix expression is %s\n",res); 
    i=0; 
    item=res[i]; 
    while(item!='\0') 
    { 
        if(isalpha(item)!=0) 
        { 
            printf("Enter the value of %c : ",item); 
            scanf("%d",&val); 
            pushint(val); 
        } 
        else 
        { 
            op=item; 
            x=popint(); 
            y=popint(); 
            t=compute(y,x,op); 
            pushint(t); 
        } 
        i++; 
        item=res[i]; 
    } 
    Result=popint(); 
    printf("Postfix Evaluation= %d\n",Result); 
}
void push(char item) 
{ 
    top=top+1; 
    s[top]=item; 
} 
char pop() 
{ 
    char item; 
    item=s[top]; 
    top=top-1; 
    return item; 
} 
int pr(char c) 
{ 
    if(c=='('||c==')') 
        { 
            return 0; 
        } 
    else if(c=='+'||c=='-') 
    { 
        return 1; 
    } 
    else if(c=='*'||c=='/') 
    { 
        return 2; 
    } 
    else if(c=='^') 
    { 
        return 3; 
    }
} 
void pushint(int item) 
{ 
    to=to+1; 
    j[to]=item; 
} 
int popint() 
{ 
    int item; 
    item=j[to]; 
    to=to-1; 
    return item; 
} 
int compute(int y,int x,char op) 
{ 
    int ans;
    if(op=='+') 
    { 
        ans=y+x; 
    } 
    else if(op=='-') 
    {   
        ans=y-x; 
    } 
    else if(op=='/') 
    { 
        ans=y/x; 
    } 
    else if(op=='*') 
    { 
        ans=y*x; 
    } 
    else if(op=='^') 
    { 
    ans=pow(y,x); 
    } 
    return ans; 
}
/*OUTPUT
Enter the infix expression: (a+b)*(c-d)
The resultant postfix expression is ab+cd-*
Enter the value of a : 1
Enter the value of b : 2
Enter the value of c : 3
Enter the value of d : 4
Postfix Evaluation= -3
*/