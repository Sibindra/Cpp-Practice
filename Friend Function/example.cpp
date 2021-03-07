// Write a program to define a class Number that has two integer numbers as data members. Use friend function to find which one is greater among the two data members.

#include <iostream>
using namespace std;

class number
{
    private:
        int num1,num2;
    public:
        int input();
        int display();

    friend  int maximum(number n);
};

int number :: input()
{
    cout<<"Enter any two numbers:"<<endl;
    cin>>num1>>num2;
}

int number :: display()
{
    cout<<"The numbers you entered are "<<num1<<" and "<<num2;
}

int maximum(number n)
{
    if(n.num1>n.num2)
    {
        cout<<endl<<n.num1<<" is greater than "<<n.num2<<endl;
    }

    else{
        cout<<endl<<n.num2<<" is greater than "<<n.num1<<endl;
    }
}

int main()
{
    number obj;

    obj.input();
    obj.display();
    maximum(obj);
}