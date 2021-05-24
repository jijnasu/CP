#include<stdio.h>
int strcomp(char [],char []);
int main()
{
    char s1[10],s2[10];
    printf("Enter 1st string : ");
    gets(s1);
    printf("Enter 2nd string : ");
    gets(s2);
    if(strcomp(s1,s2))
        printf("The two strings are same...");
    else
        printf("The two strings are not same...");
    return 0;
}

int strcomp(char s1[],char s2[])
{
    int i=0,f=1;
    while(s1[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            f=0;
            break;
        }
        i++;
    }
    if(s1[i]!=s2[i])
        f=0;

    return f;
}


