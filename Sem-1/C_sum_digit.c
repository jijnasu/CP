#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num)
    {
        sum+=(num%10);
        num/=10;
    }
    printf("The sum of the digits = %d",sum);
    return 0;
}
