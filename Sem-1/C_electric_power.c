#include<stdio.h>
void main()
{
    int cus_no,con;
    float bill;
    printf("Enter Customer number : ");
    scanf("%d",&cus_no);
    printf("Enter your power consumption : ");
    scanf("%d",&con);
    if (con<=200)
        bill=(0.5*con);
    else if (con<=400)
        bill=(100+0.65*(con-200));
    else if (con<=600)
        bill=(230+0.8*(con-400));
    else
        bill=(390+con-600);
    printf("Your Total charge is %f",bill);
}
