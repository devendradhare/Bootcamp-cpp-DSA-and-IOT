// 7.Write a program to count the number of vowels and consonants in a string using a pointer
#include <stdio.h>
int main()
{
    char string[100] = "hello i am devendra dhare and this is a string a+e+i+o+u", *p = string;
    int vowels = 0, consonants = 0, i;
    printf("\n\nstring = %s", p);

    for (i = 0; *(p + i); i++)
    {
        if ((*(p + i) >= 'A' && *(p + i) <= 'Z') || (*(p + i) >= 'a' && *(p + i) <= 'z'))
        {
            if (*(p + i) == 'a' || *(p + i) == 'e' || *(p + i) == 'i' || *(p + i) == 'o' || *(p + i) == 'u' || *(p + i) == 'A' || *(p + i) == 'E' || *(p + i) == 'I' || *(p + i) == 'O' || *(p + i) == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    // for(i = 0;*(p +))
    printf("\n\nnumber of vowels in string = %d", vowels);
    printf("\nnumber of consonants in string = %d", consonants);
    return 0;
}