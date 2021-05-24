#include<stdio.h>
int sum(int *,int);
int main()
{
    int a[10],n,i;
    int *ptr=a;
    printf("Enter size : ");
    scanf("%d",&n);

    printf("Enter the array : ");
    for(i=0;i<n;i++)
        scanf("%d",ptr+i);
    printf("The sum is : %d",sum(ptr,n));

}

int sum(int* x,int n)
{
    int i,sumarr=0;
//    for(i=0;i<n;i++)
//        printf("%d--",x[i]);
    for(i=0;i<n;i++)
        sumarr+=*(x+i);
    return sumarr;
}
