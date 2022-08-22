//  12. Write a program to check whether a given alphabet is in uppercase or lowercase
#include <stdio.h>
int main()
{
    char alp;
    printf("\n\nCheck given alphabet is in uppercase or lowercase\nEnter an alphabet : ");
    scanf("%c",&alp);
    if (alp>='A'&&alp<='Z')
    {
        printf("\n\nuppercase\n\n");
    }
    else if (alp>='a'&&alp<='z')
    {
        printf("\n\nlowercase\n\n");
    }
    else
    {
        printf("\n\nIt's not an alphabet\n\n");
    }
    return 0;
}