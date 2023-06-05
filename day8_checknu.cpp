#include<iostream>
using namespace std;

int main()
{
    long int x;
    cout<<"Enter nigative, positive or zero number ";
    cin>>x;

    if(x<0)
    {
        cout<<"Number is nigative: "<<x<<endl;
    }
    else if(x>0)
    {
        cout<<"Number is positive: "<<x<<endl;
    }
    else
    {
        cout<<"Number is zero: "<<x<<endl;
    }

return 0;
}