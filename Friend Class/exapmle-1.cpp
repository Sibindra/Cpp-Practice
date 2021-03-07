//Enter two numbers and display it by using friend class inside 

#include <iostream>
using namespace std;

class two;
class one
{
    int a,b;

    public:
        int input()
        {
            cout<<"Enter any two numbers:"<<endl;
            cin>>a>>b;
        }

    friend class two;
};

class two
{
    public:
        int display(one o)
        {
            cout<<"The numbers you entered are: "<<o.a<<" and "<<o.b;
        }
};

int main()
{
    one obj1;
    two obj2;

    obj1.input();
    obj2.display(obj1);

    return 0;
}