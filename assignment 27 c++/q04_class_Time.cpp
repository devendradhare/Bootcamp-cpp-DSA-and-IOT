// 4.  Create a class Time which contains :
//         - Hours
//         - Minutes
//         - Seconds
//     Write a C++ program using operator overloading for the following :
//         1.  ==  :   To check whether two Times are the same or not.
//         2.  >>  :   To accept the time.
//         3.  <<  :   To display the time.
#include <iostream>
using namespace std;
class Time
{
private:
    int H, M, S;

public:
    Time()
    {
        H = 0;
        M = 0;
        S = 0;
    }
    Time(int hour, int minuts, int second)
    {
        H = hour;
        M = minuts;
        S = second;
        normalize();
    }
    void Set_Time(int hour, int minuts, int second)
    {
        H = hour;
        M = minuts;
        S = second;
        normalize();
    }
    char print_time()
    {
        cout << H << ":" << M << ":" << S;
        return 0;
    }
    void normalize()
    {
        if (S > 60)
        {
            M += S / 60;
            S = S % 60;
        }
        if (M > 60)
        {
            H += M / 60;
            M = M % 60;
        }
    }
    int operator==(Time T)
    {
        if (T.H == H && T.M == M && T.S == S)
            return 1;
        return 0;
    }
    friend istream &operator>>(istream &le_bhai, Time &time);
    friend ostream &operator<<(ostream &bol_bhai, Time time);
    // {
    //     cout << "\nEnter hour : ";
    //     cin >> H;
    //     cout << "Enter minutes : ";
    //     cin >> M;
    //     cout << "Enter seconds : ";
    //     cin << S;
    // }
};
istream &operator>>(istream &le_bhai, Time &time)
{
    cout << "\nEnter hour : ";
    cin >> time.H;

    cout << "Enter minutes : ";
    cin >> time.M;

    cout << "Enter seconds : ";
    cin >> time.S;

    time.normalize();
    return le_bhai;
}
ostream &operator<<(ostream &bol_bhai, Time time)
{
    cout << time.H << ":" << time.M << ":" << time.S;
    return bol_bhai;
}
int main()
{
    Time t1, t2;
    cout << "\n\nEnter first time : ";
    cin >> t1;
    cout << "\nfirst time = " << t1;

    cout << "\n\nEnter second time : ";
    cin >> t2;
    cout << "\nsecond time = " << t2;

    if (t1 == t2)
        cout << "\ntimes are same";
    else
        cout << "\ntimes are deffrent";
    cout << "\n\n";
    return 0;
}