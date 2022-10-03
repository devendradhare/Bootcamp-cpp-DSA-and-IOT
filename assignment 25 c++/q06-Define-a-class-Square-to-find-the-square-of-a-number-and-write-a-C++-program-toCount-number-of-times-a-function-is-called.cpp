// 6. Define a class Square to find the square of a number and write a C++ program toCount number of times a function is called
#include <iostream>
using namespace std;
class Square
{
private:
    int number, square;

public:
    void set_number(int x)
    {
        number = x;
        square = x*x;
    }
    int get_number()
    {
        return number;
    }
    int get_square()
    {
        return square;
    }
};

int main()
{
    Square s1,s2;
    s1.set_number(8);
    cout<<"\nsquare of "<<s1.get_number()<<" is = "<<s1.get_square()<<"\n\n";
    return 0;
}