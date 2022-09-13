// 3.Write a function to display employee data. [ Refer structure from question 1 ]

#include <stdio.h>
#include "C:\Users\devendra dhare\OneDrive\programing language\Bootcamp c++ DSA and IOT\assignment 21\q01-Define-a-structure-Employee-with-member-variables-id-name-salary.c"
void display(struct employee e);
struct employee input(struct employee e);
int main()
{
    struct employee e1[20];
    int i, n = 0, new = 0;
    char option;
        printf("\n\n\tEnter new employees\n");
    while (1)
    {
        printf("\n\nEnter n to enter new employee\nEnter any key to exit ");
        scanf("%c",&option);
        if(option != 'n')
        {
            return 0;
        }
        printf("\nhow many employees do you want to enter : ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            printf("\n%d\n", i + 1);
            e1[new + i] = input(e1[new + i]);
        }
        new += n;
        printf("\ntotal employees\n");
        for (i = 0; i < new; i++)
        {
            display(e1[i]);
        }
        fflush(stdin);
    }
    return 0;
}
void display(struct employee e)
{
    printf("\n%d  %s  %.2f", e.id, e.name, e.salary);
}

struct employee input(struct employee e)
{
    int i;
    printf("\nEnter employee id : ");
    scanf("%d", &e.id);
    printf("\nEnter employee name : ");
    fflush(stdin);
    fgets(e.name, 25, stdin);
    for (i = 0; e.name[i]; i++)
        ;
    e.name[i - 1] = 0;
    printf("\nEnter employee salary : ");
    scanf("%f", &e.salary);
    return e;
}