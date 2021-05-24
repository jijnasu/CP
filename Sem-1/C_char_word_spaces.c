#include<stdio.h>
#include<ctype.h>
void count(char []);
int main()
{
    char s[80];
    printf("Enter a string : ");
    gets(s);
    count(s);
    return 0;
}

void count(char s[])
{
    int i=0,words=0,spaces=0,chars=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
            spaces++;
        chars++;
        if(isalpha(s[i]) && isalpha(s[i+1]) && !isalpha(s[i+2]))
            words++;
    }
    printf("Characters= %d\nWords= %d\nSpaces= %d",chars,words,spaces);
}

        
        
        

        // {
            // printf("=%d=",i);
        // }