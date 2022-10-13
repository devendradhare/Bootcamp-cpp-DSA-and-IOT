// 6.Create a complex class and overload assignment operator for that class.

#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    Complex() {}
    Complex(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Complex &operator=(Complex &c)
    {
        cout << "\n = operator called";
        a = c.a;
        b = c.b;
        return *this;
    }
    friend ostream &operator<<(ostream &print, Complex &c);
};
ostream &operator<<(ostream &print, Complex &c)
{
    print << c.a << " + " << c.b << "i";
    return print;
}
int main()
{
    Complex c1(3, 4), c2, c3;
    c2.setData(5, 6);

    cout << "\nc1 = " << c1 << "\nc2 = " << c2;

    c3 = c1;

    cout << "\nc3 = " << c3;
    return 0;
}
