#include<stdio.h>
int main()
{
    int a[10],i,size,temp;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    for(i=0;i<size/2;i++)
    {
        temp=a[i];
        a[i]=a[size-1-i];
        a[size-1-i]=temp;
//        a[i]=a[i]+a[size-1-i];
//        a[size-1-i]=a[i]-a[size-1-i];
//        a[i]=a[i]-a[size-1-i];
    }
    printf("Reverse of the array is : ");
    for(i=0;i<size;i++)
        printf("%d  ",a[i]);
    return 0;
}
