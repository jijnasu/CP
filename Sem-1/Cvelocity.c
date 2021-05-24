//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints the velocity using the formula v^2=u^2+2as...


#include<stdio.h>
void main()
{
    float v,u,s,a;
    printf("Enter the following :");
    printf("\nInitial Velocity : ");
    scanf("%f",&u);
    printf("Acceleration : ");
    scanf("%f",&a);
    printf("Distance covered : ");
    scanf("%f",&s);
    v=sqrt(u*u+2*a*s);
    printf("So the Final Velocity = %f\n",v);

}

