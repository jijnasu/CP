//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints the first and last digit of a given number...


#include<stdio.h>
void main()
{
    int num,sum=0;
    printf("Enter the Number : ");
    scanf("%d",&num);
    sum+=(num%10);
    while(num)
    {
        num/=10;
        if(num<10)
            break;
    }
    sum+=num;
    printf("The sum of the first and last digit of the number = %d",sum);

}
