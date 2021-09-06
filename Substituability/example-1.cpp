// Example program of principle of substituability
#include <iostream>
using namespace std;

class A
{
    public:
        void displayMessege()
        {
            cout<<"I am A"<<endl;
        }
};

class B:public A
{
    public:
        void displayMessege()
        {
            cout<<"I am B"<<endl;
        }
};

// parameterized function with object a of class A
void testingA(A a)
{
    a.displayMessege();
}

void testingFunction()
{
    // object b from class B
    B b;

    cout<<"Passing B"<<endl;

    // passing object b in testing function
    testingA(b);
}

int main()
{
    testingFunction();
    return 0;
}