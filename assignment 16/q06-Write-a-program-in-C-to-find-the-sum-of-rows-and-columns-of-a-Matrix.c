// 6. Write a program in C to find the sum of rows and columns of a Matrix
#include <stdio.h>
int main()
{
    int mtr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}},
        i, j, sum = 0;
    printf("\n\n\tsum of rows and columns of a Matrix\n");
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf(" %d",mtr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum += mtr[i][j];
        }
        printf("\nsum of row %d = %d",i,sum);
    }
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum += mtr[j][i];
        }
        printf("\ncolumns of row %d = %d",i,sum);
    }
    return 0;
}