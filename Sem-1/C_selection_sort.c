#include<stdio.h>
int main()
{
    int s,a[15],i,j,pos,min;
    printf("Enter the number of elements : ");
    scanf("%d",&s);
    printf("Enter the elements : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    for(i=0;i<s;i++)
    {
        min=a[i];
//        pos=i;
        for(j=i+1;j<s;j++)
            if(a[j]<min)
            {
                min=a[j];
                pos=j;
            }
        if(min<a[i])
        {
            a[pos]=a[i];
            a[i]=min;
        }

    }
    printf("The sorted array : ");
    for(i=0;i<s;i++)
        printf("%d ",a[i]);
    return 0;
}










//    printf("Enter the element to be deleted : ");
//    scanf("%d",&ele);
//    for(i=0;i<s;i++)
//        if(a[i]==ele)
//        {
//            pos=i;
//            break;
//        }
//    if(i<s)
