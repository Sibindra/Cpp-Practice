#include <iostream>
using namespace std;

class Base
{
public:
    // virtual member function
    virtual int display()
    {
        cout << "This is Base" << endl;
        return 0;
    }
};

class Derived : public Base
{
public:
    int display()
    {
        cout << "This is derived class" << endl;
        return 0;
    }
};

int main()
{
    // Base class pointer
    Base *bptr;

    // Base class object
    Base bobj;

    // assigning
    bptr = &bobj;

    cout << "Calling from base class pointer!" << endl;

    bptr->display();

    // derived class object
    Derived dobj;

    // assigning the pointer
    bptr = &dobj;

    cout << "Calling from base class pointer!" << endl;

    bptr->display();

    return 0;
}