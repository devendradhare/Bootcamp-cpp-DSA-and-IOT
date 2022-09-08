// 3.Write a program to read and display a 2D array of strings in C language.
#include <stdio.h>
int main()
{
    char str[10][50] = {"bhopal", "chhindwara", "indore", "mumbai", "tokiyo", "delhi", "patna", "kolkata", "haidrabad", "pune"}, option;
    int i, j;
    printf("\n\nDemo string: ");
    for (i = 0; i <= 9; i++)
    {
        printf("\n%d\t%s", i+1, str[i]);
    }
    printf("\n\nDo you want to enter string (y/n) : ");
    scanf("%c", &option);
    fflush(stdin);
    if (option == 'y' || option == 'Y')
    {
        for (i = 0; i <= 9; i++)
        {
            printf("\nstring %d : ", i + 1);
            fgets(str[i], 50, stdin);
            for (j = 0; str[i][j]; j++)
                ;
            str[i][j - 1] = 0;
        }
    }

    for (i = 0; i <= 9; i++)
    {
        printf("\n%d\t%s", i+1, str[i]);
    }
    return 0;
}