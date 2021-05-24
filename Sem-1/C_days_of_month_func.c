#include<stdio.h>
void no_months(int,int);
int main()
{
    int m,y;
    printf("Enter the year & month : ");
    scanf("%d%d",&y,&m);
    no_months(y,m);
    return 0;
}

void no_months(int y,int m)
{
    int months[]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("No. of days = ");
    if(m==2 && ((y%4==0 && y%100!=0) || y%400==0))
        printf("%d",months[m-1]+1);
    else
        printf("%d",months[m-1]);
}