//Enter two numbers and display them using friend class outside
#include <iostream>
using namespace std;

class two;
class one
{
    int a,b;

    public:
        int input();

    friend class two;
};

class two
{
    public:
        int display(one o);
};

int one::input()
{
    cout<<"Enter any two numbers:"<<endl;
    cin>>a>>b;
}

int two::display(one o)
{
    cout<<endl<<o.a<<endl<<o.b;
}

int main()
{
    one obj1;
    two obj2;

   obj1.input();
   obj2.display(obj1);

   return 0; 
}