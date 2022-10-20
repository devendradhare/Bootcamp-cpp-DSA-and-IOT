// 7. Create two class Time and Minute and add required getter and setter including constructors.
// Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
// Example -
// int main()
// {
//     Time t1(2, 30);
//     t1.display();
//     Minute m1;
//     m1.display();
//     m1 = t1 // Fetch minute from time
//     t1.display();
//     m1.display();
//     return 0;
// }
#include <iostream>
using namespace std;
class Time
{
private:
    int h, m;

public:
    Time(int hour, int minute)
    {
        h = hour;
        m = minute;
    }
    int get_hour()
    {
        return h;
    }
    int get_minute()
    {
        return m;
    }
    void display()
    {
        cout << "\nhour = " << h << "\nminute = " << m;
    }
};
class Minute
{
private:
    int m;

public:
    Minute() {}
    Minute(Time t)
    {
        m = t.get_hour() * 60 + 60;
    }
    void display()
    {
        cout << "\nminute = " << m;
    }
};

int
main()
{
    Time t1(2, 30);
    t1.display();
    Minute m1;
    m1.display();
    m1 = t1; //          Fetch minute from time
    t1.display();
    m1.display();
    return 0;
}