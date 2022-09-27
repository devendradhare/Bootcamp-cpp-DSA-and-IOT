// 6. Write a program in C to find the largest element using Dynamic Memory Allocation
#include <stdio.h>
int main()
{
    int *arr, i = 0, n, max = 0;
    printf("\n\n\tLargest element\nHow many vlaues you want to enter : ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));

    printf("\nEnter %d numbers : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nLargest number = %d\n\n", max);
    free(arr);
    return 0;
}