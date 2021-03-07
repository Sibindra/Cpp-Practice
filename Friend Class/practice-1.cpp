// Write a program which has three classes named Practical and Theory and Marks, which have data members to store practical marks, theory marks and total marks respectively. Calculate total marks ( i.e practical marks of Practical class plus theory marks of Theory class ). Use the concept of friend class
#include <iostream>
using namespace std;

class Total;
class Theory
{
    int phy=10;
    int che=20;
    int eng=30;

    friend class Total;
};

class Practical
{
    int phy=30;
    int che=40;
    int eng=20;

    friend class Total;
};

class Total
{
    public:
        int process(Theory t,Practical p);
};

int Total::process(Theory t,Practical p)
{
    int Tphy,Tche,Teng;

    Tphy=t.phy+p.phy;
    Tche=t.che+p.che;
    Teng=t.eng+p.eng;

    cout<<"Total:\nEnglish: "<<Teng<<"\nChemistry: "<<Tche<<"\nPhysics: "<<Tphy<<endl;
}

int main()
{
    Theory obj1;
    Practical obj2;
    Total obj3;

    obj3.process(obj1,obj2);

    return 0;
}