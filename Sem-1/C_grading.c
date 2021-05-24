#include<stdio.h>
void main()
{
    int m;
    printf("Enter your mark : ");
    scanf("%d",&m);
    m/=10;
    switch(m)
    {
        case 10:
        case 9: printf("Grade O");
                break;
        case 8: printf("Grade E");
                break;
        case 7: printf("Grade A");
                break;
        case 6: printf("Grade B");
                break;
        case 5: printf("Grade C");
                break;
        default : printf("Grade F");

    }
}
