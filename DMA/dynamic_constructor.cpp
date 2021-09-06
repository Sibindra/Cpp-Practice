#include <iostream>
using namespace std;

class Test
{
    int *p,*q;

    public:
        Test()
        {
            p=new int;
            q=new int;

            *p=0;
            *q=0;
        }

        Test(int a,int b)
        {
            p=new int;
            q=new int;

            *p=a;
            *p=b;
        }

        // destructor
        ~Test()
        {
            delete p;
            delete q;
        }
};

int main()
{
    Test obj1;
    Test obj2(10,20);

    Test *ptr1=new Test;
    Test *ptr2=new Test(10,20);

    delete ptr1;
    delete ptr2;
}