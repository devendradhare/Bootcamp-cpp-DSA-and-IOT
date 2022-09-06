// 01. Write a function to calculate length of the string
#include <stdio.h>
int string_len(char a[]);
int main()
{
    char s[100] = "Write a function to calculate length of the string", option;
    int len;

    printf("\ndemo string = \n\t%s\n\nEnter your string (y/n) : ", s);
    scanf("%c", &option);
    fflush(stdin);
    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter string here : ");
        fgets(s, 100, stdin);
    }

    len = string_len(s);

    printf("\nlength of the string is = %d\n\n", len);

    return 0;
}

int string_len(char a[])
{
    int i;
    for(i = 0;a[i];i++);
    return i;
}