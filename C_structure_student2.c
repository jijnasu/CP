#include<stdio.h>

typedef struct student
{
    char name[15],SIC[8];
    int roll,marks[5];
} stud;


// By passing &structure
// stud input(stud *s)
// {
    
//     int i;
//     printf("Enter the following:\nNAME- ");
//     gets(s->name);
//     printf("SIC no.- ");
//     gets(s->SIC);
//     printf("Roll no.- ");
//     scanf("%d",&s->roll);
//     printf("Enter marks in 5 subjests : ");
//     for(i=0;i<5;i++)
//         scanf("%d",&s->marks[i]);
//     // return *s;
// }


// By returning structure
stud input()
{
    stud s;
    int i;
    printf("Enter the following:\nNAME- ");
    scanf("%[^\n]",s.name);
    printf("SIC no.- ");
    scanf(" %[^\n]",s.SIC);
    printf("Roll no.- ");
    scanf("%d",&s.roll);
    printf("Enter marks in 5 subjests : ");
    for(i=0;i<5;i++)
        scanf("%d",&s.marks[i]);
    return s;
}

void display(stud s)
{
    int i;
    printf("\nStudent Information:\nNAME- %s",s.name);
    printf("\nSIC no.- %s",s.SIC);
    // gets(s->SIC);
    printf("\nRoll no.- %d",s.roll);
    // scanf();
    printf("\nMarks in 5 subjests : ");
    for(i=0;i<5;i++)
        printf("%d  ",s.marks[i]);
}

void main()
{
    stud stu;
    stu=input();
    display(stu);
    printf("\n");
}
