#include<iostream>
using namespace std;
int days;
int nofday(int n)
{
    int y,m,w,d;  // y=years , m=months , w=weeks , d=days
    int x,z;  // x for calculating modulus of m & z for calculating modulus of w
    if (n>=365) 
    {
        y=(n/365);
        
        x=n%365;
        cout<<"years: "<<y<<endl; 
    }
     if (x>=30||(n<365 && n>=30))
    {
         m=(x/30);
          
         z=x%30;
        cout<<"Month: "<<m<<endl; 
    }
     if (z>=7||(n<30 && n>=7))
    {
        w=(z/7);
         z=x%12;
        cout<<"Weeks: "<<w<<endl; 
    }
    if (z>=0)
    {
        d=(z%7);
        cout<<"Days: "<<d<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter day";
    cin>>n;
    nofday(n);

     return 0;
}