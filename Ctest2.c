
#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[30];
    char sic[10];
    int mark[5];
};
typedef struct student std;
int main()
{
    std s,*p;
    p=&s;
    int i;
    printf("Roll:: ");
    scanf("%d",&(p->roll));
    printf("Input name:: ");
    scanf(" %[^\n]",p->name);
    printf("SIC:: ");
    scanf(" %[^\n]]",p->sic);
    printf("Mark:: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&(p->mark[i]));
    }
    printf("Student info::\n");
    printf("Roll:: %d\n",p->roll);
    printf("Name: %s\n",p->name);
    printf("Sic: %s\nMarks : ",p->sic);
    for(i=0;i<5;i++)
    {
        printf("%d  ",p->mark[i]);
    }
    return 0;
}


// #include<stdio.h>
// #include<math.h>


// void main()
// {
//     char *str="hello";
//     printf("%c",*str);
//     str++;
//     printf("%c",*str);
// }

// #define ll long long int
// #define mod 1000000007
// void main()
// {
//     int t,n,x;
//     ll count=0;
//     scanf("%d",&t);
//     for(;t>0;t--)
//     {
//         // count=0;
//         scanf("%d",&n);
//         // for(x=0;x<pow(2,n);x++)
//         //     if((x^(x+1))==((x+2)^(x+3)))
//         //         count+=1;
//         // printf("%llu\n",count);
//         count=(int)pow(2,(n-1))%mod ;
//         printf("%llu\n",count);
//     }
// }







// // Program for postfix evaluation
// #include<stdio.h>
// #include<string.h>
// #define max 10
// void push(int [],int, int*);
// int pop(int[],int*);
// int main()
// {

//     char str[max];
//     int stk[max],a,b,i,top=-1,opt,ele,len;
//     printf("Enter the postfix expression\n");
//     scanf("%s",str);
//     i=0;
//     len=strlen(str);
//     while(i<len)
//     {
//         opt=0;
//         if(isdigit(str[i]))
//         {
//             opt=1;
//         }
//         else
//         {
//             opt=2;
//         }
//         switch(opt)
//         {
//         case 1: //as the integer is input as char (int)'0' is
//             //subtracted to finds its int val
//             ele=(int)str[i]-(int)'0';
//             push(stk,ele,&top);
//             break;
//         case 2:
//             b=pop(stk,&top);
//             a=pop(stk,&top);
//             printf("%c\n",str[i]);
//             if ( str[i]=='+')
//             {
//                 ele=a+b;
//                 push(stk, ele, &top);
//             }
//             else if(str[i]=='-')
//             {
//                 push(stk,(a-b),&top);
//             }
//             else if(str[i]=='*')
//             {
//                 push(stk,(a*b),&top);
//             }
//             else
//             {
//                 push(stk,(a/b),&top);
//             }
//         }
//         i++;
//     }
//     printf("result of the expression =%d\n",stk[top]);
//     return 0;
// }
// void push( int stk[],int ele, int *t)
// {

//     if(*t==max-1)
//     {
//         printf("Stack overflow\n");
//     }
//     else
//     {
//         (*t)++;
//         stk[*t]=ele;
//     }
// }
// int pop(int stk[], int *t)
// {
//     int ele;
//     if(*t==-1)
//     {
//         printf("Stack Underflow\n");
//     }
//     else
//     {
//         ele=stk[*t];
//         (*t)--;
//         return ele;
//     }

// }

// // Yellow portion is the modification to the program done in the class today
// // AS the digit is entered as a chatarcter to find its original value  (int)’0’  in subtracted









// #include<stdio.h>
// #include<string.h>
// //void mat(int ar[][3]);
// //void main()
// //{
// //int a=10,b=20,c=30,d;
// //int ar[3][3];
// //mat(ar);
// //
// //
// //}
// void main()
// { int i,j;
//     double dd;
//     scanf("%lf",&dd);
//     printf("%lf",dd);
//    for(i=0;i<3;i++)
//    for(j=0;j<3;j++)
//        printf("--%d--",sizeof("gu gu h"));
// }







//int strln(char []);
//main()
//{
//    char str[20];
//    printf("Enter str : ");
//    gets(str);
//    printf("Length = %d",strln(str));
//}
//int strln(char str[])
//{
//    static int i=0;
//    if(str[i]=='\0')
//        return i;
//    i++;
//    strln(str);
//
//}





//main()
//{
//    int a[10],i,j,n,f=1;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//        scanf("%d",&a[i]);
//    printf("Unique elements are : ");
//    for(i=0;i<n;i++)
//    {
//        f=1;
//        for(j=0;j<n;j++)
//            if(a[i]==a[j] && i!=j)
//            {
//                f=0;
//                break;
//            }
//        if(f)
//            printf("%d, ",a[i]);
//    }
//}
//










//main()
//{
////register int i;
////for(i=1;i<=1000;i++)
////printf("%d",i);
//    int a[5][5],b[5][5],r[5][5],i,j,k,m,n,p,q;
//    scanf("%d%d",&n,&m);
//    scanf("%d%d",&p,&q);
//    for(i=0;i<n;i++)
//        for(j=0;j<m;j++)
//            scanf("%d",&a[i][j]);
//    for(i=0;i<p;i++)
//        for(j=0;j<q;j++)
//            scanf("%d",&b[i][j]);
//    if(m==p)
//    {
//        for(i=0;i<n;i++)
//        {
//
//            for(j=0;j<q;j++)
//            {
//                r[i][j]=0;
//                for(k=0;k<m;k++)
//                    r[i][j]+=(a[i][k]*b[k][j]);
//                printf("%d  ",r[i][j]);
//            }
//            printf("\n");
//        }
//    }
//
//}



//            scanf("%d",&b[i][j]);








//main ( )
//{
////    kj();
//printf("hi--");
//int x=9,y;
//float z=9.00001;
//y=z;
////y=&x;
//printf("%d",y==z);
//}
//void kj()
//{
//    printf("**");
//main();
//}






















