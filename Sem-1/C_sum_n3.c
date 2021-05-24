//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints the sum of the cubes of first n numbers...


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("The sum of cubes of first %d number is : %d\n",n,n*n*(n+1)*(n+1)/4);
    return 0;
}

