// Program to use this pointer to display address of object
#include <iostream>
using namespace  std;

class Complex
{
    int real,img;

    public:
        void getAddress()
        {
            cout<<"The address of object using this pointer is: "<<this<<endl;
        }
};

int main()
{
    Complex c1,c2;

    cout<<"For object c1"<<endl;
    c1.getAddress();
    cout<<"Address of c1 directly is: "<<&c1<<endl;

    cout<<endl;

    cout<<"For object c2"<<endl;
    c2.getAddress();
    cout<<"Address of c2 directly is: "<<&c2<<endl;

    return 0;
}