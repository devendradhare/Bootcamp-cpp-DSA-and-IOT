// 6.Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)
#include <stdio.h>
int alphanumeric(char s[]);
int main()
{
    char str[100] = "6.Write a function to check whether a given string is an alphanumeric string or not", option;
    printf("\n\nDemo string = \n\t%s\n\ndo you want to enter your string (y/n) : ", str);
    scanf("%c", &option);
    fflush(stdin);

    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter your string : ");
        fgets(str, 100, stdin);
    }

    if (alphanumeric(str))
        printf("\nthe string is alphanumeric\n\n");
    else
        printf("\nthe string is not alphanumeric\n\n");

    return 0;
}

int alphanumeric(char s[])
{
    int i;
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            break;
    }
    if (s[i] == 0)
        return 0;
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            return 1;
        }
    }
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            return 1;
        }
    }
    return 0;
}