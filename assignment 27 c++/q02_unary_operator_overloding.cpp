// 2.Write a C++ program to overload unary operators that is increment and decrement
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
    Complex operator++()
    {
        Complex temp;
        temp.a = ++a;
        temp.b = ++b;
        return temp;
    }
    Complex operator++(int)
    {
        Complex temp;
        temp.a = a++;
        temp.b = b++;
        return temp;
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
    Complex c1(3, 3), c3(0,0);

    cout << "\n\nc3 = ";
    c3.print();
    cout << "\nc1 = ";
    c1.print();
    cout << "\n\n";

    c3 = ++c1;
    cout << "c3 = ++c1\n\t\tc3 = ";
    c3.print();
    cout<<"\n\t\tc1 = ";
    c1.print();
    cout << "\n\n";

    c3 = c1++;
    cout << "c3 = c1++\n\t\tc3 = ";
    c3.print();
    cout<<"\n\t\tc1 = ";
    c1.print();
    cout << "\n\n";

    cout << "c3 me abhi hai ";
    c3.print();
    return 0;
}