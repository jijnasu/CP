#include<stdio.h>
#include<ctype.h>
void upper(char []);
void main()
{
    char s[80];
    printf("Enter a string : ");
    gets(s);
    upper(s);
}
    
void upper(char s[])
{
    int i=0;
    for(;s[i]!='\0';i++)
        s[i]=toupper(s[i]);
    puts(s);
}

