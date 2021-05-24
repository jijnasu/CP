#include<stdio.h>
int length(char []);
int main()
{
    char s[20];
    printf("Enter a string : ");
    gets(s);
    printf("Length = %d",length(s));
}

int length(char s[])
{
    int i,len;
    for(len=0;s[len]!='\0';len++);
    return len;

}