// 10.Write a function to find the repeated character in a given string.
#include <stdio.h>
int main()
{
    char s[100] = "10.Write a function to find the repeated character in a given string.", option;

    printf("\ndemo string = \n\t%s\n\nEnter your string (y/n) : ", s);
    scanf("%c", &option);

    fflush(stdin);

    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter string here : ");
        fgets(s, 100, stdin);
    }

    repeated_character(s);
    
    return 0;
}

void repeated_character(char s[])
{
    int i, j, Frequency = 0;
    for (i = 0; s[i]; i++)
    {
        for (j = i - 1; j >= 0; j--)
        {
            if (s[j] == s[i])
                break;
        }
        if (j != -1)
        {
            continue;
        }
        for (j = i; s[j]; j++)
        {
            if (s[j] == s[i])
                Frequency++;
        }
        if (Frequency != 1)
            printf("\n%c\t%d", s[i], Frequency);
        Frequency = 0;
    }
}