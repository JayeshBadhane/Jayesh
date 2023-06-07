#include<iostream>
using namespace std;

int main()
{  char ch;
cout<<"Enter charector or number or special symbol";
cin>>ch;

if (ch>=48&&ch<=57)
{
   cout<<"Entred value is number: "<<ch<<endl;
}
else if ((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
{
    cout<<"Entred value is charector: "<<ch<<endl;
}
else
{
    cout<<"Entred value is special symbol: "<<ch<<endl;
}



return 0;
}