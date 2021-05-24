//20BCSE50
//Kumar Jijnasu
//A2 19

//The program interchange the values of x, y and z without using fourth variable...


#include<stdio.h>
void main()
{
    int x=2,y=3,z=4;
    printf("Before Swapping: x=%d , y=%d , z=%d",x,y,z);
    x=x+y+z;
    z=x-y-z;
    y=x-y-z;
    x=x-y-z;

    printf("\nAfter  Swapping: x=%d , y=%d , z=%d",x,y,z);
}
