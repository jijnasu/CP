#include<stdio.h>
void LCM(int,int);
int main()
{
    int x,y;
    printf("Enter two number : ");
    scanf("%d%d",&x,&y);
    LCM(x,y);
    return 0;
}
void LCM(int x,int y)
{
    int lcm,max,i=2;
    lcm=max=x>y?x:y;
    while(lcm%x!=0 || lcm%y!=0)
        lcm=max*i++;
    printf("The LCM is : %d",lcm);
}
