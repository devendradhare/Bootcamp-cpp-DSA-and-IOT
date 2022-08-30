// 8.Write a program to find the second smallest number in an array.Take array valuesfrom the user.
#include<stdio.h>
int main()
{
    int arr[10],i,j,value,sv;
    printf("\n\nSecond smallest in an array\nEnter any 10 numbers : ");
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
        if(arr[i]!=arr[0])
        {
            value = arr[i];
            break;
        }
    }
    printf("\n%d is the second smallest vlaue in the array\n\n",value);
    return 0;
}