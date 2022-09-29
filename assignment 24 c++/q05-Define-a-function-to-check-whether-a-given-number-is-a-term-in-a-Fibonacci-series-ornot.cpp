// 5. Define a function to check whether a given number is a term in a Fibonacci series or not
#include <iostream>
using namespace std;
int term_of_fibonacci(int n);
int term_of_fibonacci(int n)
{
    int a = -1, b = 1, c = 0;
    while (c <= n)
    {
        c = a + b;
        a = b;
        b = c;
        cout << " " << c;
        if (c == n)
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    cout << "\n\nCheck whether a given number is a term in a fibonacci series or not\nEnter the number : ";
    cin >> n;
    if (term_of_fibonacci(n))
        cout << "\n\nyes, "
             << n << " is the term of fibonacci series\n\n";
    else
        cout << "\n\nno, "
             << n << " is not the term of fibonacci series\n\n";
    return 0;
}