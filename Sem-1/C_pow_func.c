#include<stdio.h>

float power(int ,int);

int main()
{
    int x,y;
    printf("Enter the values(x^y) : ");
    scanf("%d%d",&x,&y);
    printf("The result = %f",power(x,y));
    return 0;
}

float power(int a,int b)
{
    int i;
    float res=1;
    for(i=0;i<abs(b);i++)
        if(b>0)
            res*=a;
        else
            res/=a;

    return res;
}


