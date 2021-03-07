#include <iostream>
using namespace std;

class person
{
    // default value is private
    char name[50];
    int age;

    public:
        void input();
        void display();
};

void person :: input()
{
    cout<<"Enter the Name:";
    cin>>name;

    cout<<"\nEnter the age:";
    cin>>age;
}

void person :: display()
{
    cout<<"Name: "<<name<<endl<<"Age: "<<age;
}


int main()
{
    person obj;

    obj.input();

    obj.display();

    return 0;
}