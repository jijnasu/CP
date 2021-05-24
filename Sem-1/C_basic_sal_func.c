#include<stdio.h>
float Gsalary(int);
int main()
{
    int BS;
    printf("Enter the basic salary : ");
    scanf("%d",&BS);
    printf("The gross salary is : %f",Gsalary(BS));
    return 0;
}

float Gsalary(int bs)
{
    float da=0.6*bs,hra=0.15*bs;
    return bs+da+hra;
}