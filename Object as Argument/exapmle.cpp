// Define a class named Complex with data members real and img. Use appropriate member function of the class which accepts two objects of the class and add them.
#include <iostream>
using namespace std;

class Complex
{
    int real,img;

    public:
        int input();
        int display();
        int add(Complex c1,Complex c2);
};

int Complex::input()
{
   cout<<"Enter the real number:";
   cin>>real;
   cout<<"Enter the imaginary number:";
   cin>>img;
}

int Complex::display()
{
    cout<<real<<" + "<<img<<"i."<<endl;
}

int Complex::add(Complex c1,Complex c2)
{
    real=c1.real+c2.real;
    img=c1.img+c2.img;

}

int main()
{
    Complex first,second,result;

    cout<<"Enter the first complex number:"<<endl;
    first.input();
    cout<<"Enter the second complex number:"<<endl;
    second.input();
    cout<<"Sum:";
    result.add(first,second);
    result.display();
    return 0;
}