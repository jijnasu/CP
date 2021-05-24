#include<stdio.h>
int main()
{
    float x,y;
    char opr;
    printf("Enter an operator:");
    scanf("%c",&opr);
    printf("Enter two operands:");
    scanf("%f%f",&x,&y);
//    printf("");
    switch(opr)
    {
        case '+' :  printf("%f+%f=%f",x,y,x+y);
                    break;
        case '-' :  printf("%f-%f=%f",x,y,x-y);
                    break;
        case '*' :  printf("%f*%f=%f",x,y,x*y);
                    break;
        case '/' :  printf("%f/%f=%f",x,y,1.0*x/y);
//                    break;
//          default  : printf("Wrong input... Please retry...");
    }
    return 0;
}
