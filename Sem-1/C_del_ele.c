#include<stdio.h>
int main()
{
    int s,a[15],i,ele,pos;
    printf("Enter the number of elements : ");
    scanf("%d",&s);
    printf("Enter the elements : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be deleted : ");
    scanf("%d",&ele);
    for(i=0;i<s;i++)
        if(a[i]==ele)
        {
            pos=i;
            break;
        }
    if(i<s)
    {
        for(i=pos;i<s-1;i++)
            a[i]=a[i+1];
        printf("The new array is : ");
        for(i=0;i<s-1;i++)
            printf("%d  ",a[i]);
    }
    else
        printf("The element not found...\n ");
    return 0;
}
