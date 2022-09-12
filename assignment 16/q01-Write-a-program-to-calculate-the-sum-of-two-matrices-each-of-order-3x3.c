// 1. Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int b[3][3] = {{9, 8, 7},
                   {6, 5, 4},
                   {3, 2, 1}};
    int i, j, c[3][3];

    printf("\n\ndemo arry 1 =   ");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%d ",a[i][j]);
        printf("\n\t\t");
    }
    printf("\ndemo arry 2 =   ");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%d ",b[i][j]);
        printf("\n\t\t");
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }


    printf("\narray 1 + array 2 = ");
    for(i = 0; i < 3; i++)
    {
        printf("\n\t\t");
        for(j = 0; j < 3; j++)
            printf("%d ",c[i][j]);
    }
    return 0;
}