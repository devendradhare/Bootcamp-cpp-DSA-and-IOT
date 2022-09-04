// 10. Write a program in C to Find the Frequency of Characters.
#include <stdio.h>
int main()
{
    char s[100] = "Write a program in C to Find the Frequency of Characters.", option;
    int i, j, Frequency = 0;
    printf("\ndemo string = \n\t%s\n\nEnter your string (y/n) : ", s);
    scanf("%c", &option);
    fflush(stdin);

    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter string here : ");
        fgets(s, 100, stdin);
    }

    for (i = 0; s[i]; i++)
    {
        for (j = i - 1; j >= 0; j--)
        {
            if (s[j] == s[i])
                break;
        }
        if(j != -1)
        {
            continue;
        }
        for (j = i; s[j]; j++)
        {
            if (s[j] == s[i])
                Frequency++;
        }
        printf("\n%c\t%d", s[i], Frequency);
        Frequency = 0;
    }

    return 0;
}