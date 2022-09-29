// 1. Define a function to check whether a given number is a Prime number or not

#include <iostream>
int is_prime(int = 0);
using namespace std;
int main()
{
    int n;
    cout << "\n\ncheck whether a given number is a prime number or not\n\nEnter a number : ";
    cin >> n;
    if (is_prime(n))
        cout << "\n\n"
             << n << " is a prime number\n\n";
    else
        cout << "\n\n"
             << n << " is not a prime number\n\n";
    return 0;
}

int is_prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % 2 == 0)
            return 0;
    }
    return 1;
}