#include <iostream>
using namespace std;

class Base
{
public:
    int display()
    {
        cout << "This is Base!" << endl;
        return 0;
    }
};

class Derived : public Base
{
public:
    int display()
    {
        cout << "This is Derived class!";
        return 0;
    }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout << "Calling Base class object!" << endl;
    bobj.display();

    cout << "Calling Derived class object!" << endl;
    // calling through derived class obj
    dobj.Base::display();

    dobj.display();

    return 0;
}