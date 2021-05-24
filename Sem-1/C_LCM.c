#include<stdio.h>
int main()
{
    int x=57633,y=54777,lcm,m,i=2;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    m=lcm=(x>y?x:y);
    while((lcm%x!=0) || (lcm%y!=0))
    {
        lcm=m*i;
        i++;
    }
    printf("LCM = %d",lcm);
return 0;
}



// int main()
// {
//     long x=57633,y=54777,lcm;
//     // printf("Enter two numbers : ");
//     // scanf("%d%d",&x,&y);
//     lcm=(x>y?x:y);
//     while((lcm%x!=0) || (lcm%y!=0))
//     {
//         lcm++;
// //        i++;
//     }
//     printf("LCM = %ld",lcm);
//     return 0;
// }

