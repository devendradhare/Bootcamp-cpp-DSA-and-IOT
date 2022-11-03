#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a;

public:
    A(int num) { a = num; }
    A() { cin >> a; }
    friend void swap(A &a, B &b);
    friend void show_A_B(A &x, B &y);
};

class B
{
private:
    int b;

public:
    B(int num) { b = num; }
    B() { cin >> b; }
    friend void swap(A &a, B &b);
    friend void show_A_B(A &x, B &y);
};
void swap(A &x, B &y)
{
    int tamp;
    tamp = x.a;
    x.a = y.b;
    y.b = tamp;
}
void show_A_B(A &x, B &y)
{
    cout << "\na.a = " << x.a << " b.b = " << y.b;
}

int main()
{
    A a(10);
    B b(20);
    show_A_B(a, b);

    swap(a, b);

    cout << "\nafre swap : ";
    show_A_B(a, b);
    
    return 0;
}