//to find hypotenuse of a right angled triangle
#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int b,p;
    float h;

    cout<<"Enter the base and perpendicular"<<endl;
    cin>>b>>p;

    h=sqrt(p*p+b*b);

    cout<<"Hypoteuse="<<h;
    
    return 0;
}