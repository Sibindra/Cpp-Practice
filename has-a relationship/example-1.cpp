// “is-a” relationship is a relation between two classes where one class is a specialized form of second class
//  If the one concept is a component of another concept then there exist “has-a “ relationship
// e.g. a car has a engine , fire station has fire fighter
#include <iostream>
using namespace std;

class Engine
{
    public:
        void startEngine()
        {
            cout<<"Engine started!"<<endl;
        }

        void stopEngine()
        {
            cout<<"Engine stopped!"<<endl;
        }
};

class Car
{
    Engine e;

    public:
        void startCar()
        {
            e.startEngine();
            cout<<"Car started!"<<endl;
        }

        void stopCar()
        {
            e.stopEngine();
            cout<<"Car stopped!"<<endl;
        }
};

int main()
{
    Car car; //object car of class Car
    car.startCar();
    cout<<endl<<endl;
    car.stopCar();

    return 0;
}