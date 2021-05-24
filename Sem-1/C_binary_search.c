#include<stdio.h>
int main()
{
    int a[15],s,i,low=0,high,mid,ele;
    printf("Enter the size of array : ");
    scanf("%d",&s);
    printf("Enter the elements : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    printf("Enter the elements to be searched : ");
    scanf("%d",&ele);
    high=s-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]>ele)
            high=mid-1;
        else if(a[mid]<ele)
            low=mid+1;
        else
            break;
    }

    if(low<=high)
        printf("Position of the element is : %d",mid+1);
    else
        printf("Element not found...");
    return 0;


}





