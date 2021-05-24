//20BCSE50
//Kumar Jijnasu
//A2 19

//The program gives the gross salary of a given salary...


#include<stdio.h>
void main()
{
    float sal;
    printf("Enter your Basic Salary : ");
    scanf("%f",&sal);
    printf("\nYour Gross Salary = %f",1.75*sal);
    printf("\nYour DA = %f",0.6*sal);
    printf("\nYour HRA = %f",0.15*sal);
}
