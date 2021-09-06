// Constructor cannot be virtual because when constructor of a class is executed, virtual pointer is not defined yet.

// working of a virtual function
#include <iostream>
using namespace std;

class Base
{
    int x; //virtual pointer

public:
    // virtual member function
    virtual int display()
    {
        cout << "This is Base!" << endl;
        return 0;
    }

    int test()
    {
        cout << "This is test function!" << endl;
        return 0;
    }
};

class Derived : public Base
{
public:
    int y;

    int display()
    {
        cout << "This is derived function!" << endl;
        return 0;
    }
};

int main()
{
    Base *bptr=new Base();
    Base bobj;

    cout << "Calling from base class pointer!" << endl;
    bptr->display();

    Derived dobj;
    bptr = &dobj;
    cout << "Calling form derived class pointer!" << endl;

    bptr->display();

    return 0;
}