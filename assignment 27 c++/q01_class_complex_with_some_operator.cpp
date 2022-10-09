// 1.Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class :
//         a.  +
//         b.  -
//         c.  *
//         d.  ==

#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    Complex() {}
    Complex(int real, int img)
    {
        a = real;
        b = img;
    }
    void Set_Data(int real, int img)
    {
        a = real;
        b = img;
    }
    Complex operator+(Complex C)
    {
        C.a += a;
        C.b += b;
        return C;
    }
    Complex operator-(Complex C)
    {
        Complex temp;
        temp.a = a - C.a;
        temp.b = b - C.b;
        return temp;
    }
    Complex operator*(Complex C)
    {
        C.a *= a;
        C.b *= b;
        return C;
    }
    int operator==(Complex C)
    {
        if (C.a == a && C.b == b)
            return 1;
        return 0;
    }
    char print()
    {
        if (b >= 0)
            cout << a << " + " << b << "i";
        else
            cout << a << " + (" << b << "i)";
        return 0;
    }
};

int main()
{
    Complex c1(2, 3), c2, c3;
    c2.Set_Data(3, 4);

    cout << "\nc1 = " << c1.print() << "\nc2 = " << c2.print();

    c3 = c1 + c2;
    cout << "\n\nc1 + c2 = " << c3.print();

    c3 = c1 - c2;
    cout << "\nc1 - c2 = " << c3.print();

    c3 = c1 * c2;
    cout << "\nc1 * c2 = " << c3.print();

    if(c3 == c1)
        cout<<"\n\nYES, c3 and c1 is equal";
    else
        cout<<"\n\nNO, c3 and c1 is not equal\n\n";

    return 0;
}