#include <iostream>
using namespace std;

template <typename T> //defining generic datatype
// any function here now becomes a template.

void test()
{
    T a,b;

    cout<<"Enter two values:"<<endl;
    cin>>a>>b;
}