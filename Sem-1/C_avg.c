//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints the average marks of a student marks in 5 subject...


#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,m5;
    printf("Enter your marks in five subject : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    printf("The average mark is %f",(m1+m2+m3+m4+m5)/5.0);
}
