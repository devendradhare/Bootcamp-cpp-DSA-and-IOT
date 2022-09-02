// 10. Write a function in C to count the frequency of each element of an array.
#include <stdio.h>
int main()
{
    int arr[20] = {2, 3, 4, 2, 4, 3, 1, 5, 5, 3, 7, 5, 3, 7, 5, 8, 5, 7, 3, 5}, i;
    printf("\n\narray = ");
    for (i = 0; i < 20; i++)
        printf("%d ", arr[i]);

    frequency(arr, 20);

    return 0;
}

void frequency(int a[], int si)
{
    int b[si], i, j;
    for (i = 0; i < si; i++)
        b[i] = 0;
    for (i = 0; i < si; i++)
    {
        for (j = 0; j < si; j++)
        {
            if (a[i] == a[j])
                b[j]++;
        }
    }
    printf("\n\nelement\t\tfrequency");
    for (i = 0; i < si; i++)
    {
        for (j = i + 1; j < si; j++)
        {
            if (a[i] == a[j])
                break;
        }
        if (j == si)
            printf("\n   %d\t\t   %d", a[i], b[i]);
    }
}