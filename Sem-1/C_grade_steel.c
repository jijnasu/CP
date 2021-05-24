#include<stdio.h>
int main()
{
    int hard,tensile;
    float carbon;
    printf("Enter the Hardness, Carbon Content & Tensile strength of steel : ");
    scanf("%d%f%d",&hard,&carbon,&tensile);
    printf("So the Steel is of grade : ");
    if(hard>50 && carbon<0.7 && tensile>5600)
        printf("10");
    else 
    {   
        if(hard>50 && carbon<0.7 )
            printf("9");
        else if(carbon<0.7 && tensile>5600)
            printf("8");
        else if(hard>50 && tensile>5600)
            printf("7");
        else if(hard>50 || carbon<0.7 || tensile>5600)
            printf("6");
        else // if(hard>50 && carbon<0.7 && tensile>5600)
            printf("5");
    }
    return 0;
}
