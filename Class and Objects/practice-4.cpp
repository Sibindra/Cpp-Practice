// Write a program to define a class named Employee with its data members name, salary, id number. Read records of n number of employees and display the records.

#include <iostream>
using namespace std;

class Employee
{
    private:
        char name[50];
        int salary;
        int id;

    public:
        int input();
        int display();
};

int Employee :: input()
{
    cout<<"Enter the name:";
    cin>>name;

    cout<<"Enter the salary:";
    cin>>salary;

    cout<<"Enter the id:";
    cin>>id;
}

int Employee :: display()
{
    cout<<"Name: "<<name<<endl<<"Salary: "<<salary<<endl<<"Id: "<<id<<endl;
}

int main()
{
    int n,i;

    cout<<"Enter the number of entries:";
    cin>>n;

    for (i=0;i<n;i++)
    {
        
    }
}