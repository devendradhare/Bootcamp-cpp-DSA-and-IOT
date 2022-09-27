// 3. Write a program to calculate the sum of n numbers entered by the user using malloc and free
#include <stdio.h>
int main()
{
    int n, sum = 0, *num, i;
    printf("\n\n\t\tSum of n numbers\nEnter value of n : ");
    scanf("%d", &n);
    num = (int *)malloc(sizeof(int) * n);
    printf("\nEnter %d numbers : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum += num[i];
    }
    free(num);
    printf("\n\nsum = %d\n\n", sum);
    return 0;
}