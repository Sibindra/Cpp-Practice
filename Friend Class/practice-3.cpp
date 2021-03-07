// Create a class called Mountain with data members name, height and location. Define a member function to initialize the data members. A friend function cmpHeight() to compare height of two objects and member function displayInfo() to display information of mountain. In main create two objects of the class mountain and display the information of mountain with greatest height.
#include <iostream>
using namespace std;

class Mountain
{
    char name[50],location[50];
    int height;

    public:
        int setValue();
        int displayInfo();

    friend int cmpHeight(Mountain m1,Mountain m2);
};

int Mountain::setValue()
{
    cout<<"Enter the name:";
    cin>>name;

    cout<<"Enter the location:";
    cin>>location;

    cout<<"Enter the height:";
    cin>>height;
}

int Mountain::displayInfo()
{
    cout<<endl<<"Information:\nName: "<<name<<"\nLocation: "<<location<<"\nHeight: "<<height<<endl;
}

int cmpHeight(Mountain m1,Mountain m2)
{

    if(m1.height>m2.height)
    {
        m1.displayInfo();
    }

    else
    {
        m2.displayInfo();
    }
}

int main()
{
    Mountain obj1,obj2;

    obj1.setValue();
    cout<<endl;
    obj2.setValue();
    cout<<endl;
    cmpHeight(obj1,obj2);

    return 0;
}