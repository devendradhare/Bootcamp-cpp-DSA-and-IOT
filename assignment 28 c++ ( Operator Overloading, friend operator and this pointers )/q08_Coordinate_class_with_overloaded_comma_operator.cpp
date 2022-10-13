// 8.Create a Coordinate class for 3 variables x,y and z and overload comma operator
// such that when you write  c3 = (c1 , c2 ) then c2 is assigned to c3.
// Where c1, c2, and c3 are objects of 3D coordinate class.
#include <iostream>
using namespace std;
class Coordinate
{
private:
    int x, y, z;

public:
    Coordinate() {}
    Coordinate(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void setData(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    Coordinate operator,(Coordinate &c)
    {
        return c;
    }
    void display()
    {
        cout << x << ", " << y << ", " << z;
    }
};

int main()
{
    Coordinate c1, c2, c3(7, 8, 9);
    c1.setData(1, 2, 3);
    c2.setData(4, 5, 6);

    cout<<"\nc1 = ";
    c1.display();

    cout<<"\nc2 = ";
    c2.display();

    cout<<"\nc3 = ";
    c3.display();

    c1 = (c1,c2,c3);
    cout<<"\n\nc1 = ";
    c1.display();
    return 0;
}