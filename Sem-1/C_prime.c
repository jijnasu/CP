#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
        if(n%i==0)
            break;
    if(n%i==0)
        printf("The number is not a prime...");
    else
        printf("The number is prime...");
    return 0;

}
