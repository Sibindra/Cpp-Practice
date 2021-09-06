// Define a class Address that has attributes country, province number, municipality name and ward number. Define a class Student with attributes relative to student. Write a program to use aggregation to represent “Student has Address”.

#include <iostream>
using namespace std;

class Address
{
    char country[20],municipality_name[20];
    int province_no,ward_no;

    public:
        void input();
        void display();
};

void Address::input()
{
    cout<<"Enter your country:";
    cin>>country;
    cout<<"Enter the name of your municipality:";
    cin>>municipality_name;
    cout<<"Enter your province number:";
    cin>>province_no;
    cout<<"Enter your ward number:";
    cin>>ward_no;
}

void Address::display()
{
    cout<<"Country:"<<country<<endl<<"Municipality:"<<municipality_name<<endl<<"Province No:"<<province_no<<endl<<"Ward No:"<<ward_no<<endl;
}

class Student
{
    Address a;

    public:
        void input()
        {
            cout<<"Input for student class"<<endl;
            a.input();
        }

        void display()
        {
            cout<<"Display for student class"<<endl;
            a.display();
        }
};

int main()
{
    Student s;

    s.input();
    cout<<endl<<endl;
    s.display();

    return 0;
}