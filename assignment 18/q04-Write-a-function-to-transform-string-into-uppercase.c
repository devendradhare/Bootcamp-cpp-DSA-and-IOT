// 4. Write a function to transform string into uppercase
#include <stdio.h>
void string_upp(char s[]);
int main()
{
    char option, s[100] = "WritE a program to convert a given string into uppercase";

    printf("\n\ndemo string = %s\nEnter your string (y/n) : ", s);
    scanf("%c", &option);
    fflush(stdin);
    if (option == 'y' || option == 'Y')
        fgets(s, 100, stdin);

    string_upp(s);

    printf("\nstring in uppercase = %s\n\n", s);
    return 0;
}

void string_upp(char s[])
{
    int i;
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i]-32;
        }
    }
}
