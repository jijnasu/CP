#include<stdio.h>
int main()
{
    int s,a[15],i,ele,loc;
    printf("Enter the number of elements : ");
    scanf("%d",&s);
    printf("Enter the elements : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    printf("Enter element to be updated : ");
    scanf("%d",&ele);
    for(i=0;i<s;i++)
        if(a[i]==ele)
        {
            printf("Enter the new element : ");
            scanf("%d",&ele);
            a[i]=ele;
            break;
        }
    // a[loc-1]=ele;
    printf("The updated array is :\n");
    for(i=0;i<s;i++)
        printf("%d  ",a[i]);
    return 0;
}