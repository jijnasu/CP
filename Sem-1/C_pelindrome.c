#include<stdio.h>
void main()
{
   int n=1234,rev=0,t;
   printf("Enter a number : ");
   scanf("%d",&n);
   t=n;
   while (n)
   {
       rev=rev*10+n%10;
       n/=10;
   }
   if(rev==t)
       printf("The number %d is Palindrome...",t);
   else
       printf("The number %d is not Palindrome...",t);
}
// void main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     if(n/100 == n%10)
//         printf("The number %d is Palindrome...",n);
//     else
//         printf("The number %d is not Palindrome...",n);
// }
