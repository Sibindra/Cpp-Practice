// c++ allows you to create your own personal data type known as enum

#include <iostream>
using namespace std;

int main()
{
    enum days
    {
        sun,mon,tue,wed,thu,fri
    };

    days day1,day2;
    day1=sun;
    day2=tue;

    cout<<"Day 1: "<<day1<<endl<<"Day 2: "<<day2;

}
