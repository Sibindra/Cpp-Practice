// Constructor with default arguments
#include <iostream>
using namespace std;

class Construct
{
    int a,b,c;

    public:
        Construct();
        Construct(int x,int y=20,int z=30);
        int display();
};

Construct::Construct()
{
    a=0;
    b=0;
    c=0;
}

Construct::Construct(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}

int Construct::display()
{
   cout<<"value of a= "<<a<<endl<<"value of b= "<<b<<endl<<"value of c= "<<c<<endl;
}

int main()
{
    Construct obj1(1,2,3);
    Construct obj2(120,89);
    obj1.display();
    obj2.display();

    return 0;
}