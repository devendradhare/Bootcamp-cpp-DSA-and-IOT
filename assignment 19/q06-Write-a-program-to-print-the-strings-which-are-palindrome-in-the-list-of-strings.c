// 6.Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
int palindrome(char s[]);
int main()
{
    char strings[20][100] = {"this is not a palindrom string", "this is also not ","next string is palindrome","asdfdsa","next string is also palindrom","asdfghjklkjhgfdsa","Write a program to print the strings","which are palindrome in the list of strings","this string is 9th one","this the last string"},option;
    int i, j, max = 9;

    printf("\n\ndemo string : ");
    for (i = 0; i <= 9; i++)
    {
        printf("\n%d\t%s", i + 1, strings[i]);
    }

    printf("\n\nDo you want to enter string (y/n) : ");
    scanf("%c", &option);
    fflush(stdin);

    if (option == 'y' || option == 'Y')
    {
        printf("\nhow many string do you want to enter (max = 20) : ");
        scanf("%d", &max);
        fflush(stdin);
        for (i = 0; i < max; i++)
        {
            printf("\nstring %d : ", i + 1);
            fgets(strings[i], 50, stdin);
            for (j = 0; strings[i][j]; j++)
                ;
            strings[i][j - 1] = 0;
        }
        printf("\n\nyour enterd string : ");
        for (i = 0; i < max; i++)
        {
            printf("\n%d\t%s", i + 1, strings[i]);
        }
    }

    printf("\npalindrom strings : ");
    for(i = 0; i < max;i++)
    {
        if(palindrome(&strings[i]))
        {
            printf("\n\t%s",strings[i]);
        }
    }

    return 0;
}

int palindrome(char s[])
{
    int l, i;
    for (l = 0; s[l]; l++)
    {
    }
    l--;
    for (i = 0; i <= l / 2; i++)
    {
        if (s[i] != s[l - i])
            return 0;
    }
    return 1;
}