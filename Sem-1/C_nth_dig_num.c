#include<stdio.h>
int main()
{
    int n=12345,d=3,i;
    printf("Enter the number and the place of digit : ");
    scanf("%d%d",&n,&d);
    for(i=1;i<d;i++)
        n/=10;
    printf("The digit is : %d",n%10);
    return 0;
}