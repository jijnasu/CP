//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints the distance using the formula s = ut + (at^2)/2...


#include<stdio.h>
void main()
{
    float s,u,t,a;
    printf("Enter the following :");
    printf("\nInitial Velocity : ");
    scanf("%f",&u);
    printf("Acceleration : ");
    scanf("%f",&a);
    printf("Time : ");
    scanf("%f",&t);
    s=u*t+a*t*t/2;
    printf("So the Distance covered = %f\n",s);

}
