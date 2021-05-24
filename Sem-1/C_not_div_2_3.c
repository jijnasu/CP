#include<stdio.h>
int main()
{
    int i=1;
    printf("Numbers not divisible by 2 and 3 are :");
    while(i<=100)
    {
        if(i%2!=0 && i%3!=0)
            printf(" %d,",i);
        i++;
    }
    return 0;
}
