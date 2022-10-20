// 6.Create a Time class and take Duration in seconds.Now you need to convert seconds(i.e in int) to Time class.
// Example -
// int main()
// {
//     int duration;
//     cout <<"Enter time duration in minutes";
//     cin >> duration;
//     Time t1 = duration;
//     t1.display();
//     return 0;
// }

#include<iostream>
using namespace std;
class Time
{
private:
    int m,s;
public:
    Time(int minute)
    {
        m = minute;
        s = m*60;
    }
    void display()
    {
        cout<<"\ns = "<<s;
    }
};

int main()
{
    int duration;
    cout <<"Enter time duration in minutes";
    cin >> duration;
    Time t1 = duration;
    t1.display();
    return 0;
}