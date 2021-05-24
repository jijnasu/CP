//20BCSE50
//Kumar Jijnasu
//A2 19

//The program converts the polar form to rectangular coordinate...


#include<stdio.h>
void main()
{
    float x,y,r,the;
    printf("Enter the coordinates in polar form(r,theta) : ");
    scanf("%f %f",&r,&the);
    the=the/180*22.0/7;
    x=r*cos(the);
    y=r*sin(the);
    printf("So the rectangular coordinate system : x = %f and y = %f",x,y);

}

