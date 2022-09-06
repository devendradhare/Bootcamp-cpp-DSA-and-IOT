// 8.Write a function to count words in a given string
#include <stdio.h>
int main()
{
    char str[100] = "Write a function to count words in a given string", option;
    int word;
    printf("\n\ndemo string = \n\t%s\n\nEnter your string (y/n) : ", str);
    scanf("%c", &option);
    fflush(stdin);
    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter your string : ");
        fgets(str, 100, stdin);
    }

    word = word_in_str(str);

    printf("\nword in the string = %d", word);

    return 0;
}

int word_in_str(char s[])
{
    int word, i;
    for (i = 0; s[i]; i++)
    {
        if (s[i] == 32 && s[i - 1] != 32 && s[i + 1] != 32)
            word++;
    }
    return word+1;
}