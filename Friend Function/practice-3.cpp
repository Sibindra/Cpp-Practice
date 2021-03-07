// Write a program which has two classes named Practical and Theory which have data members to store practical and theory marks respectively. Use a non member function to calculate total marks ( i.e practical marks of Practical class and theory marks of Theory class )
#include <iostream>
using namespace std;

class Theory;
class Practical
{
    int phy=10,che=20,eng=30;

    friend int total(Practical p,Theory t);
};

class Theory
{
    int phy=20,che=30,eng=15;

    friend int total(Practical p,Theory t);
};

int total(Practical p,Theory t)
{
    int phy,che,eng;

    phy=p.phy+t.phy;
    eng=p.eng+t.eng;
    che=p.che+t.che;
    
    cout<<"Marks:"<<endl<<"Physics"<<phy<<endl<<"Chemistry: "<<che<<endl<<"English: "<<eng<<endl;
}

int main()
{
    Practical obj1;
    Theory obj2;

    total(obj1,obj2);

    return 0;
}