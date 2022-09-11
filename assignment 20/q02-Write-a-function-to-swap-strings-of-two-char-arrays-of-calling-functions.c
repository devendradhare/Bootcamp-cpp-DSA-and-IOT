// 2.Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include <stdio.h>
int main()
{
    char str1[50] = "hello, this is first string", str2[50] = "this is second string";
    int i;
    printf("\n\nbefore swaping the strings\n\nstring 1 = %s\nstring 2 = %s", str1, str2);

    strswap(str1, str2);

    printf("\n\nafter swaping the strings\n\nstring 1 = %s\nstring 2 = %s\n\n", str1, str2);
    return 0;
}

void strswap(char a[], char b[])
{
    char temp;
    int i, l;
    for (i = 0; a[i]; i++)
        ;
    for (l = 0; b[l]; l++)
        ;
    l = i > l ? i : l;
    for (i = 0; i < l; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}