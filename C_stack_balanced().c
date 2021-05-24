//to check if an expression is parenthesis balanced using stack
#include<stdio.h>
#define size 10

void push(char [],int*,char);
void pop(char [],int*);
int isbalanced(char [],char [],int *);

void main()
{
    char str[size],stk[size],flag=1;
    int top=-1,i;
    printf("Enter the expression : ");
    gets(str);
    printf("The expression is : ");
    puts(str);
    flag=isbalanced(stk,str,&top);
    if(flag)   
        printf("Expression is balanced");
    else
        printf("Expression not is balanced");
        

}

void push(char s[],int *t,char c)
{
    if(*t<size)
        s[++(*t)]=c;
    else
        printf("Stack overflow...");
}

void pop(char s[],int *t)
{
    (*t)--;
}

int isbalanced(char stk[],char str[],int *top)
{
    int i,flag=1;
    for(i=0;str[i]!='\0';i++)
        if(str[i]=='(')
            push(stk,top,str[i]);
        else if(str[i]==')' && *top>=0)
            pop(stk,top);
        else if(str[i]==')')
            flag=0;

    if(*top!=-1)
        flag=0;
    return flag;   
    
}








            // printf("---%c---",pop(stk,&top));
    // for(i=0;top!=-1;i++)
    //     str[i]=pop(stk,&top);
    // printf("The reverse is : ");
    // puts(str);
    // puts(s);
    // printf("#\n");
    // return s[*t+1];