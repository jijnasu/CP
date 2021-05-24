#include<stdio.h>
int factorial(int);
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    printf("Factorial = %d",factorial(x));
}

int factorial(int x)
{
    int fact=1;
    while(x)
        fact*=x--;
    return fact;
}