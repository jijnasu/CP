#include<stdio.h>
int main()
{
    int n1=24,n2=3,n3=12,hcf;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);

    hcf=(n1<n2?(n1<n3?n1:n3):(n2<n3?n2:n3));
    for(;hcf>0;hcf--)
        if(n1%hcf==0 && n2%hcf==0 && n3%hcf==0)
            break;
    printf("So, GCD : %d",hcf);
    return 0;

}
