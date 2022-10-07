// 3.Define a class Cube and calculate Volume of Cube and initialise it using constructor
#include <iostream>
using namespace std;
class Cube
{
private:
    int langth;

public:
    Cube() {}
    Cube(int a)
    {
        langth = a;
    }
    void setLangth(int A)
    {
        langth = A;
    }
    int getVolume()
    {
        return langth * langth * langth;
    }
};

int main()
{
    Cube c1, c2(3);
    c1.setLangth(5);
    cout<<"\n\nvolume of c1 is "<<c1.getVolume()<<"\nvolume of c2 is "<<c2.getVolume();
    return 0;
}