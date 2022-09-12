// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix
#include <stdio.h>
int main()
{
    int mtr[3][3] = {{1, 0, 0},
                     {4, 0, 6},
                     {0, 0, 9}},
        i, j, elements = 0, sum = 0;
    char option;
    printf("\n\n\tcheck the matrix is sparse or not [3x3]\n\ndemo string \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", mtr[i][j]);
        }
        printf("\n");
    }
    printf("\ndo you want to enter your array [3x3] (y/n) : ");
    scanf("%c", &option);
    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter your array\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &mtr[i][j]);
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (mtr[i][j] == 0)
                sum++;
        }
    }
    if(sum > (3*3)/2)
    {
        printf("\n\tthe matrix is sparse matrix\n\n");
    }
    else
    {
        printf("\n\tthe matrix is not sparse matrix\n\n");
    }
    

    return 0;
}