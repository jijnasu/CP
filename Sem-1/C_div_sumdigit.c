#include<stdio.h>
int main()
{
    int i=1,num=1,sum=0;
    printf("So the numbers are : ");
    for(i=1;i<=10000;i++)
    {
        num=i;
        sum=0;
        while(num)
        {
            sum+=(num%10);
            num/=10;
        }
        if(i%sum==0)
            printf("%d, ",i);
    }
    return 0;
}
