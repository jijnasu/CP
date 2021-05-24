#include<stdio.h>
int main()
{
    int n=77,i=0,j=1,k=50;
    // char rn[15]="";
    // printf("Enter a range of numbers : ");
    // scanf("%d%d",&j,&k);
    for(;j<=k;j++)
    {   i=0;
        n=j;
        char rn[15]="";
        while(n>0)
        {
    //         if(n>=1000)
    //         {
    //             rn[i]='M';
    //             n-=1000;
    //             // printf("%d---%d---%s\n",i,n,rn);
    //         }
    //         else if(n>=900)
    //         {
    //             rn[i++]='C';
    //             rn[i]='M';
    //             n-=900;
    // //             printf("%d---%d---%s\n",i,n,rn);
    //         }
    //         else if(n>=500)
    //         {
    //             rn[i]='D';
    //             n-=500;
    //             // printf("%d---%d---%s\n",i,n,rn);
    //         }
    //         else if(n>=400)
    //         {
    //             rn[i++]='C';
    //             rn[i]='D';
    //             n-=400;
    // //             printf("%d---%d---%s\n",i,n,rn);
    //         }
    //         else if(n>=100)
    //         {
    //             rn[i]='C';
    //             n-=100;
    //             // printf("%d---%d---%s\n",i,n,rn);
    //         }
    //         else if(n>=90)
    //         {
    //             rn[i++]='X';
    //             rn[i]='C';
    //             n-=90;
    //             // printf("%d---%d---%s\n",i,n,rn);
    //         }
    //         else 
            if(n>=50)
            {
                rn[i]='L';
                n-=50;
                // printf("%d---%d---%s\n",i,n,rn);
            }
            else if(n>=40)
            {
                rn[i++]='X';
                rn[i]='L';
                n-=40;
    //             printf("%d---%d---%s\n",i,n,rn);
            }
            else if(n>=10)
            {
                rn[i]='X';
                n-=10;
                // printf("%d---%d---%s\n",i,n,rn);
            }
            else if(n>=9)
            {
                rn[i++]='I';
                rn[i]='X';
                n-=9;
    //             printf("%d---%d---%s\n",i,n,rn);
            }
            else if(n>=5)
            {
                rn[i]='V';
                n-=5;
                // printf("%d---%d---%s\n",i,n,rn);
            }
            else if(n>=4)
            {
                rn[i++]='I';
                rn[i]='V';
                n-=4;
    //             printf("%d---%d---%s\n",i,n,rn);
            }
            else if(n>0)
            {
                rn[i]='I';
                n--;
                // printf("%d---%d---%s\n",i,n,rn);
            }
            i++;

    //     printf("%d---%d---%s\n",i,n,rn);
        // printf("%d---%d---%s\n",i,n,rn);
        }
        printf("\nROMAN of %d  : %s",j,rn);

    }
    return 0;

}
