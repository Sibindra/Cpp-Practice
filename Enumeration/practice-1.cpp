// Write a program to define a enumerated data type Month with name of 12 months. Assign first month as 1 and display the integer value assigned to the months.

#include <iostream>
using namespace std;

int main()
{
    enum Month
    {
        jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
    };

    Month first,last;
    first=jan;
    last=dec;

    cout<<"First month: "<<first<<endl<<"Second month: "<<last<<endl;
}