#include<stdio.h>
void main()
{
    int inc;
    printf("Enter your income : ");
    scanf("%d",&inc);
    if(inc<=150000)
        printf("No tax for you...");
    else if(inc<=300000)
        printf("Your tax is Rs%f ",0.1*inc);
    else
        printf("Your tax is Rs%f",0.2*inc);
}
