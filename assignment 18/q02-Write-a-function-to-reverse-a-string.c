// 2. Write a function to reverse a string
#include <stdio.h>
int main()
{
    char option, s[100] = "Write a function to reverse a string";
    printf("\n\ndemo string = \n\t%s\n\nEnter your string (y/n) : ", s);
    scanf("%c", &option);
    fflush(stdin);
    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter string here : ");
        fgets(s, 400, stdin);
    }

    reverse_str(s);

    printf("\nstring = %s\n\n", s);
    return 0;
}

void reverse_str(char a[])
{
    int i,l;
    for (i = 0; a[i]; i++)
        ;
    l = i - 2;
    if (i % 2)
    {
        l = i - 1;
    }
    printf("\n\nstring = %s", a);
    for (i = 0; i < l / 2; i++)
    {
        a[i] += a[l - i];
        a[l - i] = a[i] - a[l - i];
        a[i] -= a[l - i];
    }

}