// 4.Define a class Counter and Write a program to Show Counter using Constructor
#include <iostream>
using namespace std;
class Counter
{
private:
    static int count;

public:
    Counter()
    {
        count++;
    }
    static int getCount()
    {
        return count;
    }
};
// int Counter::getCount();
int Counter::count;

int main()
{
    Counter c1, c2, c3, c4;
    cout << "\n\ntotal " << Counter::getCount() << " veriables created\n\n";
    return 0;
}