// 11.Create a class Marks that have one member variable marks and one member function that will print marks.
// We know that we can access member functions using(.) dot operator.
// Now you need to overload (->) arrow operator to access that function.
#include <iostream>
using namespace std;
class Marks
{
private:
public:
    float marks;
    Marks() {}
    Marks(int a)
    {
        marks = a;
    }
    void setMarks(float a)
    {
        marks = a;
    }
    float getMarks()
    {
        cout << marks;
        return marks;
    }
    Marks *operator->()
    {
        return this;
    }
};

int main()
{
    Marks m1(78.4), m2;
    m2->setMarks(85.9);
    m2->getMarks();
    return 0;
}