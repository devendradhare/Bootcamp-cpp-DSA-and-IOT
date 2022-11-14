// 8 - In a bank, different customers have savings account. Some customers may have taken a loan from the bank.
// So bank always maintain information about bank depositors and borrowers.
// Design a
//     1.  Base class Customer (name, phone-number).
//     2.  Derive a class Depositor(accno,  balance) from Customer.
//     3.  Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
//     Write necessary member functions to read and display the details of ‘n’customers.
#include <iostream>
#include <string.h>
using namespace std;

class Customer
{
private:
    char name[30];
    long long phone;

public:
    void set_name(char n[]) { strcpy(name, n); }
    void set_name()
    {
        fflush(stdin);
        fgets(name, 30, stdin);
        name[strlen(name) - 1] = '\0';
    }
    void set_phone(long long p) { phone = p; }
    void set_phone() { cin >> phone; }

    char *get_name() { return name; }
    long long get_phone() { return phone; }
};

class Depositor : public Customer
{
private:
    long long accno, balance;

public:
    void set_accno(long long ac) { accno = ac; }
    void set_accno() { cin >> accno; }
    void set_balance(long long b) { balance = b; }
    void set_balance() { cin >> balance; }

    long long get_accno() { return accno; }
    long long get_balance() { return balance; }
};

class Borrower : public Depositor
{
private:
    long long lone_number, lone_amt;

public:
    void set_lone_number(long long l) { lone_number = l; }
    void set_lone_number() { cin >> lone_number; }
    void set_lone_amount(long long amt) { lone_amt = amt; }
    void set_lone_amount() { cin >> lone_amt; }

    long long get_lone_number() { return lone_number; }
    long long get_lone_amount() { return lone_amt; }
};

int main()
{
    Depositor D[20];
    Borrower B[20];
    int c, choice, memory_Depositor = 0, memory_Borrower = 0, option;
    cout << "\n\n\twelocome to devendra dhare bank\n";
    do 
    {
        cout << "\noptions - \n\t1. Enter customer deteils\n\t2. display customer deteils\n\t3. exit\n\t\t: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "\nEnter number of customer you want to enter : ";
            cin >> c;
            for (int k = 0; k < c; k++)
            {
                cout << "\nEnter deteils of\n\t1. Depositor\n\t2. Borrower\n\tselect your choice : ";

                do
                {
                    cin >> choice;
                    if (choice > 2 && choice < 0)
                        cout << "\nInvalid choice";
                    else
                        break;
                } while (1);

                switch (choice)
                {
                case 1:
                    cout << "Enter customer name    : ";
                    D[memory_Depositor].set_name();
                    cout << "Enter customer phone   : ";
                    D[memory_Depositor].set_phone();
                    cout << "Enter account number   : ";
                    D[memory_Depositor].set_accno();
                    cout << "Enter balance          : ";
                    D[memory_Depositor].set_balance();
                    memory_Depositor++;
                    break;
                case 2:
                    cout << "Enter customer name    : ";
                    B[memory_Borrower].set_name();
                    cout << "Enter customer phone   : ";
                    B[memory_Borrower].set_phone();
                    cout << "Enter account number   : ";
                    B[memory_Borrower].set_accno();
                    cout << "Enter balance          : ";
                    B[memory_Borrower].set_balance();
                    cout << "Enter lone number      : ";
                    B[memory_Borrower].set_lone_number();
                    cout << "Enter lone amount      : ";
                    B[memory_Borrower].set_lone_amount();
                    memory_Borrower++;
                    break;
                }
            }
            break;
        case 2:
            for (int i = 0; i < memory_Depositor; i++)
            {
                cout << "\n----------------------------------------------------";
                cout << "\nCustomer name      : " << D[i].get_name();
                cout << "\ncustomer phone     : " << D[i].get_phone();
                cout << "\naccount number     : " << D[i].get_accno();
                cout << "\nEnter balance      : " << D[i].get_balance();
            }
            for (int i = 0; i < memory_Borrower; i++)
            {
                cout << "\n----------------------------------------------------";
                cout << "\nCustomer name      : " << B[i].get_name();
                cout << "\ncustomer phone     : " << B[i].get_phone();
                cout << "\naccount number     : " << B[i].get_accno();
                cout << "\nEnter balance      : " << B[i].get_balance();
                cout << "\nEnter lone number  : " << B[i].get_lone_number();
                cout << "\nEnter lone amount  : " << B[i].get_lone_amount();
            }
            cout << "\n----------------------------------------------------";
            break;
        default:
            // cout << "\n<default>\n";
            break;
        }
    }while (option != 3);
}