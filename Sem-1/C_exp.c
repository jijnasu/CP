//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints the result of an expression...


#include<stdio.h>
int main()
{
    int a,b,c,d;
    float x;
    printf("Enter the numbers for a,b,c,d:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(c==d)
        printf("ERROR : values of c and d cannot be equal...");
    else
    {
        x=1.0*(a-b)/(c-d);
        printf("So X = %f",x);
    }
}
