//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints area and perimeter of given rectangle...


#include<stdio.h>
void main()
{
    float len,wid;
    printf("Enter the length and width of rectangle:");
    scanf("%f%f",&len,&wid);
    printf("\nArea = %f",len*wid);
    printf("\nPerimeter = %f",2*(len+wid));
}
