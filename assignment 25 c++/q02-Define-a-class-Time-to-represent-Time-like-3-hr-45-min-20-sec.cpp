// 2.Define a class Time to represent Time (like 3 hr 45 min 20 sec).
// Declare appropriate number of instance member variables and also define instance
// member functions to set values for time and display values of time

#include <iostream>
using namespace std;
class Time
{
private:
    int hh = 0, mm = 0, ss = 0;

public:
    void set_time(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
        if (ss > 60)
        {
            mm += ss / 60;
            ss = ss % 60;
        }
        if (mm > 60)
        {
            hh += mm / 60;
            mm = mm % 60;
        }
    }
    void display()
    {
        cout << hh << " hr " << mm << " min " << ss << " sec";
    }
};
int main()
{
    Time time1;
    time1.display();
    cout<<endl;
    time1.set_time(3, 60, 70);
    time1.display();
    cout<<endl;
    cout<<endl;
    return 0;
}
