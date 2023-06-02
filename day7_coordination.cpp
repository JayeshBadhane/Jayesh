#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float x1,x2,y1,y2;
    cout<<"Enter the X1, X2, Y1, Y2 to find distance between two coordinatin number";
    cin>>x1>>y1>>x2>>y2;

    float x,y,dist;
    x=pow(x2-x1,2);
    y=pow(y2-y1,2);
    dist=sqrt(x+y);

    cout<<"Distance Between two coordination number: "<<dist;

return 0;
}