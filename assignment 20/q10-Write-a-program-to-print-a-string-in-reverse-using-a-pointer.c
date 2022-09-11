// 10.Write a program to print a string in reverse using a pointer
#include <stdio.h>

int main()
{
    char string[100] = "hello i am devendra dhare and this is my string", *p = string;
    int i;
    printf("\n\ndemo string = %s", p);

    printf("\n\nstring in reverse order = ");
    for (i = 0; *(p + i); i++)
        ;
    for (i--; i >= 0; i--)
    {
        printf("%c", *(p + i));
    }
    printf("\n\n");

    return 0;
}