// 8. Write a function in C to print all unique elements in an array
#include <stdio.h>
void unique(int a[], int s);
int main()
{
    int i, ar[10] = {3, 5, 3, 2, 5, 8, 5, 6, 1, 7};
    printf("\n\ndemo array = ");
    for (i = 0; i <= 9; i++)
        printf("%d ", ar[i]);

    printf("\n\nunique array el. = ");
    unique(ar, 10);


    printf("\n\n");
    return 0;
}

void unique(int a[], int s)
{
    int i, j;
    for (i = 0; i < s; i++)
    {
        for (j = i + 1; j < s; j++)
        {
            if (a[i] == a[j])
                break;
        }
        if (j == s)
            printf("%d ", a[i]);
    }
}