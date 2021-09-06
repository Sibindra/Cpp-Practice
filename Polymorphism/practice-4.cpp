// Write a program to overload multiplication operator (*) to multiply each element of 3*3 matrix by 9.
#include <iostream>
using namespace std;

class Matrix
{
    int i, j;
    int a[3][3];

public:
    void input();
    void display();

    Matrix operator*(Matrix m)
    {
        Matrix temp;

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                temp.a[i][j]=a[i][j]*9;
            }
        }

        return temp;
    }
};

void Matrix::input()
{
    cout << "Enter the elements of 3*3 matrix: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
}

void Matrix::display()
{
    cout << "The elements of the matrix are: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    Matrix obj1;

    obj1.input();
    obj1.display();

    Matrix calc=obj1*(obj1);
    
    cout<<endl<<"Ans: "<<endl;
    calc.display();

    return 0;    
}