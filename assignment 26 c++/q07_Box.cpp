// 7.Define a class Box and write a program to enter length, breadth and height
// and initialise objects using constructor also define member functions to calculate volume of the box
#include <iostream>
using namespace std;
class Box
{
private:
    float length, breadth, height;

public:
    Box() {}
    Box(int a, int b, int c)
    {
        length = a;
        breadth = b;
        height = c;
    }
    float volume()
    {
        return length * breadth * height;
    }
    void setData(int a, int b, int c)
    {
        length = a;
        breadth = b;
        height = c;
    }
};

int main()
{
    Box b1(2,3,4),b2;
    b2.setData(3,4,5);
    cout<<"\n\nvolume of box b1 is "<<b1.volume()<<endl;
    cout<<"volume of box b2 is "<<b2.volume()<<"\n\n";
    return 0;

}