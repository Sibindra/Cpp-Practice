//  Define a class Person with attributes and behaviors that are common to Student and Teacher, Person class doesn’t have any implementation of the functions, so make it abstract class. Derive class Student and Teacher from class Person and provide the implementation of the inherited functions in each derived class.
#include <iostream>
#include <string.h>
using namespace std;

class Person
{
protected:
    char name[20], address[20];
    int id;

public:
    virtual int input() = 0;
};

class Student : public Person
{
public:
    int input()
    {
        strcpy(name, "Student_name");
        strcpy(address, "Student_address");
        id = 1;

        cout << "Name: " << name << endl
             << "Address: " << address << endl
             << "ID: " << id << endl;

        return 0;
    }
};

class Teacher : public Person
{
public:
    int input()
    {
        strcpy(name, "Teacher_name");
        strcpy(address, "Teacher_address");
        id = 100;

        cout << "Name: " << name << endl
             << "Address: " << address << endl
             << "ID: " << id << endl;

        return 0;
    }
};

int main()
{
    Person *ptr;
    Student s;
    Teacher t;

    // for Student class
    ptr = &s;

    cout << "Students Info: " << endl;
    ptr->input();

    cout <<endl;

    // for teacher class
    ptr = &t;

    cout << "Teachers Info: " << endl;
    ptr->input();

    return 0;
}