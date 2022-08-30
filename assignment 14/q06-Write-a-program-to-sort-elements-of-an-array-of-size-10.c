// 6.Write a program to sort elements of an array of size 10. Take array values from the user
#include<stdio.h>
int main()
{
    int arr[10],i,j;
    printf("\n\nEnter any 10 numbers : ");
    for(i = 0; i <= 9; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i <= 8; i++)
    {
        for(j = 0; j <= 8-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                arr[j] += arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] -= arr[j+1];
            }
        }
    }
    for(i = 0; i <= 9; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}