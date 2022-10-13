// 1.  Define a class Complex with appropriate instance variables and member functions.
//     Overload following operatorsa.
//         1 -  << insertion operatorb.
//         2 -  >> extraction operator.

#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    friend ostream &operator<<(ostream &print, Complex c);
    friend istream &operator>>(istream &scan, Complex &c);
};

ostream &operator<<(ostream &print, Complex c)
{
    print << c.a << " + " << c.b << "i";
    return print;
}

istream &operator>>(istream &scan, Complex &c)
{
    cout << "\na = ";
    scan >> c.a;
    cout << "b = ";
    cin >> c.b;
    return scan;
}

int main()
{
    Complex c1, c2;
    cout << "\nEnter value of c1 : ";
    cin >> c1;
    cout << "\nEnter value of c2 : ";
    cin >> c2;
    cout << "\nvalue of c1 is : " << c1 << "\nvalue of c2 is : " << c2;
    return 0;
}