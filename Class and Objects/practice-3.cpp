// Create a class Point that represents a three dimensional coordinate system.Each object of Point should have coordinates x,y,z and methods to assign coordinates to the objects. Add a method to calculate the distance from origin and to the point (x,y,z). Define member functions outside the class body//

#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    int x,y,z;

    public:
        int input();
        int distance();

};

int Point :: input()
{
    cout<<"Enter the x,y and z coordinates:"<<endl;
    cin>>x>>y>>z;
}

int Point ::distance()
{
    cout<<"Distance from origin is: "<<sqrt(pow(x,2)+pow(y,2)+pow(z,2));
}

int main()
{
    Point obj;

    obj.input();
    obj.distance();

    return 0;
}