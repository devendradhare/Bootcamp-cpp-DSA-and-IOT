// 4.Write a C++ program to design a base class Person (name, address,phone_no).
// Derive a class Employee (eno, ename) from Person.
// Derive a class Manager (designation, department name, basic-salary) from Employee.
// Write a menu driven program to :
//     a. Accept all details of 'n' managers.
//     b. Display manager having highest salary
#include <iostream>
#include <string.h>
using namespace std;

class Person
{
public:
    char name[30], address[50], phone_no[10];
};
class Employee : public Person
{
private:
    int eno;

public:
    int set_emp_no(int employee_no) { eno = employee_no; }
};
class Manager : public Employee
{
private:
    char dsn[30], dpt_name[30];
    float salary;

public:
    void set_eno(int employee_no) { set_emp_no(employee_no); }
    void set_name(char *name) { strcpy(this->name, name); }
    void set_address(char *address) { strcpy(this->address, address); }
    void set_phone_no(char *phone_no) { strcpy(this->phone_no, phone_no); }
    void set_designation(char *designation) { strcpy(this->dsn, designation); }
    void set_dpt_name(char *department) { strcpy(dpt_name, department); }
    void set_salary(float salary) { this->salary = salary; }

    float get_salary() { return salary; }
};

int main()
{
    int N, max_salary_emp = 0;
    cout << "\n\nhow many maneger do you want to enter? : ";
    cin >> N;
    Manager m[N];
    char temp[50];
    int t;
    for (int i = 0; i < N; i++)
    {
        cout << "\n\nEnter details of maneger";
        cout << "\n---------------------------";

        cout << "\nEnter Employee no. : ";
        cin >> t;
        m[i].set_eno(t);

        cout << "\nEnter name : ";
        fflush(stdin);
        fgets(temp, 30, stdin);
        temp[strlen(temp)] = '\0';
        m[i].set_name(temp);

        cout << "\nEnter address : ";
        fflush(stdin);
        fgets(temp, 50, stdin);
        temp[strlen(temp)] = '\0';
        m[i].set_address(temp);

        cout << "\nEnter phone no. : ";
        fflush(stdin);
        fgets(temp, 50, stdin);
        temp[strlen(temp)] = '\0';
        m[i].set_phone_no(temp);

        cout << "\nEnter designation : ";
        fflush(stdin);
        fgets(temp, 50, stdin);
        temp[strlen(temp)] = '\0';
        m[i].set_designation(temp);

        cout << "\nEnter department name : ";
        fflush(stdin);
        fgets(temp, 50, stdin);
        temp[strlen(temp)] = '\0';
        m[i].set_dpt_name(temp);

        cout << "\nsalary : ";
        cin >> t;
        m[i].set_salary(t);
        fflush(stdin);
    }
    for (int i = 0; i < N; i++)
    {
        if (m[i].get_salary() > m[max_salary_emp].get_salary())
            max_salary_emp = i;
    }
    cout << "\n\nManager with highest salary is : " << m[max_salary_emp].get_salary() << "\n\n";
    return 0;
}
