// 7.Write a program to find second largest in an array.Take array values from the user
#include <stdio.h>
int main()
{
    int arr[10], i, j, value;
    printf("\n\nSecond largest in an array\nEnter any 10 numbers : ");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i <= 8; i++)
    {
        for (j = 0; j <= 8 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] += arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] -= arr[j + 1];
            }
        }
    }
    for (i = 9; i >= 0; i--)
    {
        if (arr[i] != arr[9])
        {
            value = arr[i];
            break;
        }
    }

    printf("\n%d is the second largest vlaue in the array\n\n", value);
    return 0;
}