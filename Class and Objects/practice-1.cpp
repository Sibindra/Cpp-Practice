// Design a class called Person that contains appropriate members for storing name, age, gender, telephone number. Write member functions that can read and display these data. Input details of 3 Person and display their details.

#include <iostream>
using namespace std;

class Person
{
    private:
        char name[50],gender[20];
        int age;
        long int tel;

    public:
        void input();
        void display();
};

void Person :: input()
{
    cout<<"Enter the name:";
    cin>>name;

    cout<<"Enter the gender:";
    cin>>gender;

    cout<<"Enter the age:";
    cin>>age;

    cout<<"Enter the telephone number:";
    cin>>tel;
}

void Person :: display()
{
    cout<<"Name: "<<name<<"\nGender: "<<gender<<"\nAge: "<<age<<"\nTelephone no: "<<tel;
}


int main()
{
    Person obj1,obj2,obj3;

    obj1.input();
    cout<<endl;
    obj2.input();
    cout<<endl;
    obj3.input();
    cout<<endl;

    obj1.display();
    cout<<endl;
    obj2.display();
    cout<<endl;
    obj3.display();
    cout<<endl;

    return 0;
}