#include<stdio.h>
int main()
{
    
    int i;
    for(i=1000;i>=1;i--)
        if(i%18==0 && i%32==0)
        {
            printf("The number is : %d",i);
            break;
        }
    return 0;
}
