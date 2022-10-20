// 8. Create a Rupee class and convert it into int.And Display it.
// Example - 
// int main()
// {
//     Rupee r = 10;
//     int x = r;
//     cout << x;
//     return 0;
// }
#include<iostream>
using namespace std;
class Rupee
{
    private:
    float Rs;
    public:
    Rupee(){}
    Rupee(float a)
    {
        Rs = a;
    }
    operator int()
    {
        return Rs;
    }
};
int main()
{
    Rupee r = 10;
    int x = r;
    cout << x;
    return 0;
}