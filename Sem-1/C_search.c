#include<stdio.h>
int main()
{
    int s,a[15],i,ele,pos;
    printf("Enter the number of elements : ");
    scanf("%d",&s);
    printf("Enter the elements : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be searched : ");
    scanf("%d",&ele);
    for(i=0;i<s;i++)
        if(a[i]==ele)
        {
            pos=i;
            break;
        }
    if(i<s)
        printf("The position is : %d",pos+1);
    else
        printf("The element not found...");
    return 0;
}
