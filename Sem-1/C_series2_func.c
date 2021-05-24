#include<stdio.h>
#include<math.h>
float series(int,int);
int main()
{
    int t,x;
    printf("Enter x & the number of terms : ");
    scanf("%d%d",&x,&t);
    printf("Sum is : %f",series(t,x));
    return 0;
}

float series(int t,int x)
{
    int i;
    float fact=1,ser=1;
    for(i=1;i<=t;i++)
    {
        fact*=i;
        ser+=(pow(x,i)/fact);
    }
    return ser;
}
