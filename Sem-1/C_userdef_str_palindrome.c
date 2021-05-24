#include<stdio.h>
int Palindrome(char []);
void main()
{
    char s[80];
    printf("Enter string : ");
    gets(s);
    if(Palindrome(s))
        printf("String is Palindrome...");
    else
        printf("String is not a Palindrome...");
}

int Palindrome(char s[])
{
    int len=0,i,f=1;
    for(len=0;s[len]!='\0';len++);
    for(;i<len/2;i++)
        if(s[i]!=s[len-1-i])
        {
            f=0;
            break;
        }
    return f;
}
