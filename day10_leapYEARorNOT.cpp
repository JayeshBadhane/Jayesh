#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter Year to check leap or not: ";
    cin>>x;
    if(x%4==0)
    {
        cout<<"Year "<<x<<" is leap: "<<endl;
    }
    else
    {
        cout<<"Year "<<x<<" is not leap: "<<endl;
    }


return 0;
}