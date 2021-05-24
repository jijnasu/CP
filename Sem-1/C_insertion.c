#include<stdio.h>
int main()
{
    int a[10],i,size,ele,pos;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("Enter the elements of array : ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("Enter the element and the position : ");
    scanf("%d%d",&ele,&pos);

    for(i=size;i>=pos;i--)
        a[i]=a[i-1];
    a[i]=ele;
    printf("The new array of size %d is : \n",size+1);
    for(i=0;i<=size;i++)
        printf("%d  ",a[i]);
    return 0;
}
