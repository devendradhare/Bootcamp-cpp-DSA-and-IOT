// 2. Define a function to find the highest value digit in a given number
#include <iostream>
int max_digit(int n);
using namespace std;
int main()
{
    int n;
    cout << "\n\nfind the highest value digit in a given number\nEnter a number : ";
    cin >> n;

    cout << "\n\n"
         << max_digit(n) << " is highest value digit in " << n << "\n\n";
    return 0;
}

int max_digit(int n)
{
    int i, max = n % 10;
    while (n > 0)
    {
        if (max < n % 10)
            max = n % 10;
        n /= 10;
    }
    return max;
}