// 8.Write a program to store information of 10 students and display them using structure
#include <stdio.h>
struct student
{
    int roll_no;
    char name[25];
    float marks;
};

void display(struct student a);

int main()
{
    struct student class12th[10] =
        {
            {1000001, "hulk", 34},
            {1000002, "stiv", 65},
            {1000003, "natash", 55},
            {1000004, "tony", 99.99},
            {1200005, "wong", 98},
            {1200006, "thor", 40},
            {1200007, "loki", 28},
            {1200008, "brus", 99.8},
            {1200009, "shuri", 89},
            {1200010, "stan lee", 101}};
    int i;
    printf("\n\nstudent of 12th class\n");
    for (i = 0; i < 10; i++)
    {
        printf("\n");
        display(class12th[i]);
    }
    printf("\n\n");
    return 0;
}
void display(struct student a)
{
    printf(" %d %s %f", a.roll_no, a.name, a.marks);
}