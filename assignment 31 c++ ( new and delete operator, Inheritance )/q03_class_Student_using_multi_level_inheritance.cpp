// 3.Write a C++ program to calculate the percentage of a student using multi-levelinheritance.
// Accept the marks of three subjects in base class.
// A class will be derived from the above mentioned class which includes a function to find the total marks obtained
// and another class derived from this class which calculates and displays the percentage of students.
#include <iostream>
using namespace std;
class subjects_marks
{
private:
    float sub1, sub2, sub3;

public:
    void sub_marks(float sub1, float sub2, float sub3)
    {
        this->sub1 = sub1;
        this->sub2 = sub2;
        this->sub3 = sub3;
    }
    void sub1_marks(float sub) { sub1 = sub; }
    void sub2_marks(float sub) { sub2 = sub; }
    void sub3_marks(float sub) { sub3 = sub; }
    float sub1_marks() { return sub1; }
    float sub2_marks() { return sub2; }
    float sub3_marks() { return sub3; }
};
class Total : public subjects_marks
{
private:
    float total;

public:
    float Total_marks()
    {
        total = sub1_marks() + sub2_marks() + sub3_marks();
        return total;
    }
};
class student : public Total
{
private:
    float percentage;

public:
    void display()
    {
        cout << "\nStudent details\n\tsubject 1 = " << this->sub1_marks();
        cout << "\n\tsubject 2 = " << this->sub2_marks();
        cout << "\n\tsubject 3 = " << this->sub3_marks();
        cout << "\n\ttotal = " << Total_marks();
        percentage = Total_marks()/3.0;
        cout << "\n\tpercentage = " << percentage<<"%";

    }
    void sub_marks(float sub1, float sub2, float sub3)
    {
        sub1_marks(sub1);
        sub2_marks(sub2);
        sub3_marks(sub3);
    }
};
int main()
{
    student devendra,ayush,sourabh;
    devendra.sub1_marks(80);
    devendra.sub2_marks(90);
    devendra.sub3_marks(70);

    devendra.display();

    ayush.sub_marks(80,85,90);

    ayush.display();
    
    return 0;
}