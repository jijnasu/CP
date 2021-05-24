#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        char name[15],dept[5];
        int roll,cgpa;

    }s1;
    strcpy(s1.name,"Kumar Jijnasu");
    strcpy(s1.dept,"CSE");
    s1.roll=52;
    s1.cgpa=8;
    printf("NAME : %s",s1.name);
    printf("\nDepartment : %s",s1.dept);
    printf("\nRoll No. : %d",s1.roll);
    printf("\nCGPA : %d",s1.cgpa);



    return 0;

}
