// Create classes called Class1 and Class2 with each having one private member. Add member function to set a value (say setValue) on each class. Add one more function max() that is friendly to both classes, max() function should compare two private member of two classes and show maximum among them. Create one-one object of each class and set a value on them. Display the maximum number among them
#include <iostream>
using namespace std;

class Class1
{
    int a;

    public:
        int setValue();
    
    friend int max();
};

class Class2
{
    int b;

    public:
        int setValue();

    friend int max();
};

int Class1::setValue()
{
    cout<<"Enter the first number:";
    cin>>a;
}

int Class2::setValue()
{
    cout<<"Enter the second number:";
    cin>>b;
}

int max()
{
    Class1 c1;
    Class2 c2;

    if(c1.a>c2.b)
    {
        cout<<"Greater number: "<<c1.a<<endl;
    }

    else
    {
        cout<<"Greater number: "<<c2.b<<endl;
    }
}

int main()
{
    Class1 obj1;
    Class2 obj2;

    obj1.setValue();
    obj2.setValue();
    cout<<endl;
    max();

    return 0;
}