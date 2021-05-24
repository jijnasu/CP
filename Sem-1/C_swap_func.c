#include<stdio.h>

void swap(int *a, int *b);

int main()
{
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    printf("Before swapping : x = %d , y = %d",x,y);
    swap(&x,&y);
    printf("\nAfter swapping : x = %d , y = %d",x,y);

}

void swap(int *a,int *b)
{
    *a+=*b;
    *b=*a-*b;
    *a-=*b;
}
