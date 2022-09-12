// 8. Write a program in C to print or display an upper triangular matrix
#include <stdio.h>
int main()
{
    int mtr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}},
        i, j;
    printf("\n\n\tdisplay the upper triangular of a matrix\n\nmatrix = \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", mtr[i][j]);
        }
        printf("\n");
    }
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3; j++)
        {
            if(i > j)
            {
                mtr[i][j] = 0;
            }
        }
    }
    printf("\nupper triangular matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %2.d", mtr[i][j]);
        }
        printf("\n");
    }
    return 0;
}