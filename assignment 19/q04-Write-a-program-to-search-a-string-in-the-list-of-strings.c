// 4.Write a program to search a string in the list of strings.
#include <stdio.h>
int main()
{
    char str[10][100] = {"hello i am devendra dhare", "and this is my code", "and i am going to hack your system", "in just 3 second", "i am iron man", "i am groot", "dont worry bro it is just a string", "and it is string number 2", "Write a program to search a", "string in the list of strings"}, option;

    char seurch[100];
    int i, j, k, max = 10, seurch_len;

    printf("\n\ndemo string : ");
    for (i = 0; i <= 9; i++)
    {
        printf("\n%d\t%s", i + 1, str[i]);
    }

    printf("\n\nDo you want to enter string (y/n) : ");
    scanf("%c", &option);
    fflush(stdin);

    if (option == 'y' || option == 'Y')
    {
        printf("\nhow many string do you want to enter (max = 10) : ");
        scanf("%d", &max);
        fflush(stdin);
        for (i = 0; i < max; i++)
        {
            printf("\nstring %d : ", i + 1);
            fgets(str[i], 50, stdin);
            for (j = 0; str[i][j]; j++)
                ;
            str[i][j - 1] = 0;
        }
        printf("\n\nyour enterd string : ");
        for (i = 0; i < max; i++)
        {
            printf("\n%d\t%s", i + 1, str[i]);
        }
    }

    printf("\n\nSeurch : ");
    fflush(stdin);
    fgets(seurch, 100, stdin);
    for (i = 0; seurch[i]; i++)
        ;
    seurch[i - 1] = 0;
    for (i = 0; i < max; i++)
    {
        // printf("\nno problem till here i = %d, j = %d", i, j);
        for (j = 0; str[i][j]; j++)
        {
            if (str[i][j] == seurch[0])
            {
                for (k = 0; seurch[k]; k++)
                {
                    if (str[i][j + k] == 0)
                        break;
                    if (str[i][j + k] != seurch[k])
                    {
                        break;
                    }
                }
                if (seurch[k] == 0)
                {
                    printf("\nstring no. %d word no. %d to %d", i + 1, j, k + j);
                }
            }
        }
    }
    return 0;
}