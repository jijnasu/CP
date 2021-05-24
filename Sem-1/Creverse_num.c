#include<stdio.h>
void main()
{
//    int r=5;
    int n=123456,r=0;
    printf("Reverse of the number %d is ",n);
    while (n)
    {
        r=r*10+n%10;
        n/=10;
    }
    printf("%d",r);



//    r+=(n%10);
//    n/=10;
//    r=r*10+(n%10);
//    n/=10;
//    r=r*10+(n%10);
//    n/=10;
}
