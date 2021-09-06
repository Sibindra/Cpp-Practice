// Write a program to define a class Time with data members hours, minutes and seconds. Overload binary plus operator(+) to add two times using operator function as member function
#include <iostream>
using namespace std;

class Time
{
    int hr,min,sec;

    public:
        Time()
        {
            hr=0;
            min=0;
            sec=0;
        }

        Time(int h,int m,int s)
        {
            hr=h;
            min=m;
            sec=s;
        }

        void display()
        {
            cout<<hr<<" hours "<<min<<" minutes "<<sec<<" seconds "<<endl;
        }

        Time operator+(Time t)
        {
            Time temp;

            temp.sec=sec+t.sec;
            temp.min=min+t.min+(temp.sec/60);
            temp.hr=hr+t.hr+(temp.min/60);

            temp.min%=60;
            temp.sec%=60;

            return temp;
        }
};

int main()
{
    Time obj1(6,50,30);
    Time obj2(4,10,40);
    Time sum;

    sum=obj1+obj2;

    sum.display();

    return 0;
}