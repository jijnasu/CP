#include<stdio.h>
int main()
{
    int n=8128,i,k=6,sum;
    printf("Enter the range(a,b) : ");
    scanf("%d%d",&k,&n);
    printf("The Perfect Numbers are :");
    for(;k<=n;k++)
    {   sum=1;
        for(i=2;i<=k/2;i++)
        if(k%i==0)
            sum+=i;
//        printf()
//        printf("\n%d",sum);
        if(k==sum)
            printf("%d, ",k);
    }
    return 0;

}

//int main()
//{
//    long n=2118128,i,j,k,sum=1;
////    printf("Enter the range : ");
////    scanf("%d",&n);
//    printf("The Perfect Numbers are :");
//    for(k=6;k<=n;k++)
//    {
//        sum=1;
//        for(i=2,j=k/i;i<j;i++,j=k/i)
//        if(k%i==0)
//
//
//         sum+=(i+j);
////        printf()
////        printf("\n%d",sum);
//
//
//        if(k==sum)
//            printf("\n%ld",k);
//    }
//        printf("##%d",k);
//    return 0;
//}
