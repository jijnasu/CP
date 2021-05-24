
//20BCSE50
//Kumar Jijnasu
//A2 19

//The program calculates and prints the Simple Interest...


#include<stdio.h>

void main()
{
    int P,T;
    float R;
    printf("Enter the following:\nPrincipal : ");
    scanf("%d",&P);
    printf("Rate of Interest : ");
    scanf("%f",&R);
    printf("Time : ");
    scanf("%d",&T);
    printf("\nThe Simple Interest = %f\n",P*R*T/100);
}
