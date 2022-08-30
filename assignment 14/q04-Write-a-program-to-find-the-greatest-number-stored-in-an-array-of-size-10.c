// 4.Write a program to find the greatest number stored in an array of size 10. Take arrayvalues from the user.
#include <stdio.h>
int main()
{
    int arr[10], i, gnum;
    printf("\n\ngreatest number stored in an array of size 10\nEnter any 10 number : ");

    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    gnum = arr[0];
    for (i = 0; i <= 9; i++)
    {
        if (arr[i] > gnum)
        {
            gnum = arr[i];
        }
    }

    printf("\n%d is greatest\n\n",gnum);
    return 0;
}