// 10. Write a program to store information of n students and display them using structure

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int roll_no;
    char name[25];
    float marks;
};
void display(struct student e);
struct student input(struct student e);
int main()
{
    struct student e1[20];
    int i, n = 0, new = 0, s = 0, s2 = 0;
    char option;
    while (1)
    {
        printf("\n\n\tstudent details\n\nEnter e to [e]xit\nEnter s to [s]how students\nEnter new students (y/n) : ");
        fflush(stdin);
        scanf("%c", &option);

        if (option == 'y' || option == 'Y')
        {
            printf("\nhow many students do you want to enter : ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("\n%d\n", i + 1);
                e1[new + i] = input(e1[new + i]);
            }
            new += n;
        }
        else if (option == 'e' || option == 'E')
        {
            exit(0);
        }
        else if (option == 's'||option == 'S')
        {
            printf("\n\ttotal student\n");
            for(i = 0; i < new;i++)
            {
                display(e1[i]);
            }
        }
        

    }
    return 0;
}
void display(struct student e)
{
    printf("\n%d  %.50s  %.2f", e.roll_no, e.name, e.marks);
}

struct student input(struct student e)
{
    int i;
    printf("\nEnter student roll number : ");
    scanf("%d", &e.roll_no);
    printf("\nEnter student name : ");
    fflush(stdin);
    fgets(e.name, 25, stdin);
    for (i = 0; e.name[i]; i++)
        ;
    e.name[i - 1] = 0;
    printf("\nEnter student marks : ");
    scanf("%f", &e.marks);
    return e;
}