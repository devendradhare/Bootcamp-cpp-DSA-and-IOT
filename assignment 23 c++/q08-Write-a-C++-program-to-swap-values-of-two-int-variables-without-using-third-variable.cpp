// 8. Write a C++ program to swap values of two int variables without using third variable
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    cout << "\n\nswap values of two int variables without using third variable\n\n";
    
    cout << "before swaping \n\ta = " << a << " b = " << b;
    a += b;
    b = a - b;
    a -= b;
    cout << "\nafter swaping\n\ta = " << a << " b = " << b;
    return 0;
}