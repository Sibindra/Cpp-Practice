// Create a class called Rectangle with length breadth and area.Use appropriate member function to read length and breadth from the user and to calculate area of a reactangle.Create a derived class called Box form the class rectangle.Use appropriate member function to read height and calculate volume.
#include <iostream>
using namespace std;

class Rectangle
{
    protected:
        int length;
        int breadth;
        int area;
    public:
        int input();
        int calc();
};

int Rectangle::input()
{
    cout<<"Enter the length and breadth:"<<endl;
    cin>>length>>breadth;

    return 0;
}

int Rectangle::calc()
{
    area=length*breadth;
    cout<<"Area: "<<area<<endl;

    return 0;
}

class Box:public Rectangle
{
    int height;

    public:
        int getData();
        int vol();
};

int Box::getData()
{
    cout<<"Enter the height:";
    cin>>height;

    return 0;
}

int Box::vol()
{
    cout<<"Volume: "<<area*height<<endl;

    return 0;
}

int main()
{
    Box b;

    b.input();
    b.calc();
    cout<<endl;
    b.getData();
    b.vol();

    return 0;
}