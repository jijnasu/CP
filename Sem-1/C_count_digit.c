#include<stdio.h>
int main()
{
    int n,i,a[10]={0,0,0,0,0,0,0,0,0,0};
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n)
    {
        a[n%10]++;
        n/=10;
    }
    printf("The digits are : \n");
    for(i=0;i<10;i++)
        printf("%d : %d times\n",i,a[i]);
    return 0;
}
