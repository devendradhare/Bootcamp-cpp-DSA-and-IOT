// 3. Write a program in C to find the transpose of a given matrix
#include <stdio.h>
int main()
{
    int mtx[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int i, j;
    int transpose[3][3];
    printf("\n\ntranspose of a matrix\nmatrix =   ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mtx[i][j]);
        }
        printf("\n\t   ");
    }

    printf("\ntranspose matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose[i][j] = mtx[j][i];
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n\t");
        for (j = 0; j < 3; j++)
        {
            printf("%d ", transpose[i][j]);
        }
    }
    return 0;
}