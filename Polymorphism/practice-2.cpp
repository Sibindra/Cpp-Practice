// Write a program to overload binary plus operator(+) to concatenate two strings. using operator function as member function
#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char s1[20];

    public:
        String()
        {

        }

        String(char str[20])
        {
            strcpy(this->s1,str);
        }

        void display()
        {
            cout<<s1<<endl;
        }

        String operator+(String s)
        {
            String temp;

            temp=strcat(s1,s.s1);

            return temp;
        }
};

int main()
{
    char a[]="Conca";
    char b[]="tinated";

    String obj1(a);
    String obj2(b);
    String output;

    output=obj1+obj2;

    output.display();

    return 0;
}