#include<iostream>
using namespace std;
int x;
int y;
double z;
int add(int x, int y)
{
   
    z=(x+y);
}
int sub(int x, int y)
{
  
    z= (x-y);
}
int multi(int x, int y)
{
    
    z= (x*y);
}
double division(int x, int y)
{

    if(y==0)
    {
       z=0;
    }
    else 
    {
       z= (x/y);
    }
}
int modulo(int x, int y)
{
    
    z= (x%y);
}


int main()
{
    int ch;
    cout<<"Enter x & y to perform operations";
    cin>>x>>y;
    do
    {
        char c;
        int v;
       cout<<"Enter your chooice ( you want to perform operations )"<<endl;
       cout<<"Enter 1. for addition"<<endl;
       cout<<"Enter 2. for subtraction"<<endl;
       cout<<"Enter 3. for multipliction"<<endl;
       cout<<"Enter 4. for division"<<endl;
       cout<<"Enter 5. for modulus"<<endl;
       cin>>v;
       switch (v)
       {
          case 1:
              cout<<"addition: "<<add(x,y)<<endl;
             break;
          case 2: 
          cout<<"subtraction: "<<sub(x,y)<<endl;
             break;
          case 3: 
           cout<<"multiplication: "<<multi(x,y)<<endl;
             break;
          case 4: 
          cout<<"division: "<<division(x,y)<<endl;
             break;
          case 5: 
          cout<<"modulus: "<<modulo(x,y)<<endl;
             break;
          default:
          cout<<"Invalid chooice....."<<endl;
             break;
       }
     cout<<"Enter your chooice \n 1. for continiue";
     cin>>ch;
    }
    while (ch==1);
    cout<<endl;
    
    
     return 0;
}