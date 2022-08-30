// 5.Write a program to find the smallest number stored in an array of size 10. Take arrayvalues from the user.
#include <stdio.h>
int main()
{
    int arr[10], i, Snum;
    printf("\n\nSmallest number stored in an array of size 10\nEnter any 10 number : ");

    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    Snum = arr[0];
    for (i = 0; i <= 9; i++)
    {
        if (arr[i] < Snum)
        {
            Snum = arr[i];
        }
    }

    printf("\n%d is smallest\n\n",Snum);
    return 0;
}