#include<stdio.h>
int main()
{
    int a[10],i,size,pos;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("Enter the elements of array : ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("Enter the position : ");
    scanf("%d",&pos);
    for(i=pos;i<size;i++)
        a[i-1]=a[i];
    printf("The new array is : \n");
    for(i=0;i<size-1;i++)
        printf("%d  ",a[i]);
    return 0;
}
