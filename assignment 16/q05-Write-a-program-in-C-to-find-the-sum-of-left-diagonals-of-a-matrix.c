// 5. Write a program in C to find the sum of left diagonals of a matrix
#include <stdio.h>
int main()
{
    int mtr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}},
        i, j, sum = 0;
    printf("\n\n\tsum of left diagonals of a matrix\n\nmatrix = \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf(" %2.d", mtr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if ((j + 1 < 4 - i) == 0)
                sum += mtr[i][j];
        }
    }
    printf("\nsum of left diagonals of a matrix = %d\n\n", sum);

    return 0;
}