#include<stdio.h>
void main()
{
    int a1[10],a2[10],am[20],n,i,j,m1,m2,pos,k;
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    printf("Enter array1 : ");
    for(i=0;i<n;i++)
        scanf("%d",&a1[i]);
    printf("Enter array2 : ");
    for(i=0;i<n;i++)
        scanf("%d",&a2[i]);
    for(i=0;i<n;i++)
    {
        m1=a1[i];
        pos=i;
        for(j=i+1;j<n;j++)
            if(a1[j]>m1)
            {
                m1=a1[j];
                pos=j;
            }
        a1[pos]=a1[i];
        a1[i]=m1;
    }
    for(i=0;i<n;i++)
    {
        m1=a2[i];
        pos=i;
        for(j=i+1;j<n;j++)
            if(a2[j]>m1)
            {
                m1=a2[j];
                pos=j;
            }
        a2[pos]=a2[i];
        a2[i]=m1;
    }
    // for(i=0;i<n;i++)
    //     printf("=%d=",a1[i]);
    // for(i=0;i<n;i++)
    //     printf("~%d~",a2[i]);
    for(k=0,i=0,j=0;k<2*n;k++)
    {
        if(i!=n && j!=n)
            if(a1[i]>a2[j])
                am[k]=a1[i++];
            else
                am[k]=a2[j++];
        else if(j==n)
            am[k]=a1[i++];
        else if(i==n)
            am[k]=a2[j++];
    }


    printf("The merged array is : ");
    for(k=0,i=0,j=0;k<2*n;k++)
        printf("-%d-",am[k]);
}