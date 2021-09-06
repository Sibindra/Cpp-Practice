// Compile-time polymorphism----->Function Overloading
// Runtime polymorphism-------> virtual function

// Write a program to calculate volume of rectangular box, sphere and cylinder. Use calculateVolume() function to calculate the result. Use concept of function overloading.
#include <iostream>
using namespace std;

// for Rectangular box
class Rectangle
{
    int length=10,breadth=20,height=5;

    public:
        void calculateVolume()
        {
            cout<<"Volume of Rectangular box= "<<(length*breadth*height)<<endl;
        }
};

class Sphere
{
    int radius=10;
    float pi=(22/7.0);

    public:
        void calculateVolume()
        {
            cout<<"Volume of sphere= "<<((4/3)*pi*radius*radius*radius)<<endl;
        }
};

class Cylinder
{
    int radius=15,height=10;
    float pi=(22/7.0);

    public:
        void calculateVolume()
        {
            cout<<"Volume of cylinder= "<<(pi*radius*radius*height)<<endl;
        }
};

int main()
{
    Rectangle r;
    Sphere s;
    Cylinder c;

    r.calculateVolume();
    cout<<endl;
    s.calculateVolume();
    cout<<endl;
    c.calculateVolume();

    return 0;
}