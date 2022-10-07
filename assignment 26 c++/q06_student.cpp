// 6.Define a class student and write a program to enter student details using constructor
// and define member function to display all the details
#include <iostream>
#include <string.h>
#include<iomanip>
using namespace std;
class student
{
private:
    int roll_no;
    char name[50];
    float marks;

public:
    student(){};
    student(int r, char n[], float m)
    {
        roll_no = r;
        strcpy(name, n);
        marks = m;
    }
    void setData(int r, char n[], float m)
    {
        roll_no = r;
        strcpy(name, n);
        marks = m;
    }
    void show_details()
    {
        cout << "roll no. = " << roll_no << " name = " <<setw(20)<< name <<setw(20)<< " marks = " << marks << endl;
    }
};

int main()
{
    student tony(12345243, "tony stark", 99.99), pratik(12345244, "pratik jain", 98.99), aditya;
    aditya.setData(12345245, "aditya chaodhry", 97.99);
    tony.show_details();
    pratik.show_details();
    aditya.show_details();
    return 0;
}
