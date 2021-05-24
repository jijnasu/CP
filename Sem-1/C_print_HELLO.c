#include<stdio.h>
int main()
{
    int i,j;
    char s[]="Hello";
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
            printf("%c ",s[j]);
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
            printf("%c ",s[j]);
        printf("\n");
    }
    return 0;
}
