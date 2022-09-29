// 4. Define a function to print Pascal Triangle up to N lines
#include <iostream>
using namespace std;

inline int combination(int n, int r);
void print_pascal(int n);
int factorial(int n);
void print_pascal(int n)
{

    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n-i; j++)
            cout << " ";
        for (j = 0; j <= i; j++)
        {
            cout << " " << combination(i, j);
        }
        cout << endl;
    }
}
int factorial(int n)
{
    if (n < 1)
        return 1;
    return factorial(n - 1) * n;
}
int combination(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main()
{
    int n;
    cout << "\nprint PASCAL triangle up to N line\nEnter vlaue of N : ";
    cin >> n;
    print_pascal(n);
    return 0;
}