// 10. Find out the maximum and minimum from an array using dynamic memory allocationin C
#include <stdio.h>
int main()
{
    int *arr, i = 0, n, max = 0,min = 0;
    printf("\n\n\tLargest and smallest element\nHow many vlaues do you want to enter : ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));

    printf("\nEnter %d numbers : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("\nLargest number = %d\nsmallest number = %d\n\n", max,min);
    free(arr);
    return 0;
}