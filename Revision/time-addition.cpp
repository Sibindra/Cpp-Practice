#include <iostream>
using namespace std;

int main()
{
    int h1,h2,m1,m2,s1,s2,h,m,s;

    cout<<"Enter the first time in hour,minute and second format:"<<endl;
    cin>>h1>>m1>>s1;

    cout<<"Enter the second time in hour,minute and second format:"<<endl;
    cin>>h2>>m2>>s2;

    s=s1+s2;
    m=m1+m2+(s/60);
    h=h1+h2+(m/60);
    m=m%60;
    s=s%60;

    cout<<endl<<"Sum: "<<h<<" hours "<<m<<" minutes "<<s<<" seconds";

    return 0;
}