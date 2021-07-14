#include<stdio.h>
#include<stdlib.h>

#define size 5
int temp[size];

void merge(int *a,int strt,int ls,int rs)
{
    int i=strt,j=ls+1,k=0;
    while(i<=ls && j<=rs)
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    while(i<=ls)
        temp[k++]=a[i++];
    while(j<=rs)
        temp[k++]=a[j++];
    for(i=strt,k=0;i<=rs;i++,k++)
        a[i]=temp[k];
}

void mergesort(int *a,int l,int r)
{
    int mid,i;
    if(l<r)
    {
        mid = (l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}


void display(int *arr,int r)
{
    int i=0;
    printf("The array is : ");
    for(i=0;i<r;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
    

void main()
{
    int *arr,l=0,r,m,i=0;
    printf("Enter the size of array : ");
    scanf("%d",&r);
    arr = (int*)malloc(r*sizeof(int));
    printf("Enter the array : ");
    for(i=0;i<r;i++)
        scanf("%d",&arr[i]);
    display(arr,r);
    mergesort(arr,l,r-1);
    printf("The array after merge sort is : ");
    display(arr,r);
}

