// 8. Define a class Bank and define member functions to read principal , rate of interest and year.
//    Another member functions to calculate simple interest and display it.
//    Initialise all details using constructor
#include <iostream>
using namespace std;
class Bank
{
private:
    float p, r, y, si;

public:
    Bank() {}
    Bank(int principal, int roi, int year)
    {
        p = principal;
        r = roi;
        y = year;
        si = (p * r * y) / 100;
    }
    void setData(int principal, int roi, int year)
    {
        p = principal;
        r = roi;
        y = year;
        si = (p * r * y*1.0) / 100;
    }
    void showData()
    {
        cout << "principal = " << p << "\nrate of interest = " << r <<"\tSI = "<<si<< "\nyear = " << y<<endl;
    }
    float getPrincipal()
    {
        return p;
    }
    float getRateOfInterest()
    {
        return r;
    }
    float getYear()
    {
        return y;
    }
    float getSI()
    {
        return si;
    }
};

int main()
{
    Bank ac1, ac2(2000, 10, 1);
    ac1.setData(10000,10,1);
    ac1.showData();
    ac2.showData();
}