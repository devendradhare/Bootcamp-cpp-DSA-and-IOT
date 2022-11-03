// 1.Define a class Person with instance members name and age. Also define member functions
//     setName(), setAge(), getName(), getAge().
// Now define class Employee byinheriting Person class. In the Employee class define empid and salary as instancemembers.
// Also define
//     setEmpid, setSalary, getEmpid, getSalary.
#include <iostream>
#include <string.h>
using namespace std;

class Person
{
private:
    char name[30];
    int age;

public:
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    void setAge(int age)
    {
        this->age = age;
    }
    char *getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};
class Employee : public Person
{
private:
    int empid, salary;

public:
    void setEmpid(int empid)
    {
        this->empid = empid;
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    int getEmpid()
    {
        return empid;
    }
    int getSalary()
    {
        return salary;
    }
    friend istream &operator>>(istream &scan, Employee &e);
    friend ostream &operator<<(ostream &print, Employee &e);
};
ostream &operator<<(ostream &print, Employee &e)
{
    print << "Name : " << e.getName() << "\nage  : " << e.getAge() << "\nid  : " << e.getEmpid() << "\nsalary : " << e.getSalary();
    return print;
}
istream &operator>>(istream &scan, Employee &e)
{
    char name[30];
    int n;
    cout << "\nEnter Employee name : ";
    fflush(stdin);
    fgets(name, 30, stdin);
    name[strlen(name) - 1] = '\0';
    e.setName(name);

    cout << "\nEnter Employee age : ";
    cin >> n;
    e.setAge(n);

    cout << "\nEnter Employee id : ";
    cin >> e.empid;

    cout << "\nenter Employee salary : ";
    cin >> e.salary;

    return scan;
}

int main()
{
    Employee e1, e2;
    cout << "\nEnter Employee e1 details : \n";
    cin >> e1;
    cout << "\ne1 = \n"
         << e1;
    return 0;
}
