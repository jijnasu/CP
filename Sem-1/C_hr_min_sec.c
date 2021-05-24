//20BCSE50
//Kumar Jijnasu
//A2 19

//The program converts seconds in Hour:Minute:Second...


#include<stdio.h>
void main()
{
    int s;
    printf("Enter time in Seconds : ");
    scanf("%d",&s);
    printf("So time in Hour:Minute:Second is %d:%d:%d hr",s/3600,(s%3600)/60,(s%3600)%60);


}

