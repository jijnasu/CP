#include<stdio.h>
void fibo(int,int,int);
void fibo(int n,int f,int s)
{
    if(n)
    {
        printf("%d  ",f);
        s+=f;
        f=s-f;
        fibo(n-1,f,s);
    }
}

int main()
{
    int n=8;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    fibo(n,0,1);
    return 0;
}




// #include<stdio.h>
// void fibo(int );
// int main()
// {
//     int n;
//     printf("Enter the number of terms : ");
//     scanf("%d",&n);
//     fibo(n);


// }

// void fibo(int n)
// {
//     int f=0,s=1,i;
//     for(i=0;i<n;i++)
//     {
//         printf("%d  ",f);
//         s+=f;
//         f=s-f;
//     }
// }







//#include<stdio.h>
//void fibo(int n,int f,int s)
//{
//    if(n>0)
//    {
//        printf("%d  ",f);
//        s+=f;
//        f=s-f;
//        fibo(n-1,f,s);
//    }
//
//}
//
//
//
//int main()
//{
//    int n=10;
//    printf("Enter number of terms : ");
//    scanf("%d",&n);
//
//    fibo(n,0,1);
//    return 0;
//}

