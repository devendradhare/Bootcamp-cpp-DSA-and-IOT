// 7.Write a program to calculate the difference between two time periods
#include <stdio.h>
struct time
{
    int h, m, s;
};
struct time time_difference(struct time a, struct time b);
void input_time(struct time t);
void display_time(struct time t);

int main()
{
    struct time tm1 = {3, 55, 0}, tm2 = {1, 56, 1}, tm3;
    char option;
    printf("\n\n\tcalculate the difference between two time periods\n");

    printf("\ndemo time = \n ");
    display_time(tm1);
    printf("\n ");
    display_time(tm2);

    printf("\nDo you want to enter your time (y/n) : ");
    scanf("%c", &option);

    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter time 1 (hh:mm:ss) : ");
        scanf("%d:%d:%d",&tm1.h,&tm1.m,&tm1.s);
        arrange(&tm1);

        printf("\nEnter time 2 (hh:mm:ss) : ");
        scanf("%d:%d:%d",&tm2.h,&tm2.m,&tm2.s);
        arrange(&tm2);
    }

    tm3 = time_difference(tm1, tm2);

    printf("\ndifference between\n  ");
    display_time(tm1);
    printf(" - ");
    display_time(tm2);
    printf(" is ");
    display_time(tm3);
    printf("\n\n");

    return 0;
}
void display_time(struct time t)
{
    printf("%d:%d:%d", t.h, t.m, t.s);
}
struct time time_difference(struct time a, struct time b)
{
    struct time c;
    if(a.s<b.s)
    {
        a.m--;
        a.s+=60;
    }
    c.s = a.s - b.s;
    if (a.m < b.m)
    {
        a.h--;
        a.m += 60;
    }
    c.m = a.m - b.m;
    c.h = a.h - b.h;
    
    arrange(&c);
    return c;
}
void arrange(struct time *t)
{
    if (t->s > 60)
    {
        t->m += t->s/60;
        t->s %= 60;
    }
    if(t->m>60)
    {
        t->h += t->m/60;
        t->m %= 60; 
    }
}