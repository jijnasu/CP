#include<stdio.h>
void prime(int);
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    prime(x);
}

void prime(int x)
{   
    int f=1,i;
    for(i=2;i<=x/2;i++)
        if(x%i==0)
        {
            f=0;
            break;
        }
    if(f==1)
        printf("Number is prime...");
    else
        printf("Number is not a prime...");
}