//  16. Write a program to check whether a given character is an alphabet (uppercase),
//  an alphabet (lower case), a digit or a special character
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'A' ... 'Z':
        printf("\n\n%c is a alphabet (uppercase)\n\n",ch);
        break;
    case '0' ... '9':
        printf("\n\n%c is a digit\n\n",ch);
        break;
    case 'a' ... 'z':
        printf("\n\n%c is a alphabet (lower case)\n\n",ch);
        break;
    default:
        printf("\n\n%c is a special character",ch);
        break;
    }
    return 0;
}