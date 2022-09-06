// 9.Write a function to reverse a string word wise.
// (For example if the given string is “Mysirg Education Services”
// then the resulting string should be “Services Education Mysirg” )
#include <stdio.h>
void reverse_string_word_wise(char s[]);
int main()
{
    char str[100] = "Mysirg Education Services ", option;
    int i;
    printf("\n\ndemo string = %s\n\nEnter your string (y/n) : ", str);
    scanf("%c", &option);
    fflush(stdin);
    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter your string : ");
        fgets(str, 100, stdin);
        for (i = 0; str[i]; i++)
            ;
        str[i] = 32;
        str[i + 1] = 32;
    }

    reverse_string_word_wise(str);

    printf("\n\n%s\n\n", str);
    return 0;
}

void reverse_string_word_wise(char s[])
{
    int i, j, k, len = 0, strlen, temp;
    for (i = 0; s[i]; i++)
        ;
    strlen = i - 1;
    for (i = 0; i < strlen; i++)
    {
        len = 0;
        printf("\n%s", s);
        for (j = i; s[j]; j++)
        {
            if (s[j] == 32 || s[j] == 0)
                break;
            len++;
        }
        j--;
        // len--;
        printf("\n%s", s);
        for (k = 0; k < len / 2; k++)
        {
            temp = s[i + k];
            s[i + k] = s[j - k];
            s[j - k] = temp;
            printf("\n%s", s);
        }
        i += len;
        printf("\n%s", s);
    }
    for (i = 0; i < strlen/2; i++)
    {
        temp = s[i];
        s[i] = s[strlen - i];
        s[strlen - i] = temp;
    }
}