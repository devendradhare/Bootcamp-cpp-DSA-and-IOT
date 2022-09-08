// 9.Write a program that asks the user to enter a username.
// If the username entered is one of the names in thelist then the user is allowed to calculate
// the factorial of a number. Otherwise, an error message is displayed
#include <stdio.h>
#include <string.h>
int main()
{
    char names[20][100] = {"devendra dhare", "tony", "angelpriya143", "papa_ki_pari_05", "DJ_chaman", "harray_ali_khan", "mysirg", "RJ_naved", "dhruv_rathi", "killer_boy_ajju"};
    char user_name[100];
    int i, j, max = 10, num, facto = 1;

    printf("\n\nenter your name : ");
    fgets(user_name, 100, stdin);
    for(i = 0;user_name[i];i++);
    user_name[i-1] = 0;

    for (i = 0; i < max; i++)
    {
        if (strcmp(user_name, names[i]) == 0)
        {
            printf("\n\n\twelcome to iluminati sicret group\n\nEnter a number to calculate factorial : ");
            scanf("%d", &num);
            for (j = 2; j <= num; j++)
            {
                facto *= j;
            }
            printf("\nfactorial of %d is %d\n\n", num, facto);
            break;
        }
    }
    return 0;
}