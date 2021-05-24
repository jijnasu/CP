#include<stdio.h>
int main()
{
    int a[10][10],i,j,s,sum=0;
    printf("Enter the size of matrix : ");
    scanf("%d",&s);
    printf("Enter the matrix : \n");
    for(i=0;i<s;i++)
        for(j=0;j<s;j++)
            scanf("%d",&a[i][j]);
    printf("The diagonal elements are : ");
    for(i=0;i<s;i++)
        for(j=0;j<s;j++)
            if(i==j)
            {
                printf("%d  ",a[i][j]);
                sum+=a[i][j];
            }
    printf("\nThe sum of diagonal elements are : %d",sum);
    return 0;
}
    