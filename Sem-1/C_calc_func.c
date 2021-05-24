#include<stdio.h>

int sum(int a,int b);
int diff(int a,int b);
int multi(int a,int b);
float div(int a,int b);

int main()
{
    int x,y;
    float res;
    char op;
    printf("Enter the expression : ");
    scanf("%d%c%d",&x,&op,&y);

    printf("The result is : ");
    switch(op)

    {
        case '+':   res=sum(x,y);
                    break;
        case '-':   res=diff(x,y);
                    break;
        case '*':   res=multi(x,y);
                    break;
        case '/':   res=div(x,y);
                    break;
        default :   printf("Wrong Input...");

    }
    printf("%f",res);
    return 0;
}



int sum(int a,int b)
{
    return a+b;
}

int diff(int a,int b)
{
    return a-b;
}

int multi(int a,int b)
{
    return a*b;
}

float div(int a,int b)
{
    return 1.0*a/b;
}

