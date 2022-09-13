// 10.Write a program to enter the marks of 5 students in Chemistry, Mathematics andPhysics (each out of 100)
// using a structure named Marks having elements roll no.,name, chem_marks, maths_marks and phy_marks
// and then display the percentage of each student.
#include <stdio.h>
struct marks
{
    int roll_no;
    char name[25];
    float chem_marks, maths_marks, phy_marks, percentage;
};
void input(struct marks *m);

int main()
{
    struct marks class12th[5];
    int i;
    printf("\n\n\tmarks of 12th class students\n\nEnter details of 5 students\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nstudent %d\n", i + 1);
        input(&class12th[i]);
    }

    printf("\nstudents deteils\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n\nstudent %d\nroll number %d\nstudent name %s\nstudent percentage %f", i, class12th[i].roll_no, class12th[i].name, class12th[i].percentage);
    }
    printf("\n\n");
    return 0;
}

void input(struct marks *m)
{
    int i;
    printf("Enter roll number : ");
    scanf("%d", &m->roll_no);
    printf("Enter student name : ");
    fflush(stdin);
    fgets(m->name, 25, stdin);
    for (i = 0; m->name[i]; i++)
        ;
    m->name[i - 1] = 0;
    printf("Enter marks of chemistry : ");
    scanf("%f", &m->chem_marks);
    printf("Enter marks of mathematics : ");
    scanf("%f", &m->maths_marks);
    printf("Enter marks of physics : ");
    scanf("%f", &m->phy_marks);
    m->percentage = (m->chem_marks + m->maths_marks + m->phy_marks)/3;
}