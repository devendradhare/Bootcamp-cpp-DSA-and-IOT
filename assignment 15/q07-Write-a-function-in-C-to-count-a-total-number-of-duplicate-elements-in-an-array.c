// 7. Write a function in C to count a total number of duplicate elements in an array
#include <stdio.h>
int duplicate_arr_elements(int a[], int s);
int main()
{
    int arr[10] = {2, 3, 4, 6, 3, 8, 6, 1, 9, 2};
    int d, i;
    char menu;

    printf("\n\ndemo array = ");
    for (i = 0; i <= 9; i++)
        printf("%d ", arr[i]);

    printf("\n\n\tpress e to enter your array\n\tpress c to continue with demo array : ");
    scanf("%c", &menu);
    if (menu == 'e')
    {
        printf("\nEnter any 10 numbers : ");
        for (i = 0; i <= 9; i++)
            scanf("%d ", &arr[i]);
    }
    d = duplicate_arr_elements(arr, 10);

    printf("\nnumbers of duplicates = %d\n\n ", d);

    return 0;
}

int duplicate_arr_elements(int a[], int s)
{
    int i, j, d = 0, brr[s];
    for (i = 0; i < s; i++)
        brr[i] = a[i];

    for (i = 0; i < s - 1; i++)
        for (j = 0; j < s - 1 - i; j++)
            if (brr[j] > brr[j + 1])
            {
                brr[j] += brr[j + 1];
                brr[j + 1] = brr[j] - brr[j + 1];
                brr[j] -= brr[j + 1];
            }

    for (i = 0; i < s - 1; i++)
        if (brr[i] == brr[i + 1])
            d++;

    return d;
}

// for (j = i + 1; j < s; j++)
// {
//     if (brr[i] == brr[j])
//     {
//         d++;
//         i++;
//     }
// }