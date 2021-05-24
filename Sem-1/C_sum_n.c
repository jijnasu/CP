//20BCSE50
//Kumar Jijnasu
//A2 19

//The program prints the sum of first n numbers...


#include<stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("The sum of first %d number is : %d\n",n,sum);
    return 0;
}
