// 2. Write a program to calculate the product of two matrices each of order 3x3
#include <stdio.h>
int main()
{
    int m1[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}},
        m2[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}},
        m3[3][3],
        i, j, k, sum;

    printf("\n\n\tproduct of two matrices\n\n");
    printf("\nmatrices 1 =    ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n\t\t");
    }
    printf("\nmatrices 2 =    ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("\n\t\t");
    }

    printf("\nproduct of two matrices = \n");
    for (i = 0; i < 3; i++)
    {
        printf("\n\t\t");
        for (j = 0; j < 3; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum += m1[i][k] * m2[k][j];
            }
            m3[i][j] = sum;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3.d ", m3[i][j]);
        }
        printf("\n\t\t");
    }
    return 0;
}