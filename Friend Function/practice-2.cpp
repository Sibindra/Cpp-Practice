// Write a program to swap the private data of two classes using friend function.

#include <iostream>
using namespace std;

class second;
class first
{
    int a;

    public:
        int input()
        {
            a=2;
        }

        int display()
        {
            cout<<"a= "<<a<<endl;
        }

    friend int swap(first f,second s);
};

class second
{
    int b;

    public:
        int input()
        {
            b=500;
        }

        int display()
        {
            cout<<"b= "<<b<<endl;
        }

    friend int swap(first f,second s);
};

int swap(first f,second s)
{
    int temp=0;

    temp=f.a;   //temp=2
    f.a=s.b;    //a=500
    s.b=temp;   //b=2

    cout<<"a= "<<f.a<<endl<<"b= "<<s.b<<endl;
}

int main()
{
    first obj1;
    second obj2;

    obj1.input();
    obj2.input();
    cout<<endl;
    obj1.display();
    obj2.display();

    swap(obj1,obj2);
}