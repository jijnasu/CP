#include<stdio.h>
int main()
{
    int a[15],s,i,j,pos,max;
    printf("Enter the size of array : ");
    scanf("%d",&s);
    printf("Enter the elements : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    for(i=0;i<s;i++)
    {
        max=a[i];
        pos=i;
        for(j=i+1;j<s;j++)
            if(a[j]>max)
            {
                max=a[j];
                pos=j;
            }
        if(pos!=i)
        {
            a[pos]=a[i];
            a[i]=max;
        }
    }
    printf("The sorted array is : ");
    for(i=0;i<s;i++)
        printf("%d  ",a[i]);
    

    // printf()
    return 0;


}





