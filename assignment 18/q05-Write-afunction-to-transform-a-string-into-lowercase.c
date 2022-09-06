// 5. Write a function to transform a string into lowercase
#include <stdio.h>
void string_low(char s[]);
int main()
{
    char option, s[100] = "WRITE A FUNCTION TO TRANSFORM A STRING INTO LOWERCASE";

    printf("\n\ndemo string = %s\nEnter your string (y/n) : ", s);
    scanf("%c", &option);
    fflush(stdin);
    if (option == 'y' || option == 'Y')
        fgets(s, 100, stdin);

    string_low(s);

    printf("\nstring in lowercase = %s\n\n", s);
    return 0;
}

void string_low(char s[])
{
    int i;
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i]+32;
        }
    }
}
