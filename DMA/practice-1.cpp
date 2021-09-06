#include <iostream>
using namespace std;

class Student
{
    char name[50];
    int roll;

    public:
        int input()
        {
            cout<<"Enter name of student:";
            cin>>name;
            cout<<"Enter roll of student:";
            cin>>roll;

            return 0;
        }

        int display()
        {
        cout<<"Name: "<<name<<endl<<"Roll: "<<roll<<endl;
        }
};

int main()
{
    Student *ptr1=new Student;

    cout<<"Enter the info:"<<endl;
    ptr1->input();

    cout<<"Info of student:"<<endl;
    ptr1->display();

    delete ptr1;

    return 0;
}