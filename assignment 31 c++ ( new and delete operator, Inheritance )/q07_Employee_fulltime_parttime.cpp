// 7.Write class declarations and member function definitions for a C++ base class to represent an Employee (emp-code, name).
//  Derive two classes as Fulltime (daily rate, number of days, salary) and Parttime (number of working hours, hourly rate, salary).
//  Write a menu driven program to :
//     1.  Accept the details of ‘n’ employees.
//     2.  Display the details of ‘n’ employees.
//     3.  Search a given Employee by emp-code.

#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    double emp_code;
    char name[30];

public:
    void set_emp_code(double emp_code) { this->emp_code = emp_code; }
    void set_emp_code() { cin >> emp_code; }
    void set_name(char *name) { strcpy(this->name, name); }
    void set_name()
    {
        fflush(stdin);
        fgets(name, 30, stdin);
        name[strlen(name) - 1] = '\0';
    }

    char *get_name() { return name; }
    double get_emp_code() { return emp_code; }
};

class Fulltime : public Employee
{
private:
    float daily_rate, salary;
    int no_of_days;

public:
};
class Parttime : public Employee
{
private:
    float wroking_hours, rate, salary;

public:
};
void set_details()
{
    int emp_no;
    char name[30], status[4];
    float salary;

    do
    {
        cout << "\nselect employee type :\n\t1. Fulltime\n\t2. Parttime\n\t\t\t";
        cin >> emp_no;
        if(emp_no>2)
            cout<<"\nplease enter valid type;";
    } while (emp_no > 2);

    cout << "\nEnter employee number  : ";
    cin >> emp_no;

    cout << "\nEnter employee name    : ";
    fgets(name, 30, stdin);
    name[strlen(name) - 1] = '\0';

    cout << "\nEnter salary           : ";
    cin >> salary;
}
int main()
{
    int option = 0;

    while (option != 4)
    {
        switch (option)
        {
        case 1:
            set_details();
            break;

        default:
            break;
        }
    }
}