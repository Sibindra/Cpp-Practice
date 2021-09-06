#include <iostream>
using namespace std;

class Base
{
public:
    int display()
    {
        cout << "This is base class!" << endl;
        return 0;
    }
};

// derived class
class Derived : public Base
{
public:
    int display()
    {
        cout << "This is Derived class!" << endl;
        return 0;
    }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout << "Calling Base class object" << endl;
    bobj.display();

    cout << "Calling Derived class object" << endl;
    dobj.display();

    return 0;
}