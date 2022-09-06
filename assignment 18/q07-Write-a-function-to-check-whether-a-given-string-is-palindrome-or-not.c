// 7. Write a function to check whether a given string is palindrome or not.
#include <stdio.h>
int palindrome(char s[]);
int main()
{
    char str[50] = "radar", option;
    printf("\n\ndomo string = %s\n\nEnter your string (y/n) : ",str);
    scanf("%c", &option);
    fflush(stdin);
    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter your string : ");
        // fgets(str, 50, stdin);
        gets(str);
    }

    if (palindrome(str))
        printf("\nthe string is palindrome\n\n");
    else
        printf("\nthe string is not palindrome\n\n");

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