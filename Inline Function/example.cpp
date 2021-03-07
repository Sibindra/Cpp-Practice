// Program to calculate area of rectangle using inline function

#include <iostream>
using namespace std;

inline int ret(int l,int b)
{
    return (l*b);
}

int main()
{
    int length,breadth,area;

    cout<<"Enter the length and breadth:"<<endl;
    cin>>length>>breadth;

    area= ret(length,breadth);

    cout<<"Area: "<<area;

    return 0;
}