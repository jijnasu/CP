#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter the no. of terms : ");
    scanf("%d",&n);
    printf("The sum is : %d",sum(n));
    return 0;
}

int sum(int n)
{
    if(n>0)
        return n+sum(n-1);
    else
        return 0;
}
