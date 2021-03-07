#include <iostream>
using namespace std;

int main()
{
    int a[20],b[20],n,i;

    cout<<"Enter the size of the array:";
    cin>>n;

    cout<<"Enter "<<n<<" elements of the array:"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter "<<n<<" elements of the second array:"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>b[i];
    }

    cout<<"Sum:"<<endl;
    for (i=0;i<n;i++)
    {
        cout<<(a[i]+b[i])<<"\t";
    }

    return 0;
}
