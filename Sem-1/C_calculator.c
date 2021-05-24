//20BCSE50
//Kumar Jijnasu
//The program calculates prints as per the given input...
#include<stdio.h>
int main()
{
    int x,y;
    char opr;
    printf("Enter your Expression : ");
    scanf("%d%s%d",&x,&opr,&y);
//    printf("");
    switch(opr)
    {
        case '+' :  printf("The result is : %d",x+y);
                    break;
        case '-' :  printf("The result is : %d",x-y);
                    break;
        case '*' :  printf("The result is : %d",x*y);
                    break;
        case '/' :  printf("The result is : %f",1.0*x/y);
                    break;
        default  : printf("Wrong input... Please retry...");
    }
    return 0;
}
