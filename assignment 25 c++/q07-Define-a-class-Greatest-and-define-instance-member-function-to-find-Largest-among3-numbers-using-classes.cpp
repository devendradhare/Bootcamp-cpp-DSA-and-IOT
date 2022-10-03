// 7. Define a class Greatest and define instance member function to find Largest among3 numbers using classes
#include <iostream>
using namespace std;
class Greatest
{
private:
    int a, b, c, greatest;

public:
    void set_numbers(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
        greatest = a > b ? a > c ? a : c : b > c ? b
                                                 : c;
    }
    int get_1st_number()
    {
        return a;
    }
    int get_2nd_number()
    {
        return b;
    }
    int get_3rd_number()
    {
        return c;
    }
    int get_greatest_number()
    {
        return greatest;
    }
};

int main()
{
    Greatest g1,g2;
    g1.set_numbers(2,3,4);
    cout<<"\n\ngreatest number between "<<g1.get_1st_number()<<", "<<g1.get_2nd_number()<<" and "<<g1.get_3rd_number()<<" is = "<<g1.get_greatest_number()<<"\n\n";
}
