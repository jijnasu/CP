#include<stdio.h>
// #include<math.h>
int main()
{
    int num,res=0,temp;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp=num;
    while(temp)
    {
        res+=pow((temp%10),3);
        temp/=10;
    }
    if(num==res)
        printf("%d is an Armstrong number...",num);
    else
        printf("%d is not an Armstrong number...",num);
    return 0;
}
