#include<stdio.h>
int main()
{
    int i=10,num,d,f=1;
    printf("The number with same digits : ");
    for(i=10;i<=1000;i++)
    {
        f=1;
        num=i;
        d=num%10;
        while(num)
        {
            if(num%10!=d)
            {
                f=0;
                break;
            }
            num/=10;
        }
        if(f)
            printf("%d, ",i);
    }
    return 0;
}
            // printf("%d, ",i);
            // printf("%d, ",i);
            // printf("%d, ",i);
