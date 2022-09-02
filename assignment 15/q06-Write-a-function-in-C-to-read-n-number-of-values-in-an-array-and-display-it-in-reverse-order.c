// 6.Write a function in C to read n number of values in an array and display it in reverse order.
#include <stdio.h>
void display_reverse(int array[],int s);
int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    display_reverse(arr,10);

    return 0;
}

void display_reverse(int array[],int s)
{
    printf("\n");
    for (s--; s >= 0; s--)
    {
        printf("%d ", array[s]);
    }
    printf("\n\n");
}