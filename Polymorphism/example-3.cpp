#include <iostream>
using namespace std;

class Complex
{
    int real,img;

    public:

        // default constructor
        Complex(){}

        Complex(int real,int img)
        {
            this->real=real;
            this->img=img;
        }

        void display()
        {
            cout<<"Real part: "<<this->real<<endl<<"Imaginary part: "<<this->img<<endl;
        }
};

int main()
{
    Complex obj;

    obj.display();
    return 0;
}