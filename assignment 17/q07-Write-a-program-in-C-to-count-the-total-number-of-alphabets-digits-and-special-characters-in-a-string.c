// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>
#include <string.h>
int count_alphabets(char a[]);
int count_digits(char a[]);
int main()
{
    char option, st[400] = "12345 Write a program in C to count the total number of alphabets, digits and special 33characters in a string.";
    int i, alphabets = 0, digits = 0, special_characters = 0;

    printf("\ndemo string = \n\t%s\n\nEnter your string (y/n) : ", st);
    scanf("%c", &option);
    fflush(stdin);

    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter string here : ");
        fgets(st, 400, stdin);
    }

    alphabets = count_alphabets(st);
    digits = count_digits(st);
    special_characters = strlen(st) - 1 - count_digits(st) - count_alphabets(st);

    printf("\nalphabets = %d\ndigits = %d\nspecial characters = %d\n\n", alphabets, digits, special_characters);

    return 0;
}

int count_alphabets(char a[])
{
    int i, count = 0;
    for (i = 0; a[i]; i++)
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
            count++;
    }
    return count;
}
int count_digits(char a[])
{
    int i, count = 0;
    for (i = 0; a[i]; i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
            count++;
    }
    return count;
}