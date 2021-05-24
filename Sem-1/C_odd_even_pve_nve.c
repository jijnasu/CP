#include<stdio.h>
int main()
{
    int s,a[15],i,ele,pos;
    printf("Enter the number of elements : ");
    scanf("%d",&s);
    printf("Enter the elements : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    printf("\nOdd elements are : ");
    for(i=0;i<s;i++)
        if(a[i]%2!=0)
            printf("%d  ",a[i]);
    printf("\nEven elements are : ");
    for(i=0;i<s;i++)
        if(a[i]%2==0)
            printf("%d  ",a[i]);
    printf("\nPositive elements are : ");
    for(i=0;i<s;i++)
        if(a[i]>0)
            printf("%d  ",a[i]);
    printf("\nNegative elements are : ");
    for(i=0;i<s;i++)
        if(a[i]<0)
            printf("%d  ",a[i]);

    return 0;



}

