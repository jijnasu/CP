#include<stdio.h>
int main()
{
    int a[15],i,j,s,min,pos;
    printf("Enter the number of elements : ");
    scanf("%d",&s);
    printf("Enter the elements : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    // min=a[0];
    for(i=0;i<2;i++)
    {

        min=a[i];
        for(j=i+1;j<s;j++)
            if(a[j]<min)
            {
                min=a[j];
                pos=j;
                // printf("%d\n",pos);
            }
        if (min<a[i])
        {
            a[pos]=a[i];
            a[i]=min;
        }
        
        
        // if(a[i]>min)
        //     min2=min;
        
    }
    printf("The second last element is : %d",a[1]);
    return 0;
}