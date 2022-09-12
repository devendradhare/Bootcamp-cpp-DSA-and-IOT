// 4. Write a program in C to find the sum of right diagonals of a matrix
#include <stdio.h>
int main()
{
    int mtr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}},
        i, j, sum = 0;
    printf("\n\n\tsum of right diagonals of a matrix\n\nmatrix = \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", mtr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
                sum += mtr[i][j];
        }
    }
    printf("\nsum of right diagonals of a matrix = %d", sum);

    return 0;
}