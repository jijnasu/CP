#include<stdio.h>
float series(int);
int main()
{
    int t;
    printf("Enter the number of terms : ");
    scanf("%d",&t);
    printf("Sum is : %f",series(t));
    return 0;
}

float series(int t)
{
    int i;
    float fact=1,ser=0;
    for(i=1;i<=t;i++)
    {
        fact*=i;
        ser+=(1/fact);
    }
    return ser;
}