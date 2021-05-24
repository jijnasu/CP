//20BCSE50
//Kumar Jijnasu
//A2 19
//The program finds the square roots of given Quadratic equation...

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the Coefficients of the quadratic equation:");
    scanf("%d %d %d",&a,&b,&c);
    float d=(b*b-4*a*c);
    if (d>=0)
        printf("Real roots exist :\nAnd the roots are : %f and %f.",(0-b+sqrt(d))/(2.0*a),(0-b-sqrt(d))/(2.0*a));
    else
        printf("Real roots do not exist ... ");
}
