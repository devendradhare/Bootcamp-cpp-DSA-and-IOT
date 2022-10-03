// 4. Define a class LargestNumber and define an instance member function to find theLargest of three Numbers using the class
#include <iostream>
using namespace std;
class LargestNumber
{
private:
    int a, b, c, lrgNO;

public:
    void setNo(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
        lrgNO = a > b ? a > c ? a : c : b > c ? b
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
        return a=c;
    }    
    int get_lrgNO()
    {
        return lrgNO;
    }
};

int main()
{
    LargestNumber first,second;

    first.setNo(4,5,3);

    cout<<"\nlargest number between "<<first.get_1st_number()<<", "<<first.get_2nd_number()<<" and "<<first.get_3rd_number()<<" is = "<<first.get_lrgNO()<<endl;
    return 0;
}