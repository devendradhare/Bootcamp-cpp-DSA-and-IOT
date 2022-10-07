// 5.Define a class Date and write a program to Display Dateand initialise date objectusing Constructors
#include <iostream>
using namespace std;
class Date
{
private:
    int dd, mm, yy;

public:
    Date() {}
    Date(int d, int m, int y)
    {
        dd = d;
        mm = m;
        yy = y;
    }
    void setDate(int d, int m, int y)
    {
        dd = d;
        mm = m;
        yy = y;
    }
    void showDate()
    {
        cout << dd << "-" << mm << "-" << yy;
    }
};

int main()
{
    Date d1, d2(7, 10, 2022);
    d1.setDate(22, 6, 2003);
    d1.showDate();
    cout << "\n";
    d2.showDate();
    return 0;
}