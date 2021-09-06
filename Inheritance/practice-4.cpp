// Define a class Student which has roll number and member functions to input and display roll number. Derive a class Examination from class Student which has marks of two subjects and member functions to initialize and display marks. Again derive a class Result from class Examination and calculate total and display the result.
#include <iostream>
using namespace std;

class Student
{
    protected:
        int rollNumber;

    public:
        int inputDetails()
        {
            cout<<"Enter the roll no:";
            cin>>rollNumber;
            return 0;
        }

        int displayDetails()
        {
            cout<<"Roll no:"<<rollNumber;
            return 0;
        }
};

class Examination:public Student
{
    protected:
        int subject1,subject2;
    public:
        int setMarks()
        {
            cout<<"Enter marks for Subject 1:";
            cin>>subject1;
            cout<<"Enter marks for Subject 2:";
            cin>>subject2;
            return 0;
        }

        int displayMarks()
        {
            cout<<"Subject 1:"<<subject1<<endl<<"Subject 2:"<<subject2;
            return 0;
        }
};

class Result:public Examination
{
    int total;

    public:
        int displayResult()
        {
            total=subject1+subject2;
            cout<<"Total:"<<total<<endl;

            return 0;
        }
};

int main()
{
   Result obj;

   obj.Student::inputDetails();
   obj.Student::displayDetails();
   cout<<endl; 
   obj.Examination::setMarks();
   obj.Examination::displayMarks();
   cout<<endl; 
   obj.displayResult();

   return 0;
}