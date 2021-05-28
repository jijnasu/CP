#include<stdio.h>
#define size 5

void binary_search(int [],int);
void sort(int []);
void display(int []);

int main()
{
    int a[size],ele,i;
    printf("Enter the elements : ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("The array is : ");
    display(a);
    sort(a);
    printf("After sorting the array is : ");
    display(a);
    printf("Enter the elements to be searched : ");
    scanf("%d",&ele);
    binary_search(a,ele);

    return 0;

}



void sort(int a[])
{
    int i,j,key;
    for(i=1;i<size;i++)
    {
        key=a[i];
        for(j=i-1;j>=0;j--)
            if(key<a[j])
                a[j+1]=a[j];
            else
                break;

        a[j+1]=key;
    }
}


void binary_search(int a[],int ele)
{
    int low=0,high,mid;
    high=size-1;
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
    // printf("%d",mid+1);
    if(low<=high)
        printf("Position of the element is : %d",mid+1);
    else
        printf("Element not found...");


}


void display(int a[])
{
    int i=0;
    for(;i<size;i++)
        printf("%d  ",a[i]);
    printf("\n");
}


