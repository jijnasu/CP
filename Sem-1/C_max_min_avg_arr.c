#include<stdio.h>
int main()
{
    int a[10],s,i,j,max,min,avg=0;
    printf("Enter the size of array : ");
    scanf("%d",&s);
    printf("Enter the array : ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    max=min=a[0];
    for(i=0;i<s;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        avg+=a[i];
    }
    printf("Greatest element : %d\n",max);
    printf("Smallest element : %d\n",min);
    printf("Average of array : %f\n",1.0*avg/s);
    return 0;
}