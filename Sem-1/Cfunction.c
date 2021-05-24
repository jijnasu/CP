//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints the value of t as a function of x ie t=ax3+bx2+cx+d....

#include<stdio.h>
void main()
{
    int a,b,c,d;
    float x,t;
    printf("Enter the values of constants(a, b, c & d) : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("Enter the values of x : ");
    scanf("%f",&x);
    t=a*x*x*x+b*x*x+c*x+d;
    printf("So the value of t(%f) = %f",x,t);

}

