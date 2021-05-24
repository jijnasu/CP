#include<stdio.h>
int main()
{
    int s,a[15],i,ele,loc;
    printf("Enter the number of elements : ");
    scanf("%d",&s);
    printf("Enter the elements : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    printf("Enter the location with new element : ");
    scanf("%d%d",&loc,&ele);
    a[loc-1]=ele;
    printf("The updated array is :\n");
    for(i=0;i<s;i++)
        printf("%d  ",a[i]);
    return 0;
}
