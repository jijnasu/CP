//20BCSE50
//Kumar Jijnasu
//A2 19

//The program swaps two number without using 3rd variable...


#include<stdio.h>
void main()
{
    int a=5,b=9;
    printf("Before swapping: a=%d and b=%d\n",a,b);
    a+=b;
    b=a-b;
    a=a-b;
    printf("After swapping: a=%d and b=%d\n",a,b);
//    printf("%d  %d",a,b);
}
