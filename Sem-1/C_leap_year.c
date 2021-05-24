
//20BCSE50
//Kumar Jijnasu
//A2 19



#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Year :");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0)
        printf("The year %d is a leap year...",year);
    else
        printf("The year %d is not leap year...",year);


    return 0;
}
