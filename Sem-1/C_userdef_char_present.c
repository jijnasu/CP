#include<stdio.h>
int ifpresent(char [],char);
void main()
{
    char s[80],ch;
    printf("Enter string : ");
    gets(s);
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ifpresent(s,ch))
        printf("The character is present : ");
    else
        printf("The character is not present : ");
}


int ifpresent(char s[],char ch)
{
    int i=0;
    for(;s[i]!='\0';i++)
        if(s[i]==ch)
            return 1;
    return 0;
}
