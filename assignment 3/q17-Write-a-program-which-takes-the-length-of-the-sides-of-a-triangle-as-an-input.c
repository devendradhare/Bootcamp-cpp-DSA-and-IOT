// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.
#include <stdio.h>
int main()
{
    int a, b, c, temp;
    printf("\n\nEnter length of the sides of the triangle : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("\nIt's a valid triangle\n\n");
    }
    else
    {
        printf("\nIt's not a valid triangle\n\n");
    }
    return 0;
}