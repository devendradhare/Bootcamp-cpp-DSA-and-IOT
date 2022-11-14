// 9. Write a C++ program to implement the following class hierarchy :
//     Student                                  : id, name
//     StudentExam (derived from Student)       : Marks of 6 subjects
//     StudentResult (derived from StudentExam) : percentage
// Define appropriate functions to accept and display details.
// Create 'n' objects of the StudentResult class and display the marklist.
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
private:
    double id;
    char name[30];

public:
    void set_id() { cin >> id; }
    void set_name()
    {
        fflush(stdin);
        fgets(name, 30, stdin);
        name[strlen(name) - 1] = '\0';
    }

    double get_id() { return id; }
    char *get_name() { return name; }
};
class StudentExam : public Student
{
private:
    float sub1, sub2, sub3, sub4, sub5, sub6;

public:
    StudentExam() { sub1 = sub2 = sub3 = sub4 = sub5 = sub6 = 0; }
    void set_marks()
    {
        cout << "Enter marks of subject 1 : ";
        cin >> sub1;
        cout << "Enter marks of subject 2 : ";
        cin >> sub2;
        cout << "Enter marks of subject 3 : ";
        cin >> sub3;
        cout << "Enter marks of subject 4 : ";
        cin >> sub4;
        cout << "Enter marks of subject 5 : ";
        cin >> sub5;
        cout << "Enter marks of subject 6 : ";
        cin >> sub6;
    }
    float get_sub1_marks() { return sub1; }
    float get_sub2_marks() { return sub2; }
    float get_sub3_marks() { return sub3; }
    float get_sub4_marks() { return sub4; }
    float get_sub5_marks() { return sub5; }
    float get_sub6_marks() { return sub6; }
    float get_total() { return sub1 + sub2 + sub3 + sub4 + sub5 + sub6; }
};
class StudentResult : public StudentExam
{
private:
public:
    float get_percentage() { return get_total() / 6; }

    void display_marksheet()
    {
        cout << "\nStudent id       : " << get_id();
        cout << "\nStudent name     : " << get_name();
        cout << "\nmarks of ";
        cout << "\nsub1 = " << get_sub1_marks() << "\tsub2 = " << get_sub2_marks() << "\tsub3 = " << get_sub3_marks();
        cout << "\nsub4 = " << get_sub4_marks() << "\tsub5 = " << get_sub5_marks() << "\tsub6 = " << get_sub6_marks();
        cout << "\ntotal            : " << get_total();
        cout << "\npercentage       : " << get_percentage();
        cout << "\n----------------------------------------------------------------------";
    }
};

int main()
{
    StudentResult class_10th[30];
    int option = 0, memory = 0, id;
    cout << "\n\tGOVERNMENT HIGHER SECONDARY SCHOOL PALAMAU\n";
    do
    {
        cout << "\nselect option -\n\t1. Enter student deteils\n\t2. display student\n\t3. search student\n\t4. exit\n\t\t: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "\nEnter student id     : ";
            class_10th[memory].set_id();
            cout << "\nEnter Student name   : ";
            class_10th[memory].set_name();
            class_10th[memory].set_marks();
            memory++;
            break;
        case 2:
            for (int i = 0; i < memory; i++)
            {
                class_10th[i].display_marksheet();
            }
            break;
        case 3:
            cout << "\nEnter Student id : ";
            cin >> id;
            for (int i = 0; i < memory; i++)
                if (id == class_10th[i].get_id())
                    class_10th[i].display_marksheet();
            break;
        case 4:
            break;
        default:
            cout << "\nInvalid input";
            break;
        }
    } while (option != 4);
}