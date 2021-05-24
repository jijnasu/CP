#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers :");
    scanf("%d%d",&x,&y);
    printf("\nThe greatest number is : ");
    printf("%d",(x>y)?x:y);
    return 0;
}
