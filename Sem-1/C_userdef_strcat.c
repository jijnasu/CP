#include<stdio.h>
void strcatt(char [],char []);
int main()
{
    char s1[10],s2[10],*s;
    printf("Enter 1st string : ");
    gets(s1);
    printf("Enter 2st string : ");
    gets(s2);
    strcatt(s1,s2);
    // printf("%s",strcatt(s1,s2));
    // printf("%s",s);
    // puts(s);
    return 0;
}

void strcatt(char s1[],char s2[])
{
    char s[20];
    int i,j;
    for(i=0;s1[i]!='\0';i++)
        s[i]=s1[i];
    s[i++]=' ';
    for(j=0;s2[j]!='\0';j++)
        s[i+j]=s2[j];
    s[i+j]='\0';
    printf("The merged string is : %s",s);
    // puts(s);
    // return s;
}
