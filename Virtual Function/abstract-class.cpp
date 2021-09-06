// the class having pure virtual function is known as abstract class
#include <iostream>
using namespace	std;

class Base
{
	int x;

	public:
		virtual int a()=0; //a is a pure virtual function
};

class Derived:public Base
{
	int y;

	public:
		int a()
		{
			cout<<"The function a has been called!"<<endl;
			return 0;
		}
};

int main()
{
	Derived d;

	d.a();

	return 0;
}