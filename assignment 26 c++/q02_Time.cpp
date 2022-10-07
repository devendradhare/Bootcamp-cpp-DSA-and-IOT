// 2.Define a class Time to represent a time with instance variables h,m and s to store hour, minute and second.
// Also define following member functions
//      a.  void setTime(int,int,int)
//      b.  void showTime()
//      c.  void normalize()
//      d.  Time add(Time)

#include <iostream>
using namespace std;
class Time
{
private:
    int h, m, s;

public:
    void setTime(int hour, int minute, int second)
    {
        h = hour;
        m = minute;
        s = second;
        normalize();
        showTime();
    }
    void showTime()
    {
        cout << h << ":" << m << ":" << s;
    }
    void normalize()
    {
        if (s > 60)
        {
            s = s % 60;
            m += s / 60;
        }
        if (m > 60)
        {
            m = m % 60;
            h += m / 60;
        }
    }
    Time add(Time add_that_time)
    {
        Time tamp;
        tamp.h = h + add_that_time.h;
        tamp.m = m + add_that_time.m;
        tamp.s = s + add_that_time.s;
        tamp.normalize();
        return tamp;
    }
};

int main()
{
    Time tm1, tm2;
    cout << "\n\n\tclass time\n";
    tm1.setTime(1, 1, 1);
    tm2.setTime(1, 1, 1);

    cout << "\ntm1 = ";
    tm1.showTime();
    cout << "\ntm2 = ";
    tm2.showTime();

    cout << "\ntm1 + tm2 = ";
    tm1.add(tm2).add(tm2).add(tm2).showTime();
    return 0;
}