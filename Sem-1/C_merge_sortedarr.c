#include<stdio.h>
int main()
{
    int n,m,a[15],b[15],r[15],i,j,k;
    printf("Enter the number of elements first array : ");
    scanf("%d",&n);
    printf("Enter the elements of first array : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number of elements second array : ");
    scanf("%d",&m);
    printf("Enter the elements of second array : ");
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(i=0,j=0,k=0;k<m+n;k=i+j)
    {
        if(i<n && j<m)
            if(a[i]<b[j])
                r[k]=a[i++];
//                printf("##%d",a[i++]);
            else
                r[k]=b[j++];
        else if(i<n)
            r[k]=a[i++];
        else
            r[k]=b[j++];
    }


    printf("So the merged array : ");
    for(i=0;i<m+n;i++)
        printf("%d  ",r[i]);
    return 0;
}

