#include<stdio.h>
void reverse(char []);
int main()
{
    char s[20];
    printf("Enter a string : ");
    gets(s);
    printf("Reverse string : ");
    reverse(s);
}

void reverse(char s[])
{
    int i,len;
    for(len=0;s[len]!='\0';len++);
    for(i=len-1;i>=0;i--)
        putch(s[i]);

}