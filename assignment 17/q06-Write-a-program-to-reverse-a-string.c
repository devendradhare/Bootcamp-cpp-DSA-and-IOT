// 6. Write a program to reverse a string
#include <stdio.h>
int main()
{
    char option, s[100] = "Write a program to reverse a string";
    int i, l;
    printf("\ndemo string = \n\t%s\n\nEnter your string (y/n) : ", s);
    scanf("%c", &option);
    fflush(stdin);
    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter string here : ");
        fgets(s, 400, stdin);
    }
    for (i = 0; s[i]; i++)
        ;
    l = i - 2;
    if (i % 2)
    {
        l = i - 1;
    }
    printf("\n\nstring = %s", s);
    for (i = 0; i < l / 2; i++)
    {
        s[i] += s[l - i];
        s[l - i] = s[i] - s[l - i];
        s[i] -= s[l - i];
    }
    printf("\nstring = %s\n\n", s);

    return 0;
}