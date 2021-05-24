//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints sum of digits of the given number...


#include<stdio.h>
void main()
{
    int n=1235,r=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("\nThe digits of the number are : ");
    while (n)
    {
        r=r+n%10;
        printf(" %d ",n%10);
        n/=10;
    }
    printf("\nSum of digits of the number is %d",r);
//    printf("%d",r);
}
