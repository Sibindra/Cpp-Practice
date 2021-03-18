//using private inheritance
#include <iostream>
using namespace std;

class Test
{
    private:
        int a;

    protected:
        int b;

    public:
        int c;
        int input();
        int display();
        int get_a()
        {
            return a;
        }
};

// this meaning that class XYZ is a child class to parent class Test
//here the child class is private
class XYZ:private Test
{
    private:
        int x;

    public:
        int sum();
        int result();
};

int Test::input()
{
    cout<<"Enter the values for a, b and c: "<<endl;
    cin>>a>>b>>c;
}

int Test::display()
{
    cout<<"a= "<<a<<endl<<"b= "<<b<<endl<<"c= "<<c<<endl;
}

// child class
int XYZ::sum()
{
    input(); //imported from parent class since input is private and so is thic class but this function is public
    x=get_a()+b+c;
}

int main()
{
    XYZ obj;

    obj.sum();
    obj.result();

    return 0;
}
