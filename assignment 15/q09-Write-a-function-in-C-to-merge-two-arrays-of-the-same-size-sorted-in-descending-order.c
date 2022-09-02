// 9. Write a function in C to merge two arrays of the same size sorted in descending order
#include <stdio.h>
void merge(int a[], int b[], int c[], int si);
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 4, 6, 8, 10};
    int arr3[10], i;

    merge(arr1, arr2, arr3, 5);

    printf("\nmerge array = ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr3[i]);

    return 0;
}
void merge(int a[], int b[], int c[], int si)
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i];
        c[i + si] = b[i];
    }

    for (i = 0; i < si * 2 - 1; i++)
    {
        for (j = 0; j < si * 2 - i - 1; j++)
        {
            if (c[j] < c[j + 1])
            {
                c[j] += c[j + 1];
                c[j + 1] = c[j] - c[j + 1];
                c[j] -= c[j + 1];
            }
        }
    }
}