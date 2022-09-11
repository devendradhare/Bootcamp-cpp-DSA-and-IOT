// 6.Write a program to calculate the length of the string using a pointer
#include <stdio.h>
int main()
{
    char string[100] = "hello i am devendra dhare and this is a string ", *point = string;
    int i, len;

    printf("\n\nstring = %s", point);

    for (i = 0; *(point + i); i++)
    {
    }
    len = i;
    printf("\n\nlength = %d\n\n", len);

    return 0;
}