#include<stdio.h>
int power(int,int);
int main()
{
    int n,p;
    printf("Enter the no. & power : ");
    scanf("%d%d",&n,&p);
    printf("The power is : %d",power(n,p));
    return 0;
}

int power(int n,int p)
{
    if(p>0)
        return n*power(n,p-1);
    else
        return 1;
}