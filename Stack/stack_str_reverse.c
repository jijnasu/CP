// to reverse a string using stack
#include<stdio.h>
#define size 10

void push(char [],int*,char);
char pop(char [],int*);

void main()
{
    char str[size],stk[size];
    int top=-1,i;
    printf("Enter the string : ");
    gets(str);
    printf("The string is : ");
    puts(str);
    for(i=0;str[i]!='\0';i++)
        push(stk,&top,str[i]);
    for(i=0;top!=-1;i++)
        str[i]=pop(stk,&top);
    printf("The reverse is : ");
    puts(str);

}

void push(char s[],int *t,char c)
{
    if(*t<size)
        s[++(*t)]=c;
    else
        printf("Stack overflow...");
}

char pop(char s[],int *t)
{
    if(*t>-1)
    {
        (*t)--;
        return s[*t+1];
    }
    else
        printf("Stack underflow : ");
}