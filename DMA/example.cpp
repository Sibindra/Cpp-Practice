#include <iostream>
using namespace std;

int main()
{
    int *ptr=new int;

    cout<<"Enter an integer:";
    cin>>*ptr;

    cout<<"The number is:"<<*ptr<<endl;

    delete ptr;
    return 0;
}