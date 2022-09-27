// 5. Write a program to read a one dimensional array,
// print sum of all elements along with inputted array elements using dynamic memory allocation
#include <stdio.h>
int main()
{
    int *arr, i = 0, n, sum = 0;
    printf("\n\n\tsum of n elements\nEnter value of n : ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));

    printf("\nEnter %d numbers : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("\nsum of the numbers = %d\n\n", sum);
    free(arr);
    return 0;
}