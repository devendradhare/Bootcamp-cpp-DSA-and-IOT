// 4. Write a function to find the highest salary employee from a given array of 10 employees

#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\devendra dhare\OneDrive\programing language\Bootcamp c++ DSA and IOT\assignment 21\q01-Define-a-structure-Employee-with-member-variables-id-name-salary.c"
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
        }
        else if (option == 'e'||option == 'E')
        {
            exit(0);
        }
        

        printf("\n\ttotal employees\n");
        for (i = 0; i < new; i++)
        {
            display(e1[i]);
        }
        for (i = 0; i < new; i++)
        {
            if (e1[i].salary > s)
            {
                s = e1[i].salary;
                s2 = i;
            }
        }
        printf("\n\n\thighest salary employee\n");
        display(e1[s2]);
        printf("\n\n");
        fflush(stdin);
    }
    return 0;
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