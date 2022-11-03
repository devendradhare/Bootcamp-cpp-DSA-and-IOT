// 2.Write a C++ program to add two numbers using single inheritance.
// Accept these two numbers from the user in base class and display the sum of these two numbers in derived class.
#include <iostream>
using namespace std;
class base
{
private:
    int a, b;

public:
    base() {}
    base(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
};

class derived : public base
{
private:
    int sum;

public:
    void display_sum()
    {
        cout << "sum = " << this->getA() + this->getB();
    }
};

int main()
{
    derived d;

    d.setData(1,2);
    d.display_sum();

    return 0;
}