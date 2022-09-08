// 10.Create an authentication system. It should be menu driven.
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char ID_PASS[50][2][30] = {{"devendra dhare", "password"},
                               {"pushpa pushpraj", "shreewalli"},
                               {"thor", "point breck"}},
         option;
    char login[2][30];
    int max = 3, i, j;
    printf("\n\nwelcome to dark web");
    while (1)
    {

        printf("\n\nEnter 1 to sign in\nEnter 2 to log in\nEnter any key to Exit\n\t: ");
        scanf("%c", &option);
        if (option == '1')
        {
            printf("\n\tEnter a user name : ");
            while (1)
            {
                fflush(stdin);
                fgets(ID_PASS[max][0], 30, stdin);
                for (i = 0; ID_PASS[max][0][i]; i++)
                    ;
                ID_PASS[max][0][i - 1] = 0;

                for (i = 0; i < max; i++)
                {
                    if (strcasecmp(ID_PASS[i][0], ID_PASS[max][0]) == 0)
                    {
                        printf("\n\ttry diffrent user name : ");
                        break;
                    }
                }
                if (i == max)
                    break;
            }
            printf("\tEnter password : ");
            fflush(stdin);
            fgets(ID_PASS[max][1], 30, stdin);
            for (i = 0; ID_PASS[max][1][i]; i++)
                ;
            ID_PASS[max][1][i - 1] = 0;
            max++;
            printf("\n\tCongratulations you have sign in successfully\n");
        }
        else if (option == '2')
        {
            while (1)
            {

                printf("\n\tEnter your user name : ");
                fflush(stdin);
                fgets(login[0], 30, stdin);
                for (i = 0; login[0][i]; i++)
                    ;
                login[0][i - 1] = 0;

                printf("\n\tEnter password : ");
                fflush(stdin);
                fgets(login[1], 30, stdin);
                for (i = 0; login[1][i]; i++)
                    ;
                login[1][i - 1] = 0;
                for (i = 0; i < max; i++)
                {
                    if ((strcasecmp(login[0], ID_PASS[i][0]) == 0) && (strcasecmp(login[1], ID_PASS[i][1]) == 0))
                    {
                        printf("\n\tlogged in successfully\n\tWelcome back to the dark web");
                        getch();
                        break;
                    }
                }
                if (i == max)
                {
                    printf("\n\tUsername and password doesn't match\n\ttry again");
                }
                else
                {
                    break;
                }
            }
        }
        else
            break;
    }
    return 0;
}