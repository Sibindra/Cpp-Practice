// WAP to add time using friend functions

#include <iostream>
using namespace std;

class Time
{
    int h,m,s;

    public:
        int input();
        int display();

    friend void sum(Time t1,Time t2);
};

void Time::input()
{
    cout<<"Enter the time in hour minute and seconds:"<<endl;
    cin>>h>>m>>s;
}

void Time::display()
{
    cout<<h<<" hours "<<m<<" minutes "<<s<<" seconds."<<endl;
}

void sum(Time t1,Time t2)
{
    Time t3;

    t3.s=t1.s+t2.s;
    t3.m=t1.m+t2.m+(t3.s/60);
    t3.h=t1.h+t2.h+(t3.m/60);
    t3.m=t3.m%60;
    t3.s=t3.s%60;

    cout<<"Sum: "<<t3.h<<" hours "<<t3.m<<" minutes "<<t3.s<<" seconds.";
}

int main()
{
    Time obj1,obj2;

    obj1.input();
    obj2.input();
    cout<<endl<<"Result:"<<endl;;
    obj1.display();
    obj2.display();

    sum(obj1,obj2);

    return 0;
}