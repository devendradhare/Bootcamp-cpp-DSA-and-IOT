// 7. Write a function using the default argument that is able to add 2 or 3 numbers
#include <iostream>
using namespace std;

inline int sum(int a, int = 0, int = 0);
int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int a = 3, b = 4, c = 5;
    cout << "\n\na = " << a << "\nb = " << b << "\nc = " << c;
    cout << "\nsum of a + b = " << sum(a, b);
    cout << "\nsum of a + b + c = " << sum(a, b, c) << "\n\n";
    return 0;
}