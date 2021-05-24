#include<stdio.h>
void strcopy(char [],char []);
int main()
{
    char s1[20],s2[20];
    printf("Enter 1st string: ");
    scanf("%[^\n]",s1);
    printf("Enter 2nd string: ");
    scanf(" %[^\n]",s2);

    strcopy(s1,s2);
    return 0;
}

void strcopy(char s1[],char s2[])
{
    int i;
    for(i=0;s2[i]!='\0';i++)
        s1[i]=s2[i];

    s1[i]='\0';
    printf("The string is : %s",s1);
    printf("\nThe length of the string : %d",i);
}
    // puts(strcopy(s1));
//    puts(s);
//        printf("%c",s[i]);
    // return s2;
