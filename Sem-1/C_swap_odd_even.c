#include<stdio.h>
int main()
{
    int a[15],s,i;
    printf("Enter the size of elements : ");
    scanf("%d",&s);
    printf("Enter the elements : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    for(i=0;i<s;i+=2)
    {
        a[i]+=a[i+1];
        a[i+1]=a[i]-a[i+1];
        a[i]=a[i]-a[i+1];
    }
    printf("The new array is : ");
    for(i=0;i<s;i++)
        printf("%d  ",a[i]);
    return 0;

}