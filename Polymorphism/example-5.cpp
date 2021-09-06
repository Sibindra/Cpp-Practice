// overloading unary - operator
#include <iostream>
using namespace std;

class Complex
{
    int real,img;

    public:
        Complex(int r,int i)
        {
            this->real=r;
            this->img=i;
        }

        void operator-()
        {
            real--;
            img--;
        }

        void display()
        {
            cout<<"Real part: "<<real<<endl<<"Imaginary part: "<<img<<endl;
        }
};

int main()
{
    Complex obj(10,20);
    obj.display();

    -obj;

    cout<<"Complex number after negation is:";
    obj.display();

    return 0;
}