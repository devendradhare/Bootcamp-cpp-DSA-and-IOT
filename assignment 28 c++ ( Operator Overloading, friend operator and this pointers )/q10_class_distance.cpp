// 10.Create a Distance class having 2 instance variable feet and inches.
// Also create default constructor and parameterized constructor takes 2 variables.
// Now overload() function call operator that takes 3 arguments a, b and c and set feet = a + c + 5 andinches = a + b + 15.
#include <iostream>
using namespace std;
class Distance
{
private:
    int f, i;

public:
    Distance() {}
    Distance(int feet, int inches)
    {
        f = feet;
        i = inches;
    }
    void operator()(int a, int b, int c)
    {
        f = a + c + 5;
        i = a + b + 15;
    }
    void display()
    {
        cout << "Feet = " << f << " Inches = " << i << endl;
    }
};
int main()
{
    Distance d1(4, 3), d2, d3;
    d1(2, 3, 4);
    d1.display();
    return 0;
}