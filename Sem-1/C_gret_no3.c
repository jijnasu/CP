//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints the greatest of three numbers using conditional operators...


#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter three numbers :");
    scanf("%d%d%d",&x,&y,&z);
    printf("Greatest number is : ");
    if(x>y)
        if(x>z)
            printf("%d",x);
        else
            printf("%d",z);
    else
        if(y>z)
            printf("%d",y);
        else
            printf("%d",z);
}


//#include<stdio.h>
//int main()
//{
//    int x,y,z;
//    printf("Enter two numbers :");
//    scanf("%d%d%d",&x,&y,&z);
//    printf("\nThe greatest number is : ");
//    printf("%d",(x>y)?(x>z?x:z):(y>z?y:z));
//}
