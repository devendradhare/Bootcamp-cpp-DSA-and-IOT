// 6.  Write a program which takes a character as an input and displays its ASCII code
#include <stdio.h>
int main()
{
    char ch;
    printf("\n\n\t\tCharacter's ASCII code\nEnter a character : ");
    scanf("%c",&ch);
    printf("\nASCII code of '%c' is %d\n\n",ch,ch);
}