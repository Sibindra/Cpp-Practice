// input of name and assign random account number
// deposit/withdraw
// display info

#include <iostream>
#include <stdlib.h>
using namespace std;

int i;

class Bank
{
    char name[50];
    long double account_no, balance;

public:
    Bank()
    {
        cout << "Enter your name:";
        cin >> name;

        cout << "Decide your account number:";
        cin >> account_no;

        cout << "Enter the balance you want to start with:";
        cin >> balance;

        system("clear");
    }

    int display();
    int action();
};

int Bank::display()
{
    cout << "Your account information is as follows:" << endl;
    cout << "Name: " << name << endl<< "Account number: " << account_no<<endl;

    system("clear");

    return 0;
}

int Bank::action()
{
    long double withdraw, deposit;

    int c;

    cout << endl<< "1.Withdraw" << endl<< "2.Deposit" << endl<<"3.Exit"<<endl;
    cout << "Enter your choice: ";
    cin >> c;

    system("clear");

    switch (c)
    {
    case 1:
        cout << "Enter the amount you want to withdraw:";
        cin >> withdraw;

        balance = balance - withdraw;

        cout << endl<<"You have withdrawed Rs." << withdraw;
        cout<<endl<<"New Balance: "<<balance;

        break;

    case 2:
        cout << "Enter the amount you want to deposit:";
        cin >> deposit;

        balance = balance + deposit;

        cout << "You have deposited Rs." << deposit;
        cout<<endl<<"New Balance: "<<balance;

        break;

    default:
        cout << endl<< "Enter a valid choice:" << endl;

        break;
        exit(0);
    }

    return 0;
}

int main()
{
    Bank obj;

    int choice;

    cout<< endl<<"1.Withdraw/Deposit" << endl<< "2.Display Information" << endl<<"3.Exit"<<endl;

    cout<<endl<< "Enter you choice:";
    cin >> choice;

    system("clear");

    switch (choice)
    {
    case 1:
        obj.action();
        break;

    case 2:
        obj.display();
        break;

    default:
        cout << "Invalid choice";
        break;
        exit(0);
    }

    return 0;
}