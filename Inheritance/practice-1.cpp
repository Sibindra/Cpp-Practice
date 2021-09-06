// single inheritance
#include <iostream>
using namespace std;

class Person
{
    protected:
        char name[50];
        char address[50];
        long double phoneNumber;
    
    public:
        int input();
        int display();
};

int Person::input()
{
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the address:";
    cin>>address;
    cout<<"Enter the Phone number:";
    cin>>phoneNumber;

    return 0;
}

int Person::display()
{
    cout<<"Name: "<<name<<endl<<"Address: "<<address<<endl<<"Phone Number: "<<phoneNumber<<endl;

    return 0;
}

// Derived Class
class Student:public Person
{
    int roll;
    int regNo;
    public:
        int getStudent();
        int displayStudent();
};

int Student::getStudent()
{
    cout<<"Enter the roll number:";
    cin>>roll;

    cout<<"Enter the Regestration Number:";
    cin>>regNo;

    return 0;
}

int Student::displayStudent()
{
    cout<<"Roll no: "<<roll<<endl<<"Reg No: "<<regNo<<endl;

    return 0;
}

int main()
{
    Person p;
    Student s;

    s.input();
    s.display();

    cout<<endl;

    s.getStudent();
    s.display();
    s.displayStudent();

    return 0;
}
