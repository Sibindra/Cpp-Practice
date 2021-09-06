// multilevel inheritance
#include <iostream>
using namespace std;

class Base
{
    protected:
        int x;
    public:
        int input();
};

class Derived_one:public Base
{
    protected:
        int y;
    public:
        int input();
};

class Derived_two:public Derived_one
{
    int sum;

    public:
        int calc();
};

int Base::input()
{
    cout<<"Enter the value of x:";
    cin>>x;

    return 0;
}

int Derived_one::input()
{
    cout<<"Enter the value of y:";
    cin>>y;

    return 0;
}

int Derived_two::calc()
{
    sum=x+y;
    cout<<"X+Y= "<<sum<<endl;

    return 0;
}

int main()
{
    Derived_two obj;

    obj.Base::input();
    obj.Derived_one::input();
    obj.calc();

    return 0;
}