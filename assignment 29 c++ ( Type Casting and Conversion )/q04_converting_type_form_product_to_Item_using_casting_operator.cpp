// 4. Create Product class and convert Product type to Item type using casting operator
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
class Item;
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
};

class Item
{
private:
    int x, y;

public:
    Item() {}
    Item(Product p) 
    {
        x = p.getA();
        y = p.getB();
    }
    void display()
    {
        cout << "x = " << x << " y = " << y;
    }
};

int main()
{
    Item i1;
    Product p1;
    p1.setData(3, 4);
    i1 = p1;
    cout << "\ni1 = ";
    i1.display();
    return 0;
}