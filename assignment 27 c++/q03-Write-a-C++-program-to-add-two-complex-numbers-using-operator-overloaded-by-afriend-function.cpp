// 3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.
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
    char print()
    {
        cout<<a<<" + "<<b<<"i";
        return 0;
    }
    void setData(int real, int img)
    {
        a = real;
        b = img;
    }
    friend Complex operator+(Complex A, Complex B);
};
Complex operator+(Complex A, Complex B)
{
    Complex temp;
    temp.a = A.a + B.a;
    temp.b = A.b + B.b;
    return temp;
}
int main()
{
    Complex c1(3,3),c2,c3;
    c2.setData(2,2);
    cout<<"\n\nc1 = "<<c1.print();
    cout<<"\nc2 = "<<c2.print();
    c3 = c1+c2;
    cout<<"\n\nc1 + c2 = "<<c3.print();
    return 0;
}