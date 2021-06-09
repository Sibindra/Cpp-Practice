// Parameterzed constructor
#include <iostream>
using namespace std;

class Construct
{
    int x,y;

    public:
        Construct()
        {
            x=0;
            y=0;
        }

        Construct(int a,int b)
        {
            x=a;
            y=b;
        }

        int display()
        {
            cout<<"value of x= "<<x<<endl<<"value of y= "<<y<<endl;
            return 0;
        }
};

int main()
{
    Construct obj1(100,200),obj2(20,30);

    obj1.display();
    cout<<endl;
    obj2.display();

    return 0;
}