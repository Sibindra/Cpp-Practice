// Define a class Distance with data members kilometer and meter. Add 5 to the distance object by overloading binary plus operator.
#include <iostream>
using namespace std;

class Distance 
{
    int km,m;

    public:
        Distance(){}

        Distance(int kiloMeter,int Meter)
        {
            this->km=kiloMeter;
            this->m=Meter;
        }

        void display()
        {
            cout<<km<<" kilometers and "<<m<<" meters."<<endl;
        }

        Distance operator+(Distance d)
        {
            Distance temp;

            temp.km=km+d.km;
            temp.m=m+d.m;

            return temp;
        }
};


int main()
{
    Distance obj1(1,2);
    Distance obj2(7,3);
    Distance obj3(6,1);
    Distance obj4(4,9);
    Distance obj5(5,2);

    Distance sum;
    sum=obj1+obj2+obj3+obj4+obj5;

    sum.display();

    return 0;
}