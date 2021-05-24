#include<stdio.h>
int subcount(char [],char []);
int main()
{
    char s[80],ss[80],count=0;
    printf("Enter a string : ");
    gets(s);
    printf("Enter 2nd string : ");
    gets(ss);
    count=subcount(s,ss);
    if(count)
    {
        printf("2nd string is a substring of 1st one...");
        printf("\nOccurrence = %d",count);
    }
    else
        printf("2nd string is not a substring of 1st one...");
}

int subcount(char s[],char ss[])
{
    int i,j,t=0,len=0,len2=0,count=0;
    for(len=0;s[len]!='\0';len++);
    for(len2=0;ss[len2]!='\0';len2++);
    for(i=0;i<=len-len2;i++)
        if(s[i]==ss[0])
        {
            t=0;
            for(j=1;j<len2;j++)
                if(ss[j]!=s[i+j])
                {
                    t++;
                    break;
                }
            if(t==0)
                count++;
        }
    return count;
}





//    printf("--%d",count);
//    puts(s);
//    puts(ss);
//    printf("%d",count);
        // putch(s[i]);
