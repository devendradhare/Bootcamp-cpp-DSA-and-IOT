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
    void set_daily_rate(float dr) { daily_rate = dr; }
    void set_daily_rate() { cin >> daily_rate; }
    void set_no_of_days(int d) { no_of_days = d; }
    void set_no_of_days() { cin >> no_of_days; }
    void display()
    {
        salary = daily_rate * no_of_days;
        cout << "\n------------------------------------------------";
        cout << "\nEmployee id        : " << get_emp_code();
        cout << "\nEmployee name      : " << get_name();
        cout << "\nstatus             : Fulltime";
        cout << "\ndaily rate         : " << daily_rate;
        cout << "\nnumber of days     : " << no_of_days;
        cout << "\nEmployee's salary  : " << salary;
    }
};
class Parttime : public Employee
{
private:
    float wroking_hours, rate, salary;

public:
    void set_working_hours(float h) { wroking_hours = h; }
    void set_working_hours() { cin >> wroking_hours; }
    void set_rate(float r) { rate = r; }
    void set_rate() { cin >> rate; }
    void display()
    {
        salary = rate * wroking_hours;
        cout << "\n------------------------------------------------";
        cout << "\nEmployee id        : " << get_emp_code();
        cout << "\nEmployee name      : " << get_name();
        cout << "\nstatus             : Parttime";
        cout << "\nworking hours      : " << wroking_hours;
        cout << "\nrate               : " << rate;
        cout << "\nEmployee's salary  : " << salary;
    }
};
int main()
{
    int option = 0, emp_type, memory_fultime = 0, memory_parttime = 0;
    Fulltime fulltime_emp[10];
    Parttime parttime_emp[10];

    while (option != 4)
    {
        cout << "\n\n1. Enter record\n2. Display record\n3. search record\n4. Quit\n\n";
        cin >> option;
        switch (option)
        {
        case 1:
            do
            {
                cout << "\n\t1. Fulltime\n\t2. Part time\n\tSelect employee type : ";
                cin >> emp_type;
                if (emp_type > 2 || emp_type < 0)
                {
                    cout << "\ninvalid type";
                    continue;
                }
                else
                    break;
            } while (1);
            switch (emp_type)
            {
            case 1:
                cout << "\nEnter Employee name : ";
                fulltime_emp[memory_fultime].set_name();
                cout << "\nEnter Employee id : ";
                fulltime_emp[memory_fultime].set_emp_code();

                cout << "\nEnter daily rate : ";
                fulltime_emp[memory_fultime].set_daily_rate();

                cout << "\nEnter number of days : ";
                fulltime_emp[memory_fultime].set_no_of_days();
                memory_fultime++;
                break;
            case 2:
                cout << "\nEnter Employee name : ";
                parttime_emp[memory_parttime].set_name();
                cout << "\nEnter Employee id : ";
                parttime_emp[memory_parttime].set_emp_code();

                cout << "\nEnter working houre : ";
                parttime_emp[memory_parttime].set_working_hours();

                cout << "\nEnter rate : ";
                parttime_emp[memory_parttime].set_rate();
                memory_parttime++;
                break;
            }
            break;
        case 2:
            for (int i = 0; i < memory_fultime; i++)
            {
                fulltime_emp[i].display();
            }
            for (int i = 0; i < memory_parttime; i++)
            {
                parttime_emp[i].display();
            }
            break;
        case 3:
            cout << "\nEnter Employee id : ";
            cin >> emp_type;
            for(int i = 0;i < memory_fultime;i++)
            {
                if (emp_type == fulltime_emp[i].get_emp_code())
                {
                    fulltime_emp[i].display();
                }
            }
            for(int i = 0;i < memory_parttime;i++)
            {
                if (emp_type == parttime_emp[i].get_emp_code())
                {
                    parttime_emp[i].display();
                }
            }
        default:
            break;
        }
    }
}

// void set_details()
// {
//     int emp_no;
//     char name[30], status[4];
//     float salary;

//     do
//     {
//         cout << "\nselect employee type :\n\t1. Fulltime\n\t2. Parttime\n\t\t\t";
//         cin >> emp_no;
//         if(emp_no>2)
//             cout<<"\nplease select valid type;";
//     } while (emp_no > 2 || emp_no < 0);

//     cout << "\nEnter employee number  : ";
//     cin >> emp_no;

//     cout << "\nEnter employee name    : ";
//     fgets(name, 30, stdin);
//     name[strlen(name) - 1] = '\0';

//     cout << "\nEnter salary           : ";
//     cin >> salary;
// }