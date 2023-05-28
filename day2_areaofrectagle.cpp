#include<iostream>
using namespace std;

double areaofrectagle(float w,float l)
{   double area;
    double width,length;
    width=w;       //for assigning w value to variable width
    length=l;     //for assigning l value to variable length
    area=(length*width);
    return area;
}
int main()
{
    float w,l;
    cout<<"Enter a length & width(respectively) for calculat the area of rectangle: ";
    cin>>w>>l;
   

    cout<<"Area of Rectangle is: "<< areaofrectagle(w,l)<<endl;
     return 0;
}