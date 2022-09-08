// 2.Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include <stdio.h>
void sort_string(char s[], int index, int len);
void str_swap(char a[], char b[]);
int compare_str(char a[], char b[]);
int main()
{
    char city_name[10][50] = {"bhopal", "chhindwara", "indore", "mumbai", "tokiyo", "delhi", "patna", "kolkata", "haidrabad", "pune"}, option;
    int i, j;
    printf("\n\nDemo city name : ");
    for (i = 0; i <= 9; i++)
    {
        printf("\n%d\t%s", i, city_name[i]);
    }
    printf("\n\nDo you want to enter citys name (y/n) : ");
    scanf("%c", &option);
    fflush(stdin);
    if (option == 'y' || option == 'Y')
    {
        for (i = 0; i <= 9; i++)
        {
            printf("\ncity %d : ", i + 1);
            fgets(city_name[i], 50, stdin);
            for (j = 0; city_name[i][j]; j++)
                ;
            city_name[i][j - 1] = 0;
        }
    }

    sort_string(city_name, 10, 50);

    for (i = 0; i <= 9; i++)
    {
        printf("\n%d\t%s", i, city_name[i]);
    }
    return 0;
}

void sort_string(char s[], int index, int len)
{
    int i, j, add = 0;
    for (i = 0; i < index - 1; i++)
    {
        for (j = 0; j < index - 1 - i; j++)
        {
            if (compare_str(&s[add], &s[add + len]) == 1)
            {
                str_swap(&s[add], &s[add + len]);
            }
            add += len;
        }
        add = 0;
    }
}
void str_swap(char a[], char b[])
{
    int i, l, temp;
    for (l = 0; a[l]; l++)
        ;
    for (i = 0; b[i]; i++)
        ;

    l = i > l ? i : l;

    for (i = 0; i < l; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
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
        {
            return -1;
        }
        if (a[i] > b[i])
        {
            return 1;
        }
    }
    return 0;
}