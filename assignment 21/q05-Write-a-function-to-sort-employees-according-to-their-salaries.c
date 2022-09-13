// 5.Write a function to sort employees according to their salaries [ refer structure fromquestion 1]

#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\devendra dhare\OneDrive\programing language\Bootcamp c++ DSA and IOT\assignment 21\q01-Define-a-structure-Employee-with-member-variables-id-name-salary.c"
void sort_salary(struct employee e[], int new);
void display(struct employee e);
struct employee input(struct employee e);
int main()
{
    struct employee e1[20] = {{1, "devendra dhare", 123}, {2, "sundar p", 10}, {3, "tom", 12}};
    int i, n = 0, new = 3, s = 0, s2 = 0;
    char option;
    while (1)
    {
        printf("\n\n\temployee details\n\nEnter e to [e]xit\nEnter new employees (y/n) : ");
        fflush(stdin);
        scanf("%c", &option);

        if (option == 'y' || option == 'Y')
        {
            printf("\nhow many employees do you want to enter : ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("\n%d\n", i + 1);
                e1[new + i] = input(e1[new + i]);
            }
            new += n;
            sort_salary(e1, new);
        }
        else if (option == 'e' || option == 'E')
        {
            exit(0);
        }

        printf("\n\tsorted employees according to their salaries\n");
        sort_salary(e1, new);
        for (i = 0; i < new; i++)
        {
            display(e1[i]);
        }
    }
    return 0;
}
void sort_salary(struct employee e[], int new)
{
    int i, j;
    struct employee temp;
    for (i = 0; i < new - 1; i++)
    {
        for (j = 0; j < new - 1 - i; j++)
        {
            if (e[i].salary < e[i + 1].salary)
            {
                temp = e[i];
                e[i] = e[i + 1];
                e[i + 1] = temp;
            }
        }
    }
}
void display(struct employee e)
{
    printf("\n%d  %.50s  %.2f", e.id, e.name, e.salary);
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