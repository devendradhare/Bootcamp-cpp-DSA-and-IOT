// 1. Define a class Complex to represent a complex number.
//  Declare instance membervariables to store real and imaginary part of a complex number,
//  also define instance member functions to set values of complex number and print values of complexnumber

#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void set_values(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " + " << b << "i = 0";
    }
};
int main()
{
    complex c1;
    c1.set_values(5, 6);
    c1.display();
    return 0;
}