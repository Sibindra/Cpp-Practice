// unary operator overloading
#include <iostream>
using namespace std;

class Distance
{
    int feet,inches;

    public:
        Distance(int f,int i)
        {
            this->feet=f;
            this->inches=i;
        }

        void operator-()
        {
            feet--;
            inches--;

            cout<<"Decreased feets and inches: "<<endl<<feet<<endl<<inches<<endl;
        }
};

int main()
{
    Distance d(10,20);

    // decreament operator
    -d;

    return 0;
}