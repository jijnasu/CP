#include<stdio.h>
int fact(int n)
{
   int f;
   if(n<=1)
       return 1;
   else
       return n*fact(n-1);
//    return f;
}

int main()
{
    int n=5;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Factorial is %d",fact(n));
    return 0;
}



// #include<stdio.h>
// int fact(int );
// int main()
// {
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     printf("The factorial is : %d",fact(n));


// }


// int fact(int n)
// {
//     int factorial=1,i;
//     for(i=1;i<n+1;i++)
//         factorial*=i;
//     return factorial;
// }
