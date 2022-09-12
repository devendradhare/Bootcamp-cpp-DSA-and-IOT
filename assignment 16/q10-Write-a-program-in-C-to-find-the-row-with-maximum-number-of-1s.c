// 10. Write a program in C to find the row with maximum number of 1s
#include <stdio.h>
int main()
{
    int mtr[3][3] = {{1, 1, 1},
                     {2, 1, 4},
                     {1, 6, 7}},
        i, j, sum = 0, s = 0,row = 0;
    char option;
    printf("\n\ndemo array\n");
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
            if (mtr[i][j] == 1)
                sum++;
        }
        if (s < sum)
        {
            s = sum;
            row = i;
        }
        sum = 0;
    }
    printf("\nmaximum 1 is available in row number %d\n\n",row+1);

    return 0;
}