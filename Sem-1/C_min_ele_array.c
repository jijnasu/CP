#include<stdio.h>
int main()
{
    int s,a[15],i,ele,pos,min=0;
    printf("Enter the number of elements : ");
    scanf("%d",&s);
    printf("Enter the elements : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<s;i++)
        if(a[i]<min)
        {
            min=a[i];
            pos=i;
//            break;
        }
    printf("The minimum element and its position of array : ");
    printf("%d  %d",min,pos+1);
    return 0;
}
