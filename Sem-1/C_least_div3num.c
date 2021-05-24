#include<stdio.h>
int main()
{
    int n1,n2,n3,i,num;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    num=(n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3));
    while(num)
    {
        if(num%n1==0 && num%n2==0 && num%n3==0)
        {   printf("%d",num);
            break;
        }
        num++;
    }



    return 0;
}
