// 3. Create a Product class and convert Product type to Item type using constructor
// int main()
// {
//     Item i1;
//     Product p1;
//     p1.setData(3, 4);
//     i1 = p1;
//     return 0;
// }

#include <iostream>
using namespace std;
class Product
{
private:
    int a, b;

public:
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
    void display()
    {
        cout << "product's a = " << a << ", b = " << b;
    }
};
class Item
{
private:
    int a, b;

public:
    Item(Product p)
    {
        a = p.getA();
        b = p.getB();
    }
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "Item's a = " << a << ", b = " << b;
    }
};

int main()
{
    Product p1, p2;
    p1.setData(3, 4);
    p2.setData(8, 9);

    Item i1 = p1;
    cout << "\ni1 = ";
    i1.display();

    i1 = p2;
    cout << "\ni1 = ";
    i1.display();

    cout << "\np1 = ";
    p1.display();

    return 0;
}