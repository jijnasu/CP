#include<stdio.h>
int main()
{
    int s,a[15],b[15],r[15],i,ele,pos;
    printf("Enter the number of elements : ");
    scanf("%d",&s);
    printf("Enter the elements of first array : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    printf("Enter the elements of second array : ");
    for(i=0;i<s;i++)
    {
        scanf("%d",&b[i]);
        r[i]=a[i]*b[i];
    }

    printf("The resultant array : ");
    for(i=0;i<s;i++)
        printf("%d  ",r[i]);
    return 0;
}











