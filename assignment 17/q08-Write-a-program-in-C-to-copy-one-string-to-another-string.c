// 8. Write a program in C to copy one string to another string
#include <stdio.h>
int main()
{
    char str1[50] = "This is string", option;
    char str2[50] = "this is another string";
    int i, l;
    printf("\ndemo str1 = %s\ndemo str2 = %s\n\ndo you want to copy str2 into str1 (y/n) : ", str1, str2);
    scanf("%c", &option);
    fflush(stdin);

    if (option == 'y' || option == 'Y')
    {
        for (i = 0; str2[i]; i++)
        {
            str1[i] = str2[i];
        }
    }

    printf("\ndemo str1 = %s\ndemo str2 = %s\n\n", str1, str2);

    return 0;
}