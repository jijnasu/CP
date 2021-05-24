#include<stdio.h>
int main()
{
    int f1=0,f2=1,n,i;//,fibo
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("%d  %d",f1,f2);
    i=3;
    while(i<=n)
    {
        f2=f1+f2;
        printf("  %d",f2);
        f1=f2-f1;
//        f2=fibo;
        i++;
    }
    return 0;
}
