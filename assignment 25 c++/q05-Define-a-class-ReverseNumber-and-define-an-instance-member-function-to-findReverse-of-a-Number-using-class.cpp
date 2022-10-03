// 5. Define a class ReverseNumber and define an instance member function to findReverse of a Number using class
#include <iostream>
using namespace std;
class ReverseNumber
{
private:
    int number, reverse_number = 0;

public:
    void set_number(int n)
    {
        number = n;
        while (n)
        {
            reverse_number*=10;
            reverse_number+=(n%10);
            n/=10;
        }
    }
    int get_number()
    {
        return number;
    }
    int get_reverse_number()
    {
        return reverse_number;
    }
};

int main()
{
    ReverseNumber r1,r2;
    r1.set_number(4567);
    cout<<"\nreverse of "<<r1.get_number()<<" is "<<r1.get_reverse_number()<<"\n\n";
    return 0;
}
