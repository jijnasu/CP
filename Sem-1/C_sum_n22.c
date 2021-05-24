//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints the sum of the squares of first n numbers...


#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    do
        sum+=(n*n);
//        printf("%d\n",n);
    while(--n);
    printf("The sum of the series = %d\n",sum);
    return 0;
}


