//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints the sum of the squares of first n numbers...


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("The sum of the series = %d\n",n*(n+1)*(2*n+1)/6);
    return 0;
}

