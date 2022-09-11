// 3.Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include <stdio.h>
int main()
{
    int arr[10] = {6, 1, 8, 9, 3, 2, 10, 4, 5, 7}, i, si;
    printf("\n\nfunction to sort an array of int type values\n\narray before sorting\n\t");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    si = i;

    sort(arr, si);

    printf("\n\narray after sorting\n\t");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
    return 0;
}

void sort(int *ptr, int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (*(ptr + j) > *(ptr + 1 + j))
            {
                temp = *(ptr + j);
                *(ptr + j) =  *(ptr + 1 + j);
                *(ptr + 1 + j) = temp;
            }
        }
    }
}