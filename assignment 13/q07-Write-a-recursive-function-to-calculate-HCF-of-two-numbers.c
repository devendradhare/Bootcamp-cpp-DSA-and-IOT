// 7. Write a recursive function to calculate HCF of two numbers
#include <stdio.h>
int main()
{
    int a, b, hcf;
    printf("\n\nrecursive function to calculate HCF of two numbers\nenter a number : ");
    scanf("%d%d",&a,&b);

    hcf = HCF(a, b);

    printf("\nHCF of %d and %d is %d", a, b, hcf);
    return 0;
}
int HCF(int a, int b)
{
    {
        int x = (a > b) ? a : b;
        int y = (a < b) ? a : b;

        if (y == 0)
        {
            return x;
        }
        else
        {
            return HCF(y, (x % y));
        }
    }
}

// 2   50  100
// 5   25  50
// 5   5   25
// 5   5   5
//     1   1
