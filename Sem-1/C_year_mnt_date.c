//20BCSE50
//Kumar Jijnasu
//A2 19

//The program converts no. of days in Year : Months : Days...


#include<stdio.h>
void main()
{
    int d;
    printf("Enter number of days : ");
    scanf("%d",&d);
    printf("So no. of days in Year : Months : Days format is %dY : %dM : %dD ",d/365,(d%365)/30,(d%365)%30);

}
