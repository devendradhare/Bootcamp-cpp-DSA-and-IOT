// 8. Define a class Rectangle and define an instance member function to find the area ofthe rectangle
#include<iostream>
using namespace std;
class Ractangle
{
private:
    int width,hight;
public:
    void set_ractangle(int x,int y)
    {
        width = x;
        hight = y;
    }
    int get_area()
    {
        return width*hight;
    }
    int get_width()
    {
        return width;
    }
    int get_hight()
    {
        return hight;
    }
};

int main()
{
    Ractangle r1,r2;
    r1.set_ractangle(4,5);
    cout<<"\n\narea of ractangle = "<<r1.get_area()<<"\n\n";
    return 0;
}