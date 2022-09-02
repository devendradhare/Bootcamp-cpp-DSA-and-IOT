// 4.Write a function to rotate an array by n position in d direction.
//   The d is an indicative value for left or right.
//   (For example, if array of size 5 is [32, 29, 40, 12, 70];
//   n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include <stdio.h>
void rotate_arr(int a[], int si, int r, int d);
void rotate_left(int a[], int s);
void rotate_right(int a[], int s);

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n, d, i;

    printf("\n\narray = ");
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter rotation : ");
    scanf("%d", &n);
    printf("Enter direction\n\t0 for left\n\t1 for right : ");
    scanf("%d", &d);

    rotate_arr(arr, 10, n, d); // it takes 1. array, 2. array size, 3. rotation value, 4. direction

    printf("\n\narray = ");
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void rotate_arr(int a[], int si, int r, int d)
{
    int i;
    for (i = 1; i <= r; i++)
    {
        if (d == 0)
            rotate_left(a, si);
        else
            rotate_right(a, si);
    }
}

void rotate_left(int a[], int s)
{
    int i, temp = a[0];

    for (i = 0; i < s - 1; i++)
        a[i] = a[i + 1];

    a[s - 1] = temp;
}

void rotate_right(int a[], int s)
{
    int i, temp = a[s - 1];

    for (i = s - 1; i >= 1; i--)
        a[i] = a[i - 1];

    a[0] = temp;
}
