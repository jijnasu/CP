#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of a triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        printf("The triangle is valid...");
        if(a==b && a==c)
            printf("\nThe triangle is equilateral.");
        else if((a==b) || (b==c) || (c==a))
            printf("\nThe triangle is isosceles.");
        else
            printf("\nThe triangle is scalene.");
        if((a*a+b*b==c*c) || (b*b+c*c==a*a) || (c*c+a*a==b*b))
            printf("\nIt's a right-angled triangle");
        else
            printf("\nIt's not a right-angled triangle");
    }
    else
        printf("The triangle is not valid...");
    return 0;
}
//else if((a==b && a!=c) || (b==c && b!=a) || (c==a && c!=b))
//            printf("\nThe triangle is isosceles.");
//        else if(a!=b && b!=c && c!=a)
//            printf("\nThe triangle is scalene.");
