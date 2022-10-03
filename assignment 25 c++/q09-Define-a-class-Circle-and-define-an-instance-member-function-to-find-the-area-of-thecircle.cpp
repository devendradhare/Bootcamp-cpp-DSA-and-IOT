// 9. Define a class Circle and define an instance member function to find the area of thecircle
#include<iostream>
using namespace std;
class Circle
{
private:
    float radius;
public:
    void set_radius(float r)
    {
        radius = r;
    }
    float get_area()
    {
        return (22/7.0)*radius*radius;
    }
    float get_radius()
    {
        return radius;
    }
};

int main()
{
    Circle c1,c2;
    c1.set_radius(10);
    cout<<"\n\narea of the circle is = "<<c1.get_area()<<"\n\n";
    return 0;
}
