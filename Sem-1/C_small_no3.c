//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints the smallest of three numbers using conditional operators...


#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three numbers :");
    scanf("%d%d%d",&x,&y,&z);
    printf("\nThe smallest number is : %d",x<y?(x<z?x:z):(y<z?y:z));
}
