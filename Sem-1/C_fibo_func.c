#include<stdio.h>
void fibonacci(int);
int main()
{
    int t;
    printf("Enter the terms : ");
    scanf("%d",&t);
    printf("The series is : ");
    fibonacci(t);
}

void fibonacci(int t)
{
    int f1=0,f2=1,i=0;
    for(;i<t;i++)
    {
        printf("%d ",f1);
        f2+=f1;
        f1=f2-f1;
    }
}