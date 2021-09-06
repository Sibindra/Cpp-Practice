// A virtual function is a member function which is declared within a base class and overridden by derived class.
#include <iostream>
using namespace  std;

class Base
{
    public:
        int display()
        {
            cout<<"This is the base class"<<endl;
            return 0;
        }
};

class Derived:public Base
{
    public:
        int display()
        {
            cout<<"This is the derived class"<<endl;
            return 0;
        }
};

int main()
{
    // pointer
    Base *bptr;
    // object
    Base bobj;

    // assigning the pointer to the object
    bptr=&bobj;

    bptr->display();

    // obj for derived class
    Derived dobj;
    // assigning the derived class object to base class pointer
    bptr=&dobj; //this is the Base class display.

    cout<<"Calling from Base class pointer to derived class pointer!"<<endl;
    bptr->display();  //this is the Derived class display.

    return 0;
}