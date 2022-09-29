// 6. Define a function to swap data of two int variables using call by reference
#include <iostream>
using namespace std;

inline void swap(int &a, int &b);
void swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int a, b;

    cout << "\n\nEnter any two numbers (a and b): ";
    cin >> a >> b;
    cout << "\n\nbefore swaping : \n\ta = " << a << "\n\tb = " << b;
    swap(a, b);
    cout << "\n\nafter swaping : \n\ta = " << a << "\n\tb = " << b;
    return 0;
}