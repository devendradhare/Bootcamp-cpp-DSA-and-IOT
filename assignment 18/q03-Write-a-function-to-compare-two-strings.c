// 3. Write a function to compare two strings
#include <stdio.h>
int main()
{
    char str1[50] = "abcd", str2[50] = "abcde",option;
    printf("\n\ndemo str1 = %s\ndemo str2 = %s\n\nEnter your string (y/n) : ",str1,str2);
    scanf("%c",&option);
    fflush(stdin);
    if(option == 'y'||option == 'Y')
    {
        printf("Enter string 1 : ");
        fgets(str1,50,stdin);
        printf("Enter string 2 : ");
        fgets(str2,50,stdin);
    }

    printf("\n    %d\n\n", compare_str(str1, str2));

    return 0;
}

int compare_str(char a[], char b[])
{
    int i, l;
    for (l = 0; a[l]; l++)
        ;
    for (i = 0; b[i]; i++)
        ;

    l = i > l ? i : l;

    for (i = 0; i < l; i++)
    {
        if (a[i] < b[i])
            return -1;
        if (a[i] > b[i])
            return 1;
    }
    return 0;
}