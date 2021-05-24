//20BCSE50
//Kumar Jijnasu
//A2 19
//28 Dec, 2020
//The program converts and prints the temperature in Celsius.

#include<stdio.h>
void main()
{
    float temp_f;
    printf("Enter the temperature in Fahrenheit :");
    scanf("%f",&temp_f);
    printf("The temperature in Celsius = %fC",(temp_f-32)*5/9);
}
