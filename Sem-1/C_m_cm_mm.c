//20BCSE50
//Kumar Jijnasu
//A2 19

//The program converts millimeter to Meter:Centimeter:Millimeter ...


#include<stdio.h>
void main()
{
    int dis;
    printf("Enter distance in Millimeter :");
    scanf("%d",&dis);
    printf("So distance in Meter:Centimeter:Millimeter format is %dm : %dcm : %dmm ",dis/1000,(dis%1000)/10,(dis%1000)%10);


}
