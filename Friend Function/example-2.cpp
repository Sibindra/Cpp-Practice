// adding complex numbers by using frined function

#include <iostream>
using namespace std;

class Complex
{
    int a,b;

    public:
        int input();
        int display();

  friend Complex calc(Complex o1,Complex o2);
};

int Complex::input()
{
    cout<<"Enter the complex number a+bi:"<<endl;
    cin>>a>>b;
}

int Complex::display()
{
    cout<<a<<" + "<<b<<"i."<<endl;
}

Complex calc(Complex o1,Complex o2)
{
    Complex o3;

    o3.a=(o1.a+o2.a);
    o3.b=(o1.b+o2.b);

    return o3;
}

int main()
{
    Complex c1,c2,c3;

    c1.input();
    c2.input();
    cout<<endl;
    c1.display();
    c2.display();

    c3=calc(c1,c2);

    cout<<endl<<"Sum = ";
    c3.display();

    return 0;

}