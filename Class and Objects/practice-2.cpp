// Write a program to represent a Circle that has member functions to perform following tasks.
// • Calculate area of circle
// • Calculate perimeter of the circle 

#include <iostream>
using namespace std;

class Circle
{
    float radius;

    public:

        void input()
        {
            cout<<"Enter the radius:";
            cin>>radius;
        }
        void area()
        {
            cout<<"Area: "<<((22/7)*radius*radius)<<endl;
        }

        void perimeter()
        {
            cout<<"Perimeter: "<<(2*(22/7)*radius)<<endl;
        }
};

int main()
{
    Circle c;

    c.input();
    c.area();
    c.perimeter();
}