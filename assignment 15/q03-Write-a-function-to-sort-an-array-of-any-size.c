// 3.Write a function to sort an array of any size. (TSRN)
#include <stdio.h>
void sort(int arr[], int s);
int main()
{
    int i, arr[10] = {1, 20, 2, 1000, 5, 200, 10, 500, 100, 50};
    printf("\n\narray before sorting : ");
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }

    sort(arr, 10);

    printf("\n\narray after sorting  : ");
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}

void sort(int arr[], int s)
{
    int i, j;
    for (i = 0; i <= s - 2; i++)
    {
        for (j = 0; j <= s - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] += arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] -= arr[j + 1];
            }
        }
    }
}