// 9. Write a C program to sort a string array in ascending order
#include <stdio.h>
int main()
{
    char s[100] = "Write a C program to sort a string array in ascending order", option;
    int i,j;
    printf("\ndemo string = \n\t%s\n\nEnter your string (y/n) : ", s);
    scanf("%c", &option);
    fflush(stdin);

    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter string here : ");
        fgets(s, 100, stdin);
    }

    for (i = 0; s[i + 2]; i++)
    {
        for (j = 0; s[j + 2]; j++)
        {
            if(s[j] > s[j+1])
            {
                s[j] += s[j+1];
                s[j+1] = s[j] - s[j+1];
                s[j] -= s[j + 1];
            }
        }
    }
    printf("\nstring in ascending order\n\t\"%s\"\n\n ",s);
    return 0;
}