//20BCSE50
//Kumar Jijnasu
//A2 19

//The program converts the rectangular coordinate to polar form...


#include<stdio.h>
//#include<math.h>
void main()
{
    float x,y,r,the;
    printf("Enter the rectangular coordinates(x,y) : ");
    scanf("%f%f",&x,&y);
    r=sqrt(x*x+y*y);
    the=atan(y/x);
    if(x<0 && y<0)
        the=-(22.0/7-the);
//    else
//    if (y<0)
//        the=22.0/7-the;
    else
    if (x<0)
        the+=22.0/7;
    printf("The polar coordinate system : r = %f and theta = %f",r,the*180/3.14);

}
