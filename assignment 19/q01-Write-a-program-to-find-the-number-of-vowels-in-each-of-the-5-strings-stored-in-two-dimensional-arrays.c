// 1.Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays,
// taken from the user.
#include <stdio.h>
void vowels_in_each_string(char s[], int r, int c);
int main()
{
    char str[5][50] = {"Write a program to find", "the number of vowels in each of the", "5 strings stored in two dimensional arrays", "this string number 4", "this is string number 5"}, option;
    int i;
    printf("\n\nDemo string");
    for (i = 0; i <= 4; i++)
    {
        printf("\n%d\t%s", i, str[i]);
    }
    printf("\n\nDo you want to enter your string (y/n) : ");
    scanf("%c", &option);
    fflush(stdin);
    if (option == 'y' || option == 'Y')
    {
        for (i = 0; i <= 4; i++)
        {
            printf("\nstring %d : ", i+1);
            fgets(str[i], 50, stdin);
            // fflush(stdin);
        }
    }

    vowels_in_each_string(str, 5, 50);

    return 0;
}

void vowels_in_each_string(char s[], int r, int c)
{
    int i,j, vowels = 0, list = 0;
    for (i = 0; i < r; i++)
    {
        vowels = 0;
        for(j = list;s[j];j++)
        {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
            {
                vowels++;
            }
        }

        printf("nvowels in string %d = %d\n",i+1,vowels);
        list += c;
    }
}