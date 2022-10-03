// 10.Define a class Area and define instance member functions to find the area of the different shapes 
// like square, rectangle , circle etc.
#include<iostream>
using namespace std;
class area
{
private:
    int square = 0,width = 0,hight = 0;
    float radius = 0;
public:
    void set_square(int x)
    {
        square = x;
    }
    void set_ractangle(int x,int y)
    {
        width = x;
        hight = y;
    }
    void set_circle(float x)
    {
        radius = x;
    }
    int area_of_square()
    {
        return square*square;
    }
    int area_of_ractangle()
    {
        return width*hight;
    }
    float area_of_circle()
    {
        return (22/7.0)*radius*radius;
    }

    // square
    // ractangle
    // circle
};

int main()
{
    area set1,set2;
    set1.set_square(4);
    set1.set_ractangle(4,5);
    set1.set_circle(100);
    cout<<"\n\narea of square is = "<<set1.area_of_square()<<endl;
    cout<<"area of ractangle is = "<<set1.area_of_ractangle()<<endl;
    cout<<"area of circle is = "<<set1.area_of_circle()<<"\n\n";
    return 0;
}
