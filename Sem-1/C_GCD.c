#include<stdio.h>
int main()
{
    int n1,n2,gcd;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);
    gcd=(n1<n2?n1:n2);
    for(;gcd>=1;gcd--)
        if(n1%gcd==0 && n2%gcd==0)
        {
            printf("So, GCD = %d",gcd);
            break;
        }
    return 0;
}




// int main()
// {
//    int n1,n2,gcd;
//    printf("Enter two numbers : ");
//    scanf("%d%d",&n1,&n2);
//    while(n1!=n2)
//    {
//        if(n1>n2)
//            n1-=n2;
//        else
//            n2-=n1;
//    }
//    printf("%d",n1);
//    return 0;
// }








