#include<stdio.h>
#include<stdlib.h>


void swap(int a[],int i,int j)
{
    int temp;
    temp = a[i];
    a[i]=a[j];
    a[j]=temp;
}

int partition(int a[],int l,int r)
{
    int p = a[r],i=l-1,j=l;
    while(j<r)
        if(a[j++]<p)
        {
            i++;
            swap(a,i,j-1);
        }
        swap(a,++i,r);
    return i;
}

void quicksort(int a[],int l,int r)
{
    if(l<r)
    {
        int pi = partition(a,l,r);
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,r);

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
    quicksort(arr,l,r-1);
    printf("After merge sort : ");
    display(arr,r);
}
