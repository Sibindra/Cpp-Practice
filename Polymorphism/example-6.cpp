// overloading unary operator using friend funcion
#include <iostream>
using namespace std;

class Complex
{
    int real,img;

    public:
        Complex(int r,int i)
        {
            real=r;
            img=i;
        }

        void display()
        {
            cout<<"Real part: "<<real<<endl<<"Imaginary part: "<<img<<endl;
        }

        friend void operator-(Complex c);
};

void operator-(Complex c)
{
    c.real--;
    c.img++;
}

int main()
{
    Complex obj(10,20);
    obj.display();

    -obj;

    cout<<"Complex number after negation is:";
    obj.display();

    return 0;
}