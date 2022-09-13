// 2.Write a function to take input employee data from the user. [ Refer structure fromquestion 1 ]

#include <stdio.h>
#include "C:\Users\devendra dhare\OneDrive\programing language\Bootcamp c++ DSA and IOT\assignment 21\q01-Define-a-structure-Employee-with-member-variables-id-name-salary.c"
void display(struct employee e);
struct employee input(struct employee e);
int main()
{
    struct employee e1;
    e1 = input(e1);
    display(e1);
    return 0;
}
void display(struct employee e)
{
    printf("\n%d  %s  %.2f",e.id,e.name,e.salary);
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