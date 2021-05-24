#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num%(11*13)==0)
        printf("The number is divisible by both 11 and 13...");
    else
        printf("The number is not divisible by both 11 and 13...");
}
