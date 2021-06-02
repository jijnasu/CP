#include<stdio.h>
struct student
{
    char name[15];
    int mark[3],tmark;
    float pcent;
    char grd;
}stu[20];
char grade(float);
int main()
{
    int i,j,n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter for student no.- %d",i+1);
        stu[i].tmark=0;
        printf("\nEnter the three marks : ");
        for(j=0;j<3;j++)
        {
            scanf("%d",&stu[i].mark[j]);
            stu[i].tmark+=stu[i].mark[j];

        }
        stu[i].pcent=stu[i].tmark/3.0;
        stu[i].grd=grade(stu[i].pcent);
        putch(stu[i].grd);
    }

}
char grade(float p)
{
    printf("--%f\n",p);
    if(p>=90)
        return 'O';
    if(p>=80)
        return 'A';
    if(p>=60)
        return 'B';
    if(p>=50)
        return 'C';
    if(p>=40)
        return 'D';
    else
        return 'F';

}











