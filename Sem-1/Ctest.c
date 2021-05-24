#include<stdio.h>
#include<string.h>
// void f(int a[])
// {
//     a[0]+=10;
//     a[1]+=100;
// }


void main()
{
    int a=1;
    {
        int a=2;
        {
            int a=3;
            printf("%d--",a);
        }
        printf("%d--",a);
    }
    printf("%d--",a);


    // char s1[]="ku",s2[]="guddu";
    // strcpy(s1,s2);
    // puts(s1);
    // int n=10;
    // int a[n];
}










// #include<stdio.h>
// void main()
// {
//     int n=5,i;
//     int *p;
//     p=(int *) malloc(n*4);
//     printf("Enter no. ele : \n");
//         scanf("%d",&n);
//     printf("Enter array : \n");
//     for(i=0;i<n+2;i++)
//         scanf("%d",p+i);
//     printf("Output : \n");
//     for(i=0;i<n+2;i++)
//         printf("%d ",*(p+i));
// }




// #include<stdio.h>
//  float sum_series(float);
//  int main()
//  {
//      int n;
//      printf("enter the length of the series: ");
//      scanf("%d",&n);
//      printf("\n the sum of series is: %f",sum_series(n));
//      return 0;
//  }
//  float sum_series(float n)
//  {
//      int i;
//      float sum=0,fact=1;
//      for (i=2;i<=n;i++)
//      {
//         fact=fact*i;
//         sum=sum+(1.0/fact);

//      }
//      return sum;
//  }


// #include<stdio.h>
// struct student
//     {
//      char name[20],dept[20];
//      int roll;
//      float cgpa;
//     }s,*p;
//     void main()
// {
//     struct student s;
//     p=&s;
//     printf("enter the name");
//     scanf("%[^\n]",s.name);
//     printf("enter roll no");
//     scanf("%d",&s.roll);
//     printf(" enter the department");
//     scanf(" %[^\n]",s.dept);
//     printf("\n enter the cgpa");
//     scanf("%f",&s.cgpa);

//     printf(" %s\n",s.name);
//     printf("roll no%d\n",(*p).roll);
//     printf("department%s\n",s.dept);
//     printf("cgpa%f\n",s.cgpa);
// }









//#include<stdio.h>
//
//struct student
//{
//    char name[50];
//    int roll;
//    float cgpa;
//    char dep[10];
//}
//s;
//
//int main() {
//    printf("Enter information:\n");
//    printf("Enter name: ");
//    scanf(" %[^\n]",s.name);
//
//    printf("Enter roll number: ");
//    scanf("%d",&s.roll);
//    printf("Enter department: ");
//    scanf(" %[^\n]",s.dep);
//    printf("Enter cgpa: ");
//    scanf("%f",&s.cgpa);
//
//
//    printf("Displaying Information:\n");
//    printf("Name: ");
//    printf(" %s\n", s.name);
//    printf("Roll number: %d\n", s.roll);
//    printf("Department: %s \n", s.dep);
//    printf("cgpa: %f\n",s.cgpa);
//
//    return 0;
//}
